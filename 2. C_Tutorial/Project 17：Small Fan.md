# Project 17：Small Fan

### **Introduction**

In the hot summer, we need an electric fan to cool us down, so in this project, we will use the Plus control board to control 130 motor module and small blade to make a small fan.

### **Components Required**

| ![image-20230509100045400](media/image-20230509100045400.png) | ![image-20230509100048648](media/image-20230509100048648.png) | ![image-20230509100104199](media/image-20230509100104199.png) |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| Raspberry Pi Pico*1                                          | Raspberry Pi Pico Expansion Board*1                          | DC Motor*1                                                   |
| ![image-20230509100115721](media/image-20230509100115721.png) | ![image-20230509100118679](media/image-20230509100118679.png) | ![image-20230509100122457](media/image-20230509100122457.png) |
| Breadboard*1                                                 | Fan*1                                                        | S8050 Triode*1                                               |
| ![image-20230509100134247](media/image-20230509100134247.png) | ![image-20230509100137640](media/image-20230509100137640.png) | ![image-20230509100140600](media/image-20230509100140600.png) |
| S8550 Triode*1                                               | 1KΩ Resistor*1                                               | Jumper Wires                                                 |
| ![image-20230509100151576](media/image-20230509100151576.png) | ![image-20230509100154568](media/image-20230509100154568.png) |                                                              |
| Diode*1                                                      | USB Cable*1                                                  |                                                              |

### **Component Knowledge**

![image-20230509100207296](media/image-20230509100207296.png)

**Triode：**

It is referred as the semiconductor triode and a bipolar transistor or a transistor.

The triode is one of the basic semiconductor components as the core of the electronic circuit, which can amplify current. The triode means that two PN junctions are made on a semiconductor wafer. The two PN junctions divide the entire semiconductor into three parts. The middle part is the base area, and the two sides are the emitter and collector areas.

As for NPN triode, it is composed of two N type semiconductors and a P type semiconductor.

The type of transistor which may be used in some applications in place of the triode tube is the "junction" transistor, which actually has two junctions. It has an emitter, base, and collector which correspond to the cathode, grid, and plate, respectively, in the triode tube. Junction transistors are of two types, the NPN type and the PNP type.

The PN junction between the emitting area and the base area is emitter junction and the PN junction flanked by the collector area and the base area is collector junction. And three pins are E（Emitter, B (Base)and C (Collector).

**S8050（NPN triode）**

![image-20230509100714352](media/image-20230509100714352.png)

**S8550（PNP triode)**

![image-20230509100736734](media/image-20230509100736734.png)

The S8050 transistor is a low-power NPN silicon tube and its the maximum voltage of collector and base can reach 40V and the current of the collector is (Ic) 0.5A.

The pins of the S8050 transistor should facing down, pin 1 is the emitter (E pole), pin 2 is the base (B pole), and pin 3 is the collector (C pole). Similarly, the S8550 transistor is the same. 

![img](media/wps18.jpg) ![img](media/wps19.png)

The commonly used triodes are divided into two types: PNP type triode and NPN type triode. S8550 is the PNP type triode, S8050 is the NPN type triode, what we provide in this kit are S8050 and S8550. 

![img](media/wps20.jpg)       ![img](media/wps21.jpg)    

### **Connection Diagram 1**

we apply the S8050(NPN triode) in this experiment to control the motor

![image-20230509101005673](media/image-20230509101005673.png)

![image-20230509101015067](media/image-20230509101015067.png)

### **Test Code 1**

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 17：Small Fan\\Project\_17.1\_Small\_Fan

```c
//**********************************************************************
/* 
 * Filename    : Small_Fan
 * Description  : S8050 triode drives the motor working
 * Auther      : http//www.keyestudio.com
*/

void setup() {
  
  pinMode(22, OUTPUT); // Initialize pin 22 as output.
}

void loop() {
  digitalWrite(22, HIGH);   // Turn on the motor (HIGH means HIGH level)
  delay(4000);              // Delay 4 seconds
  digitalWrite(22, LOW);    // Reduce the voltage and turn off the motor
  delay(2000);              // Delay 2 seconds
}
//***************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509101104411](media/image-20230509101104411.png)

Click ![image-20230509101113735](media/image-20230509101113735.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509101129802](media/image-20230509101129802.png)

![image-20230509101136556](media/image-20230509101136556.png)

### **Test Result 1**

Upload the code and power up with a USB cable. Then fan will rotate for 4s, stop for 2s.

### **Circuit diagrams and wiring diagrams 2**

We use the S8550 PNP triode to control the motor

![image-20230509101214733](media/image-20230509101214733.png)

![image-20230509101221836](media/image-20230509101221836.png)

### **Test Code 2**

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 17：Small Fan\\Project\_17.2\_ Small\_Fan

```c
//**********************************************************************
/* 
 * Filename    : Small_Fan
 * Description : S8550 triode drives the motor working
 * Auther      : http//www.keyestudio.com
*/

void setup() {
  
  pinMode(22, OUTPUT); // Initialize pin 22 as output.
}

void loop() {
  digitalWrite(22, LOW);   // Turn on the motor (LOW means LOW level)
  delay(4000);              // Delay 4 seconds
  digitalWrite(22, HIGH);    // Raise the voltage and turn off the motor
  delay(2000);              // Delay 2 seconds
}
//*************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509101343743](media/image-20230509101343743.png)

Click ![image-20230509101351993](media/image-20230509101351993.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509101403823](media/image-20230509101403823.png)

![image-20230509101411037](media/image-20230509101411037.png)

### **Test Result 2**

Upload the code to and power up with a USB cable.

Install the fan onto the DC motor, after powering, you will see the motor rotates for 4s and stop for 2s, in a loop way.
