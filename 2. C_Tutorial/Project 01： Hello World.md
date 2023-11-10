# Project 01: Hello World

### **1.Introduction**

For Raspberry Pi Pico beginners, we will start with some simple things. In this project, you only need a Raspberry Pi Pico and a USB cable to complete the "Hello World!" project, which is a test of communication between Raspberry Pi Pico and the PC as well as a primary project.

### **2.Components**

| ![](media/image-20230508170349002.png) |![image-20230508170355528](media/image-20230508170355528.png)|
| :-----------------------------: | :--------------------: |
| Raspberry Pi Pico\*1            | USB Cable*1        |

### **3.Wiring**

In this project, we use a USB cable to connect the Raspberry Pi Pico to the computer.

![image-20230508170416104](media/image-20230508170416104.png)

### **4.Test Code**

You can open the code we provide:

The code used in this project is saved in (path :) KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 01：Hello World\Project_01_Hello_World.

```c
//*************************************************************************************
/*
 * Filename    : Hello World
 * Description : Enter the letter R,and the serial port displays"Hello World".
 * Auther      :http//www.keyestudio.com
*/
char val;// defines variable "val"
void setup()
{
Serial.begin(115200);// sets baudrate to 115200
}
void loop()
{
  if (Serial.available() > 0) {
    val=Serial.read();// reads symbols assigns to "val"
    if(val=='R')// checks input for the letter "R"
    {  // if so,    
     Serial.println("Hello World!");// shows “Hello World !”.
    }
  }
}
//*************************************************************************************
```

Before uploading the code to the Raspberry Pi Pico, please check the [configuration](javascript:;) of the Arduino IDE.

Click **Tools** to confirm the board type and port as follows:

![image-20230509083134825](media/image-20230509083134825.png)

Click![img](media/wps1.jpg) to upload the test code to the Raspberry Pi Pico.

![image-20230509083144761](media/image-20230509083144761.png)

The code is uploaded successfully!

![image-20230509083154129](media/image-20230509083154129.png)

### **5.Test Result**

After uploading successfully, click the icon ![img](media/wps2.jpg) to enter the serial monitor.

Set baud rate to 115200 and type "R" in the text box. Click "Send", the serial monitor will display "Hello World!”.

![image-20230509083204588](media/image-20230509083204588.png)
