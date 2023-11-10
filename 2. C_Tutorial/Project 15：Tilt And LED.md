# Project 15：Tilt And LED

### **Introduction**

In this lesson, we will use a PLUS mainboard , a tilt switch and 4 LEDs to make an electronic hourglass.

### **Components Required**

| ![img](media/wps1-16835968731549.png)  | ![img](media/wps2-168359687442910.jpg) | ![img](media/wps3-168359687594311.jpg) | ![img](media/wps4-168359687751012.jpg) | ![img](media/wps5-168359687876513.jpg) |
| -------------------------------------- | -------------------------------------- | -------------------------------------- | -------------------------------------- | -------------------------------------- |
| Raspberry Pi Pico*1                    | Raspberry Pi Pico Expansion Board*1    | Tilt Switch*1                          | Red LED*4                              | 10KΩ Resistor*1                        |
| ![img](media/wps6-168359688060514.jpg) | ![img](media/wps7-168359688310215.jpg) | ![img](media/wps8-168359688463016.jpg) | ![img](media/wps9-168359688650917.jpg) |                                        |
| Breadboard*1                           | 220Ω Resistor*4                        | USB Cable*1                            | Jumper Wires                           |                                        |

### **Component Knowledge**

![image-20230509094819129](media/image-20230509094819129.png)

Tilt switch is also called digital switch. Inside is a metal ball that can roll. The principle of rolling the metal ball to contact with the conductive plate at the bottom, which is used to control the on and off of the circuit. When it is a rolling ball tilt sensing switch with single directional trigger, the tilt sensor is tilted toward the trigger end (two gold-plated pin ends), the tilt switch is in a closed circuit and the voltage at the analog port is about 5V (binary number is 1023). In this way, the LED will light up. When the tilt switch is in a horizontal position or tilted to the other end, it is open and the voltage of the analog port is about 0V (binary number is 0), the LED will turn off. In the program, we judge the state of the switch based on whether the voltage value of the analog port is greater than 2.5V (binary number is 512).

As shown in the figure, use the internal structure of the tilt switch to illustrate how it works.

![image-20230509094841976](media/image-20230509094841976.png)

### **Circuit Diagram and Wiring Diagram**

![image-20230509094856795](media/image-20230509094856795.png)

![image-20230509094909033](media/image-20230509094909033.png)

Note:

How to connect the LED

![image-20230509094916987](media/image-20230509094916987.png)

How to identify the 220Ω 5-band resistor and 10KΩ 5-band resistor

![img](media/wps10-168359696706818.jpg)

![img](media/wps11-168359696706919.jpg)

### **Test Code**

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 15：Tilt And LED\\Project\_15\_Tilt\_And\_LED

```c
//**********************************************************************
/* 
 * Filename    : Tilt And LED
 * Description : Tilt switches and four leds to simulate an hourglass.
 * Auther      : http//www.keyestudio.com
*/
#define SWITCH_PIN  22  // the tilt switch is connected to Pin22
byte switch_state = 0;
void setup()
{
     for(int i=16;i<20;i++)
  {
        pinMode(i, OUTPUT);
  } 
    pinMode(SWITCH_PIN, INPUT);
 for(int i=16;i<20;i++)
  {
    digitalWrite(i,0);
  } 
  Serial.begin(9600);
}
void loop()
{
switch_state = digitalRead(SWITCH_PIN); 
Serial.println(switch_state);
 if (switch_state == 0) 
 {
 for(int i=16;i<20;i++)
  {
    digitalWrite(i,1);
    delay(500);
  } 
  }
   if (switch_state == 1) 
 {
   for(int i=19;i>15;i--)
   {
    digitalWrite(i,0);
    delay(500);
   }
  }
}
//***************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509095004894](media/image-20230509095004894.png)

Click ![image-20230509095013819](media/image-20230509095013819.png) to upload the test code to the Raspberry Pi Pico board

![image-20230509095019294](media/image-20230509095019294.png)

![image-20230509095026333](media/image-20230509095026333.png)

### **Result**

Upload project code, wire up and power up, hold the breadboard. When you tilt the breadboard to any angle, the LEDs will light up one by one. When you turn the breadboard to the original angle, the LEDs will turn off one by one.
