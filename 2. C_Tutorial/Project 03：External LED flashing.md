# Project 03：External LED Flashing 

### **1. Description**

There is an onboard LED in Raspberry Pi Pico,which is a GP25 pin attached to the Raspberry Pi Pico. In this project, we will learn the effect of making the onboard LED blink.

### **2. Components**

| ![image-20230508171033042](media/image-20230508171033042.png) | <img src="media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="zoom:50%;" /> |
| :-----------------------------------------------------: | :----------------------------------: |
| Raspberry Pi Pico\*1                                    | Raspberry Pi Pico Expansion Board\*1 |
| ![image-20230508171157405](media/image-20230508171157405.png) | ![image-20230508171049902](media/image-20230508171049902.png) |
| USB Cable\*1 | Breadboard\*1 |
| ![image-20230508171144938](media/image-20230508171144938.png) |![image-20230508171150030](media/image-20230508171150030.png)|
| Red LED\*1                                             | 220Ω Resistor\*1                     |
| ![image-20230508171220670](media/image-20230508171220670.png) |  |
| Jumper Wire\*2 |  |

### **3.Component Knowledge**

**LED:**

![image-20230508171144938](media/image-20230508171144938.png)

It is a kind of semiconductor called "light-emitting diode", which is an electronic device made of semiconductor materials (silicon, selenium, germanium, etc.). It has an anode and a cathode. The short lead (cathode) is grounded. The long lead (anode)is connected to 5V. 

![image-20230509083517392](media/image-20230509083517392.png)

**Resistor**

A resistor is an electronic component in a circuit that restricts or regulates the flow current flow. Its unit is(Ω). 1 mΩ= 1000 kΩ，1kΩ= 1000Ω.

![image-20230508171331600](media/image-20230508171331600.png)

We can use resistors to protect sensitive components, such as LEDs. The strength of the resistance is marked on the body of the resistor with an electronic color code. Each color code represents a number, and you can refer to it in a resistance card.

![image-20230509083532029](media/image-20230509083532029.png)

In this kit, we provide eight 5-band resistors with different resistance values. Take three 5-band resistors as an example.

220Ω resistor\*10

![image-20230509083614286](media/image-20230509083614286.png)

10KΩ resistor\*10

![image-20230509083628400](media/image-20230509083628400.png)

1KΩ resistor\*10

![image-20230509083840494](media/image-20230509083840494.png)

The connection between current, voltage, and resistance can be expressed by the formula: I=U/R.In the figure below, if the voltage is 3V, the current through R1 is: I = U / R = 3 V / 10 KΩ= 0.0003A= 0.3mA.

![image-20230509083851612](media/image-20230509083851612.png)

**Breadboard**

A breadboard is used to build and test circuits quickly before finalizing any circuit design. The breadboard has many holes into which circuit components like integrated circuits and resistors can be inserted. A typical breadboard is as follows.

![image-20230509083901531](media/image-20230509083901531.png)

The bread board has strips of metal which run underneath the board and connect the holes on the top of the board. The metal strips are laid out as shown below. Note that the top and bottom rows of holes are connected horizontally while the remaining holes are connected vertically.

![image-20230509083909069](media/image-20230509083909069.png)

The first two rows (top) and the last two rows (bottom) of the breadboard are used for the positive (+) and negative (-) terminals of the power supply, respectively. The conductive layout of the breadboard is shown in the following diagram.

![image-20230509083916751](media/image-20230509083916751.png)

When we connect DIP (Dual In-line Packages) components, such as integrated circuits, microcontrollers, chips and so on, we can see that a groove in the middle isolates the middle part, so the top and bottom of the groove is not connected. DIP components can be connected as shown in the figure below.

![image-20230509083924428](media/image-20230509083924428.png)

![image-20230509083935854](media/image-20230509083935854.png)

### **4. Circuit Diagram and Wiring Diagram**

**How to use the keyestudio raspberry pico expansion board**

Stack the pico board onto the expansion board, as shown below;

![image-20230509083953948](media/image-20230509083953948.png)

Interface the pico board with your computer with a USB cable.

![image-20230508171624209](media/image-20230508171624209.png)

**Circuit Diagram**

Note: Cut off the pico board. Build up the circuit according to the circuit and wiring diagram.

Make sure the circuit is correct then connect the pico board to the computer.

Note: Avoid any possible short circuits (especially connecting 3.3V and GND)\!

Warning: A short circuit may cause a large current in the circuit, causing components to overheat and permanent damage to the hardware.

![image-20230509084005404](media/image-20230509084005404.png)

**Wiring Diagram**

![image-20230509084050871](media/image-20230509084050871.png)

Note:

How to connect an LED

![image-20230509084137247](media/image-20230509084137247.png)

How to identify the 220Ω five-band resistor

![image-20230509084146605](media/image-20230509084146605.png)

### **5. Test Code：**

According to the circuit diagram, when Pico's GP16 outputs a high level, the LED will light up; when it outputs a low level, the LED light will be off. Therefore, we can make the LED flash repeatedly by controlling the GP16 to output high and low levels.

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 03：External LED flashing\Project_03_External_LED_Flashing.

```c
//**********************************************************************
/*
 * Filename    : External LED flashing
 * Description : Make an led blinking.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_LED   16   //define the led pin

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED as an output.
  pinMode(PIN_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PIN_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for 0.5s
  digitalWrite(PIN_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for 0.5s
}
//*************************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509084201216](media/image-20230509084201216.png)

Click ![image-20230509084248092](media/image-20230509084248092.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509084434244](media/image-20230509084434244.png)

![image-20230509084442243](media/image-20230509084442243.png)

### **6. Test Result**

After the project code was uploaded successfully, the LED started flashing.

![image-20230508172127414](media/image-20230508172127414.png)
