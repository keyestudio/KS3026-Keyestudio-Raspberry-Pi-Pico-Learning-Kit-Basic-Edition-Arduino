# Project 13：Passive Buzzer

1.  **Introduction**

In this project, we will learn the passive buzzer and use the Plus
control board to control the passive buzzer to play a song. Unlike an
active buzzer, a passive buzzer can emit sounds of different
frequencies.

2.  **Components Required**

|                                                         |                                      |                        |                        |
| ------------------------------------------------------- | ------------------------------------ | ---------------------- | ---------------------- |
| ![](/media/bbed91c0b45fcafc7e7163bfeabf68f9.png)      |                        |                        |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 |                        |                        |
| ![](/media/7dcbd02995be3c142b2f97df7f7c03ce.png) |
| Passive Buzzer\*1                                       | Breadboard\*1                        | Jumper Wires           | USB Cable\*1           |

**3. Component Knowledge**

![](/media/8d0020e53824072cbe9d4f7d2f8acb4f.png)

A passive buzzer is an integrated electronic buzzer with no internal
vibration source. It must be driven by 2K to 5K square wave, not a DC
signal. The two buzzers are very similar in appearance, but one buzzer
with a green circuit board is a passive buzzer, while the other with
black tape is an active buzzer. Passive buzzers cannot distinguish
between positive polarity while active buzzers can.

![](/media/fc42c5ed014609ff0b290ee5361bb2fd.png)

3.  **Circuit Diagram and Wiring Diagram**
    
    ![](/media/e0da1ccdbff24d256db130816c55da74.png)

![](/media/e601e48f8deddb3e9e7734d0022106b3.png)

**4. Test Code：**

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
13：Passive Buzzer\\Project\_13\_Passive\_Buzzer.

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Passive Buzzer</p>
<p>* Description : Passive Buzzer sounds the alarm.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define PIN_BUZZER 16 //define buzzer pins</p>
<p>void setup() </p>
<p>void loop() </p>
<p>void alert() </p>
<p>}</p>
<p>void freq(int PIN, int freqs, int times) </p>
<p>else </p>
<p>}</p>
<p>}</p>
<p>//**********************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/5bcaec752cf360d1258a04ebf04171d7.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/d75f2d7c73ed2b31b33c81d1634149f6.png)

![](/media/ddfea52b611785f1ed44767d6b36419a.png)

5.  **Result**

Upload the project code, wire up and power on, then the passive buzzer
will alarm
