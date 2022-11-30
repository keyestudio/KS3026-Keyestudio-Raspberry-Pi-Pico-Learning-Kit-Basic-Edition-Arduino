# Project 10：8×8 Dot-matrix Display

1.  **Introduction**

The dot-matrix display is an electronic digital display device that can
show information on machines, clocks and many other devices. In this
project, we will use the pico board control the 8x8 LED dot matrix to
make a“❤”pattern.

2.  **Components Required**

|                                                         |                                      |                        |
| ------------------------------------------------------- | ------------------------------------ | ---------------------- |
| ![](/media/bbed91c0b45fcafc7e7163bfeabf68f9.png)      |                        |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 |                        |
| ![](/media/7dcbd02995be3c142b2f97df7f7c03ce.png) |
| 8\*8 Dot-matrix Display \*1                             | M-F Dupont Wires                     | USB Cable\*1           |

3.  **Component Knowledge**

**8\*8 Dot-matrix display module:**

The 8\*8 dot matrix is composed of 64 LEDs, and each LED is placed at
the intersection of a row and a column. When using a single-chip
microcomputer to drive an 8\*8 dot matrix, we need to use a total of 16
digital ports, which greatly wastes the data of the single-chip
microcomputer. For this reason, we specially designed this module, using
the HT16K33 chip to drive an 8\*8 dot matrix, and only need to use the
I2C communication port of the single-chip microcomputer to control the
dot matrix, which greatly saves the microcontroller resources.

4.  **Specifications:**

Working voltage: DC 5V

Current: 200MA

Maximum power: 1W

5.  **Schematic diagram:**

![](/media/b04fe5e60695365a23644395aaef5085.png)

Some modules come with 3 DIP switches which allow you to toggle the
switches at will. They are used to set the I2C communication address.
The setting method is as follows. In our module, the module has fixed
the communication address, A0, A1, A2 are all grounded, that is, the
address is 0x70.

|        |        |        |        |        |        |        |        |        |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| A0（1）  | A1（2）  | A2（3）  | A0（1）  | A1（2）  | A2（3）  | A0（1）  | A1（2）  | A2（3）  |
| 0（OFF） | 0（OFF） | 0（OFF） | 1（ON）  | 0（OFF） | 0（OFF） | 0（OFF） | 1（ON）  | 0（OFF） |
| OX70   | OX71   | OX72   |        |        |        |        |        |        |
| A0（1）  | A1（2）  | A2（3）  | A0（1）  | A1（2）  | A2（3）  | A0（1）  | A1（2）  | A2（3）  |
| 1（ON）  | 1（ON）  | 0（OFF） | 0（OFF） | 0（OFF） | 1（ON）  | 1（ON）  | 0（OFF） | 1（ON）  |
| OX73   | OX74   | OX75   |        |        |        |        |        |        |
| A0（1）  | A1（2）  | A2（3）  | A0（1）  | A1（2）  | A2（3）  |        |        |        |
| 0（OFF） | 1（ON）  | 1（ON）  | 1（ON）  | 1（ON）  | 1（ON）  |        |        |        |
| OX76   | OX77   |        |        |        |        |        |        |        |

6.  **Circuit diagram and wiring diagram:**
    
    ![](/media/f4fc6111c35b571928d0f0a4a4bf45b3.png)
    
    ![](/media/ad529b82657cd9c7ddcd4b8828a0b1e8.png)

![](/media/625e9d05fa3662eb51e89e322395d29e.png)

![](/media/b174724155c46aebdfd15ab460c1470f.png)

**8. Test Code**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 10：8×8
Dot-matrix Display\\Project\_10\_8\_8\_Dot\_Matrix\_Display.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : 8×8 Dot-matrix Display</p>
<p>* Description : 8×8 Dot-matrix displays numbers from 0 to 9.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>int R[] = ;</p>
<p>int C[] = ;</p>
<p>unsigned char data_0[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_1[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_2[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_3[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_4[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_5[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_6[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_7[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_8[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_9[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>void Display(unsigned char dat[8][8])</p>
<p></p>
<p>delay(1);</p>
<p>Clear();</p>
<p>}</p>
<p>}</p>
<p>void Clear()</p>
<p></p>
<p>}</p>
<p>void setup()</p>
<p>}</p>
<p>void loop()</p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>}</p>
<p>//**********************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/8134a27692568db027c49899a0fe6067.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/47ef1cebb6ce160d2364f3de4e724799.png)

![](/media/7841abba9b2d2d5f475359be239dc26c.png)

9.  **Test Result：**

You will view the 8\*8 dot matrix show the“❤”pattern.
