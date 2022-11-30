# Project 18: Dimming Light

1.  **Introduction**

A potentiometer is a three-terminal resistor with a sliding or rotating
contact that forms an adjustable voltage divider. It works by varying
the position of a sliding contact across a uniform resistance. In a
potentiometer, the entire input voltage is applied across the whole
length of the resistor, and the output voltage is the voltage drop
between the fixed and sliding contact.

In this project, we are going to learn how to use Arduino to read the
values of the potentiometer, and make a dimming lamp.

**2. Components Required**

|                                                         |                                      |                          |                             |
| ------------------------------------------------------- | ------------------------------------ | ------------------------ | --------------------------- |
| ![](/media/ef77f5a64c382157fc2dea21ec373fef.png) |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 | Potentiometer\*1         | Red LED\*1                  |
| ![](/media/7dcbd02995be3c142b2f97df7f7c03ce.png)      |
| Breadboard\*1                                           | 200Ω Resistor\*1                     | Jumper Wires             | USB Cable\*1                |

2.  **Component Knowledge**

![](/media/c397aba3de644bb70ffa7a9139a5499e.png)

**Adjustable potentiometer:** It is a kind of resistor and an analog
electronic component, which has two states of 0 and 1(high level and low
level). The analog quantity is different, its data state presents a
linear state such as 0 to 1023.

3.  **Read the Potentiometer Value**

We connect the adjustable potentiometer to the analog pin of Arduino to
read its value. Please refer to the following wiring diagram for wiring.

![](/media/b8ee6320bce8729a4309857f257d30ec.png)

![](/media/cb970a340d830569e9ac4462a1318e44.png)

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
18：Dimming Light\\Project\_18.1\_Read\_Potentiometer\_Analog\_Value.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Read Potentiometer Analog Value</p>
<p>* Description : Basic usage of ADC</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ANALOG_IN 26 //the pin of the Potentiometer</p>
<p>void setup() </p>
<p>//In loop() function, analogRead is called to get the ADC value of ADC0 and assign it to adcVal.</p>
<p>//Calculate the measured voltage value through the formula, and print these data through the serial port monitor.</p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/f85ab421ef04c672b1ea22dd7e513a24.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/f19555cea2324d632a8ac2709255a056.png)

![](/media/a0e9b9a48257dd17cb627bc8c26a3f10.png)

Upload the code , connect the wires and power on first. Then open the
serial monitor, set the baud rate to 115200. The serial monitor window
will print out the ADC value and voltage value of the potentiometer.
When moving the knob of the potentiometer is turned, the ADC value and
voltage value will change. As shown below:

![](/media/b578ae0004b44405bac340bc62138a80.png)

**Circuit diagram and wiring diagram:**

In the previous step, we read the ADC value and voltage value of the
potentiometer. Then we need to convert the ADC value into the brightness
of the LED to make a light with adjustable brightness.

As shown below:

![](/media/66f721b77035d40556c873e0c4577b4a.png)

![](/media/93b03f3cdc8af506d9035b748839ac33.png)

**Test Code：**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
18：Dimming Light\\Project\_18.2\_Dimming\_Light

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Dimming Light</p>
<p>* Description : Controlling the brightness of LED by potentiometer.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_ADC0 26 //the pin of the potentiometer</p>
<p>#define PIN_LED 16 // the pin of the LED</p>
<p>void setup() </p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/5b3271ad4e552110b777dd61d45cd56b.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/8d656cd6af3fc73168f5e9eb37ad17d6.png)

![](/media/fd0b79f1902a45925e61cbd49e11acd5.png)

**Test Result:**

Upload the code to Raspberry Pi Pico, change the input voltage of GP26
by turning the potentiometer.

Raspberry Pi Pico changes the output voltage of GP16 according to this
voltage value, thereby changing the brightness of the LED.

![](/media/eca30dead3f4923afa0dcb0306db2319.jpeg)
