# Project 16: I2C 128×32 LCD

1.  **Introduction**
    
    We can use modules such as monitors to do various experiments in
    life. You can also DIY a variety of small objects. For example, you
    can make a temperature meter with a temperature sensor and display,
    or make a distance meter with an ultrasonic module and display.
    
    In this project, we will use the LCD\_128X32\_DOT module as a
    display and connect it to the Plus control board. The pico board
    will be used to control the LCD\_128X32\_DOT display to show various
    English characters, common symbols and numbers.

|                                                         |                         |                        |                        |
| ------------------------------------------------------- | ----------------------- | ---------------------- | ---------------------- |
| ![](/media/7dcbd02995be3c142b2f97df7f7c03ce.png) |
| Raspberry Pi Pico\*1                                    | LCD\_128X32\_DOT\*1     | 10CM M-F Dupont Wires  | USB Cable\*1           |

2.  **Components Required**

3.  **Component Knowledge**
    
    ![](/media/2c2645e94a00867ac23e8a022f0a631a.png)

**LCD\_128X32\_DOT:** It is an LCD module with 128\*32 pixels and its
driver chip is ST7567A. The module uses the IIC communication mode,
while the code contains a library of all alphabets and common symbols
that can be called directly. When using, we can also set it in the code
so that the English letters and symbols show different text sizes.

**Schematic diagram:**

![](/media/5451aed32bc5b7b30fbd5613ad09a65b.png)

**Features:**

Pixel：128\*32 character

Operating voltage(chip)：4.5V to 5.5V

Operating current：100mA (5.0V)

Optimal operating voltage(module):5.0V

4.  **Connection Diagram**
    
    **Attention: You must use a 10CM short male-to-female DuPont cable
    to connect the LCD\_128X32\_DOT, and the LCD\_128X32\_DOT will
    display normally; otherwise, using a 20CM long male-to-female DuPont
    cable may cause the LCD\_128X32\_DOT to display abnormally.**

![](/media/82aae0a70e5628c53d7f81f7730cf79a.png)

**5. Adding the lcd128\_32\_io library：**

We need the **lcd128\_32\_io library.** You can add it as follows:

Open the Arduino IDE，click“Sketch”→“Include Library”→“Add .zip
Library...”.

Then go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit
Basic Edition\\2. Windows System\\2. C\_Tutorial\\3.
Libraries\\LCD\_128X32.Zip.

Click LCD\_128X32.Zip and“Open”.

![](/media/9d88beca6a704f06356e2584f231c70a.png)

![](/media/5756080310fcd627d32d1bc73a004679.png)

5.  **Test Code：**

After adding the **lcd128\_32\_io library, you can open the code we
provide;**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 16：I2C
128×32 LCD\\Project\_16\_I2C\_128\_32\_LCD

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : LCD 128*32</p>
<p>* Description : LCD 128*32 display string</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "lcd128_32_io.h"</p>
<p>//Create lCD128 *32 pin，sda---&gt;20， scl---&gt;21</p>
<p>lcd lcd(20, 21);</p>
<p>void setup() </p>
<p>void loop() :;'|?,.~\\[]");</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/6a61776b96542e97a40782563776f77b.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/5c7d4d1757b8c31120979f5e460fa475.png)

![](/media/11602f33216acee34159a32646a6dade.png)

**6. Test Result：**

Upload the test code, wire up and power on, the LCD module display will
show "KEYESTUDIO" at the first line."ABCDEFGHIJKLMNOPQR" will be
displayed at the second line. "123456789 + - \* / \<\> = $ @ " will
shown at the third line and "% ^ & () {} :; '|?,. \~ \\\\ \[\] " will be
displayed at the fourth line.
