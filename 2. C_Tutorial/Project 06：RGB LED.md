# Project 06: RGB LED

### **1. Introduction**

![image-20230509085806361](media/image-20230509085806361.png)

In this project, we will introduce the RGB LED and show you how to use the Plus control board to control the RGB LED. Even though RGB LED is very basic, it is also a great way to learn the fundamentals of electronics and coding.

### **2.Components Required**

| ![image-20230508174234295](media/image-20230508174234295.png) | ![image-20230508174237376](media/image-20230508174237376.png) | ![image-20230508174241424](media/image-20230508174241424.png) |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| Raspberry Pi Pico*1                                          | Raspberry Pi Pico Expansion Board*1                          | RGB LED*1                                                    |
| ![image-20230508174245328](media/image-20230508174245328.png) | ![image-20230508174248273](media/image-20230508174248273.png) | ![image-20230508174255408](media/image-20230508174255408.png) |
| 220Ω Resistor*3                                              | Breadboard*1                                                 | Jumper Wires                                                 |
| ![image-20230508174304337](media/image-20230508174304337.png) |                                                              |                                                              |
| USB Cable*1                                                  |                                                              |                                                              |

### **3. Component Knowledge**

**RGB LED：**

![image-20230508174241424](media/image-20230508174241424.png) 

The monitors mostly adopt the RGB color standard, and all the colors on the computer screen are composed of the three colors of red, green and blue mixed in different proportions. 

![image-20230509085852247](media/image-20230509085852247.png)

![image-20230509085900336](media/image-20230509085900336.png)

This RGB LED has pin R, G and B and a common cathode. To change its brightness, we can use the PWM pins which can give different duty cycle signals to the RGB LED to produce different colors.

### **4.Circuit Diagram and Wiring Diagram**

![image-20230509085912888](media/image-20230509085912888.png)

![image-20230509085927509](media/image-20230509085927509.png)

**Note:**

RGB LED longest pin (common cathode) connected to GND.

![image-20230509085939736](media/image-20230509085939736.png)

How to identify the 220Ω 5-band resistor

![image-20230509085948007](media/image-20230509085948007.png)

### **5.Test Code**

We need to create three PWM channels and use random duty cycles to light up the RGB LEDs randomly.

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 06：RGB LED\Project_06_RGB_LED.

```c
//**********************************************************************
/*
 * Filename    : RGB LED
 * Description : Use RGBLED to show random color.
 * Auther      : http//www.keyestudio.com
*/
int ledPins[] = {18, 17, 16};    //define red, green, blue led pins
int red, green, blue;
void setup() {
  for (int i = 0; i < 3; i++) {   //setup the pwm channels,1KHz,8bit
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  red = random(0, 255);
  green = random(0, 255);
  blue = random(0, 255);
  setColor(red, green, blue);
  delay(1000);
}

void setColor(byte r, byte g, byte b) {
  analogWrite(ledPins[0], 255-r); //Common cathode LED, high level to turn on the led.
  analogWrite(ledPins[1], 255-g);
  analogWrite(ledPins[2], 255-b);
}
//*********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509090019292](media/image-20230509090019292.png)

Click ![image-20230509090033938](media/image-20230509090033938.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509090129424](media/image-20230509090129424.png)

![image-20230509090140319](media/image-20230509090140319.png)

### **6.Test Result**

Upload the project code, wire up, power up and wait a few seconds, the RGB will show random colors.
