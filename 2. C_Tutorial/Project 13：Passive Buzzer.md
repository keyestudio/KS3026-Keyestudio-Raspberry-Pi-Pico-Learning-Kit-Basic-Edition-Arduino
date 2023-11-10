# Project 13：Passive Buzzer

### **Introduction**

In this project, we will learn the passive buzzer and use the Plus control board to control the passive buzzer to play a song. Unlike an active buzzer, a passive buzzer can emit sounds of different frequencies. 

### **Components Required**

| ![image-20230509092511195](media/image-20230509092511195.png) | ![image-20230509092515393](media/image-20230509092515393.png) | ![image-20230509092519825](media/image-20230509092519825.png) |
| ------------------------------------------------------- | ------------------------------------ | ---------------------- |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 | USB Cable\*1 |
| ![image-20230509092527229](media/image-20230509092527229.png) |![image-20230509092531506](media/image-20230509092531506.png)|![image-20230509092536641](media/image-20230509092536641.png)|
| Passive Buzzer\*1                                       | Breadboard\*1                        | Jumper Wires           |

### **Component Knowledge**

![image-20230509092549609](media/image-20230509092549609.png)

A passive buzzer is an integrated electronic buzzer with no internal vibration source. It must be driven by 2K to 5K square wave, not a DC signal. The two buzzers are very similar in appearance, but one buzzer with a green circuit board is a passive buzzer, while the other with black tape is an active buzzer. Passive buzzers cannot distinguish between positive polarity while active buzzers can.

![image-20230509092555015](media/image-20230509092555015.png)

### **Circuit Diagram and Wiring Diagram**

![image-20230509092757533](media/image-20230509092757533.png)

![image-20230509092803085](media/image-20230509092803085.png)

### **Test Code**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 13：Passive Buzzer\Project_13_Passive_Buzzer.

```c
//**********************************************************************
/*
 * Filename    : Passive Buzzer
 * Description : Passive Buzzer sounds the alarm.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_BUZZER 16   //define buzzer pins

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
    alert();
}

void alert() {
  float sinVal;         // Define a variable to save sine value
  int toneVal;          // Define a variable to save sound frequency
  for (int x = 0; x < 360; x += 10) {     // X from 0 degree->360 degree
    sinVal = sin(x * (PI / 180));       // Calculate the sine of x
    toneVal = 2000 + sinVal * 500;      // Calculate sound frequency according to the sine of x
    freq(PIN_BUZZER, toneVal, 10);
  }
}

void freq(int PIN, int freqs, int times) {
  if (freqs == 0) {
    digitalWrite(PIN, LOW);
  }
  else {
    for (int i = 0; i < times * freqs / 1000; i ++) {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(1000000 / freqs / 2);
      digitalWrite(PIN, LOW);
      delayMicroseconds(1000000 / freqs / 2);
    }
  }
}
//**********************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509093046689](media/image-20230509093046689.png)

Click ![image-20230509093055773](media/image-20230509093055773.png) to upload the test code to the Raspberry Pi Pico board

![image-20230509093101569](media/image-20230509093101569.png)

![image-20230509093109009](media/image-20230509093109009.png)

### **Result**

Upload the project code, wire up and power on, then the passive buzzer will alarm.
