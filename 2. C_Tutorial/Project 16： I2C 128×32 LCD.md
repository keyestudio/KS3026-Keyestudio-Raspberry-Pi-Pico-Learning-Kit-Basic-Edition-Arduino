# Project 16: I2C 128×32 LCD

### **Introduction**

We can use modules such as monitors to do various experiments in life. You can also DIY a variety of small objects. For example, you can make a temperature meter with a temperature sensor and display, or make a distance meter with an ultrasonic module and display.

In this project, we will use the LCD_128X32_DOT module as a display and connect it to the Plus control board. The pico board will be used to control the LCD_128X32_DOT display to show various English characters, common symbols and numbers.

### **Components Required**

| ![img](file:///C:\Users\ADMINI~1\AppData\Local\Temp\ksohtml5620\wps12.png) | ![img](file:///C:\Users\ADMINI~1\AppData\Local\Temp\ksohtml5620\wps13.jpg) | ![img](file:///C:\Users\ADMINI~1\AppData\Local\Temp\ksohtml5620\wps14.jpg) | ![img](file:///C:\Users\ADMINI~1\AppData\Local\Temp\ksohtml5620\wps15.jpg) |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| Raspberry Pi Pico*1                                          | LCD_128X32_DOT*1                                             | 10CM M-F Dupont Wires                                        | USB Cable*1                                                  |

### **Component Knowledge**

![](/media/2c2645e94a00867ac23e8a022f0a631a.png)

**LCD\_128X32\_DOT:** 

It is an LCD module with 128*32 pixels and its driver chip is ST7567A. The module uses the IIC communication mode, while the code contains a library of all alphabets and common symbols that can be called directly. When using, we can also set it in the code so that the  English letters and symbols show different text sizes.

**Schematic diagram:**

![image-20230509095617056](media/image-20230509095617056.png)

**Features:**

Pixel：128\*32 character

Operating voltage(chip)：4.5V to 5.5V

Operating current：100mA (5.0V)

Optimal operating voltage(module):5.0V

### **Connection Diagram**

**Attention: You must use a 10CM short male-to-female DuPont cable to connect the LCD\_128X32\_DOT, and the LCD\_128X32\_DOT will display normally; otherwise, using a 20CM long male-to-female DuPont cable may cause the LCD\_128X32\_DOT to display abnormally.**

![image-20230509095644255](media/image-20230509095644255.png)

### **Adding the lcd128\_32\_io library**

We need the **lcd128\_32\_io library.** You can add it as follows:

Open the Arduino IDE，click“Sketch”→“Include Library”→“Add .zip Library...”.

Then go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\2. Windows  System\2. C_Tutorial\3. Libraries\LCD_128X32.Zip. 

Click LCD_128X32.Zip and“Open”.

![img](media/wps16.jpg)

![img](media/wps17.jpg)

### **Test Code**

After adding the **lcd128\_32\_io library, you can open the code we provide;**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit  Basic Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 16：I2C 128×32 LCD\Project_16_I2C_128_32_LCD

```c
//**********************************************************************************
/*
 * Filename    : LCD 128*32
 * Description : LCD 128*32 display string
 * Auther      : http//www.keyestudio.com
*/
#include "lcd128_32_io.h"

//Create lCD128 *32 pin，sda--->20， scl--->21
lcd lcd(20, 21);

void setup() {
  lcd.Init(); //initialize
  lcd.Clear();  //clear
}

void loop() {
  lcd.Cursor(0, 4); //Set display position
  lcd.Display("KEYESTUDIO"); //Setting the display
  lcd.Cursor(1, 0);
  lcd.Display("ABCDEFGHIJKLMNOPQR");
  lcd.Cursor(2, 0);
  lcd.Display("123456789+-*/<>=$@");
  lcd.Cursor(3, 0);
  lcd.Display("%^&(){}:;'|?,.~\\[]");
}
//**********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509095828849](media/image-20230509095828849.png)

Click ![image-20230509095836943](media/image-20230509095836943.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509095844215](media/image-20230509095844215.png)

![image-20230509095856770](media/image-20230509095856770.png)

### **Test Result**

Upload the test code, wire up and power on, the LCD module display will show "KEYESTUDIO" at the first line.

"ABCDEFGHIJKLMNOPQR" will be displayed at the second line. "123456789 + - * / <> = $ @ " will shown at the third line and "% ^ & () {} :; '|?,. ~ \\ [] " will be displayed at the fourth line.
