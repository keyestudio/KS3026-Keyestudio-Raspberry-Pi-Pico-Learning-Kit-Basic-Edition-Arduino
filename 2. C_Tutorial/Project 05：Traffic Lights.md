# Project 05：Traffic Lights

1.  **Introduction**

Traffic lights are closely related to people's daily lives. Traffic
lights generally show red, yellow, and green. Everyone should obey the
traffic rules, which can avoid many traffic accidents. In this project,
we will use a pico board and some LEDs (red, green and yellow) to
simulate the traffic lights.

**2.项目元件：**

|                                                         |                                      |                             |                         |                         |
| ------------------------------------------------------- | ------------------------------------ | --------------------------- | ----------------------- | ----------------------- |
| ![](/media/0c1b0f91b4e56bcbc235d06b48809ac9.png) |                         |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 | Red LED\*1                  | Yellow LED\*1           |                         |
| ![](/media/c801a7baee258ff7f5f28ac6e9a7097b.png) |
| Green LED\*1                                            | USB Cable\*1                         | 220Ω Resistor\*3            | Breadboard\*1           | Jumper Wires            |

**3. Circuit Diagram and Wiring Diagram**

![](/media/4cf2ad735b0df82d62a5fcdb19ebf3c0.png)

![](/media/98f9db025163638c33095cbd16abe7e7.png)

Note:

How to connect an LED

![](/media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify the 220Ω 5-band resistor

![](/media/55c0199544e9819328f6d5778f10d7d0.png)

4.  **Test Code：**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
05：Traffic Lights\\Project\_05\_Traffic\_Lights.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Traffic Lights</p>
<p>* Description : Simulated traffic lights.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_LED_RED 16 //define the red led pin</p>
<p>#define PIN_LED_YELLOW 17 //define the yellow led pin</p>
<p>#define PIN_LED_GREEN 18 //define the green led pin</p>
<p>void setup() </p>
<p>void loop() </p>
<p>delay(500);// delays 0.5 second</p>
<p>digitalWrite(PIN_LED_RED, HIGH);// turns on the red led</p>
<p>delay(5000);// delays 5 second</p>
<p>digitalWrite(PIN_LED_RED, LOW);// turns off the red led</p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/8a5adb341268473937942a8e062a73f4.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/40e627f4a426e1d4b7458cc35c4ad44c.png)

![](/media/9f2d7d32f10975ee9fe661a306c22fdd.png)

2.  **Result**

Upload the code and power on, the green LED will light up for 5s then go
off. Next, the yellow one will blink for 3 times and red LED will be on
for 5s then go off.
