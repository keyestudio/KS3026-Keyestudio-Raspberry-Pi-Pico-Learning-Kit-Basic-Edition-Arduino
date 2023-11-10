# Project 05：Traffic Lights

### **1.Introduction**

Traffic lights are closely related to people's daily lives. Traffic lights generally show red, yellow, and green. Everyone should obey the traffic rules, which can avoid many traffic accidents. In this project, we will use a pico board and some LEDs (red, green and yellow) to simulate the traffic lights.

### **2.Components**

| ![image-20230508173733486](media/image-20230508173733486.png) | ![image-20230508173737548](media/image-20230508173737548.png) |![image-20230508173741517](media/image-20230508173741517.png)|![image-20230508173805353](media/image-20230508173805353.png)||
| ------------------------------------------------------- | ------------------------------------ | --------------------------- | ----------------------- | ----------------------- |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 | Red LED\*1                  | Yellow LED\*1           |                         |
| ![image-20230508173746302](media/image-20230508173746302.png) |![image-20230508173751613](media/image-20230508173751613.png)|![image-20230508173755293](media/image-20230508173755293.png)|![image-20230508173759655](media/image-20230508173759655.png)|<img src="media/c801a7baee258ff7f5f28ac6e9a7097b-16835386290032.png" style="zoom:80%;" />|
| Green LED\*1                                            | USB Cable\*1                         | 220Ω Resistor\*3            | Breadboard\*1           | Jumper Wires            |

### **3. Circuit Diagram and Wiring Diagram**

![image-20230509085503224](media/image-20230509085503224.png)

![image-20230509085516632](media/image-20230509085516632.png)

Note:

How to connect an LED

![image-20230509085534036](media/image-20230509085534036.png)

How to identify the 220Ω 5-band resistor

![image-20230509085543657](media/image-20230509085543657.png)

### **4.Test Code**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 05：Traffic Lights\\Project\_05\_Traffic\_Lights.

```c
//**********************************************************************
/*
 * Filename    : Traffic Lights
 * Description : Simulated traffic lights.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_LED_RED   16   //define the red led pin
#define PIN_LED_YELLOW   17   //define the yellow led pin
#define PIN_LED_GREEN  18   //define the green led pin

void setup() {
  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED_GREEN, HIGH);// turns on the green led
delay(5000);// delays 5 seconds
digitalWrite(PIN_LED_GREEN, LOW); // turns off the green led
for(int i=0;i<3;i++)// flashes 3 times.
{
delay(500);// delays 0.5 second
digitalWrite(PIN_LED_YELLOW, HIGH);// turns on the yellow led
delay(500);// delays 0.5 second
digitalWrite(PIN_LED_YELLOW, LOW);// turns off the yellow led
} 
delay(500);// delays 0.5 second
digitalWrite(PIN_LED_RED, HIGH);// turns on the red led
delay(5000);// delays 5 second
digitalWrite(PIN_LED_RED, LOW);// turns off the red led
}
//********************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509085712619](media/image-20230509085712619.png)

Click ![image-20230509085726336](media/image-20230509085726336.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509085737115](media/image-20230509085737115.png)

![image-20230509085747499](media/image-20230509085747499.png)

### **5.Test Result**

Upload the code and power on, the green LED will light up for 5s then go off. Next, the yellow one will blink for 3 times and red LED will be on for 5s then go off.
