# Project 07: Flowing Light

### **Introduction**

In our daily life, we can see many billboards made up of different colors of LED. They constantly change the light to attract the attention of customers. In this project, we will use Plus control board with 5 LEDs to achieve the effect of flowing water.

### **Components Required**

![image-20230508174635478](media/image-20230508174635478.png)

### **Circuit Diagram and Wiring Diagram**

![image-20230509090258830](media/image-20230509090258830.png)

![image-20230509090311519](media/image-20230509090311519.png)

**Note:**

How to connect the LED

![image-20230509090341482](media/image-20230509090341482.png)

How to identify the 220Ω 5-band resistor

![image-20230509090352682](media/image-20230509090352682.png)

### **Test Code：**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 07：Flowing Water Light\Project_07_Flowing_Water_Light

```c
//**********************************************************************
/* 
 * Filename    : Flowing Water Light
 * Description : Using ten leds to demonstrate flowing lamp.
 * Auther      : http//www.keyestudio.com
*/
byte ledPins[] = {16, 17, 18, 19, 20, 21, 22, 26, 27, 28};
int ledCounts;

void setup() {
  ledCounts = sizeof(ledPins);
  for (int i = 0; i < ledCounts; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledCounts; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = ledCounts - 1; i > -1; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}
//**************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509090412014](media/image-20230509090412014.png)

Click ![image-20230509090428253](media/image-20230509090428253.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509090439950](media/image-20230509090439950.png)

![image-20230509090450622](media/image-20230509090450622.png)

### **Test Result：**

After burning the project code, connecting the wires and powering on, the 10 LEDs will gradually light up and then gradually go off.

![image-20230508174807107](media/image-20230508174807107.png)
