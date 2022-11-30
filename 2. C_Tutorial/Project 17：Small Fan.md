# Project 17：Small Fan

1.  **Introduction**

In the hot summer, we need an electric fan to cool us down, so in this
project, we will use the Plus control board to control 130 motor module
and small blade to make a small fan.

2.  **Components Required**

|                                                         |                                      |                        |                         |                         |
| ------------------------------------------------------- | ------------------------------------ | ---------------------- | ----------------------- | ----------------------- |
| ![](/media/bbed91c0b45fcafc7e7163bfeabf68f9.png)      |                        |                         |                         |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 |                        |                         |                         |
| ![](/media/9197d4aff9356c585b7ef68e33a6881d.png)  |                         |
| DC Motor\*1                                             | Breadboard\*1                        | Fan\*1                 | S8050 Triode\*1         |                         |
| ![](/media/7dcbd02995be3c142b2f97df7f7c03ce.png) |
| S8550 Triode\*1                                         | 1KΩ Resistor\*1                      | Jumper Wires           | Diode\*1                | USB Cable\*1            |

3.  **Component Knowledge:**

![](/media/9197d4aff9356c585b7ef68e33a6881d.png)

**Triode：**

It is referred as the semiconductor triode and a bipolar transistor or a
transistor.

The triode is one of the basic semiconductor components as the core of
the electronic circuit., which can amplify current. The triode means
that two PN junctions are made on a semiconductor wafer. The two PN
junctions divide the entire semiconductor into three parts. The middle
part is the base area, and the two sides are the emitter and collector
areas.

As for NPN triode, it is composed of two N type semiconductors and a P
type semiconductor.

The type of transistor which may be used in some applications in place
of the triode tube is the "junction" transistor, which actually has two
junctions. It has an emitter, base, and collector which correspond to
the cathode, grid, and plate, respectively, in the triode tube. Junction
transistors are of two types, the NPN type and the PNP type.

The PN junction between the emitting area and the base area is emitter
junction and the PN junction flanked by the collector area and the base
area is collector junction. And three pins are E（Emitter, B (Base)and C
(Collector).

![](/media/3bace56b6d4c5836d1f334038e88acf1.jpeg)

S8050（NPN triode）

![](/media/3bace56b6d4c5836d1f334038e88acf1.jpeg)

S8550（PNP triode）

The S8050 transistor is a low-power NPN silicon tube and its the maximum
voltage of collector and base can reach 40V and the current of the
collector is (Ic) 0.5A.

The pins of the S8050 transistor should facing down, pin 1 is the
emitter (E pole), pin 2 is the base (B pole), and pin 3 is the collector
(C pole). Similarly, the S8550 transistor is the same.

![](/media/1337a16a23745afe86a78bbc628451f7.png)
![](/media/07ec79528ccc507de5c37057a48595a2.jpeg)

The commonly used triodes are divided into two types: PNP type triode
and NPN type triode. S8550 is the PNP type triode, S8050 is the NPN type
triode, what we provide in this kit are S8050 and S8550.

![](/media/5642275b2be86782bd9563ee840b0d1a.png)

4.  **Connection Diagram 1：**

we apply the S8050(NPN triode) in this experiment to control the motor

![](/media/5db0687f6510b28cf4ccee7aac0d7f93.png)

![](/media/319b4a31b0bc9d65d5f10bfcccf051a1.png)

5.  **Test Code：**

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
17：Small Fan\\Project\_17.1\_Small\_Fan

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Small_Fan</p>
<p>* Description : S8050 triode drives the motor working</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>void setup() </p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/cab5b922dd2c22e35c62062eb7060e02.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/b7b1cd73b1be57a9c55415bd49f15655.png)

![](/media/fbd39ce7e87ac2a66546bd453a9805c1.png)

**6.Test Result 1**

Upload the code and power up with a USB cable. Then fan will rotate for
4s, stop for 2s

**7.Circuit diagrams and wiring diagrams2：**

We use the S8550 PNP triode to control the motor

![](/media/3c3bfe5083b9b963b78e76c3b8d387db.png)

![](/media/08150e9b22904b62ff4b841a8551fbb6.png)

8.  **Test Code：**

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
17：Small Fan\\Project\_17.2\_ Small\_Fan

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : Small_Fan</p>
<p>* Description : S8550 triode drives the motor working</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>void setup() </p>
<p>void loop() </p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/37dd5c244799cb36fbbc69777479a216.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/ba743562d8c8fdd79ca60471fe5d5565.png)

![](/media/a627b8975b7377d7005ffe054bc36d63.png)

9.  **Test Result 2：**

Upload the code to and power up with a USB cable.

Install the fan onto the DC motor, after powering, you will see the
motor rotates for 4s and stop for 2s, in a loop way.
