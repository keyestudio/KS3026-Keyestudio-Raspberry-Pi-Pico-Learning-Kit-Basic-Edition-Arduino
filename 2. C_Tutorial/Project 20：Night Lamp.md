# Project 20：Night Lamp

### **Introduction**

Sensors or components are ubiquitous in our daily life. For example, some public street lights turn on automatically at night and turn off automatically during the day. 

Why? In fact, this make use of a photosensitive element that senses the intensity of external ambient light. When the outdoor brightness decreases at night, the street lights will automatically turn on. In the daytime, the street lights will automatically turn off. The principle of this is very simple. 

In this lesson we will use  Raspberry Pi Pico to control LEDs to implement the function of this street light.

### **Components Required**

| ![img](media/wps43.png) | ![img](media/wps44.jpg)             | ![img](media/wps45.jpg) |
| ----------------------- | ----------------------------------- | ----------------------- |
| Raspberry Pi Pico*1     | Raspberry Pi Pico Expansion Board*1 | Photoresistor*1         |
| ![img](media/wps46.jpg) | ![img](media/wps47.jpg)             | ![img](media/wps48.jpg) |
| Breadboard*1            | 220ΩResistor*1                      | Jumper Wires            |
| ![img](media/wps49.jpg) | ![img](media/wps50.jpg)             | ![img](media/wps51.jpg) |
| Red LED*1               | 10KΩResistor*1                      | USB Cable*1             |

### **Component Knowledge**

![image-20230509103832985](media/image-20230509103832985.png)

It is a photosensitive resistor, its principle is that the photoresistor surface receives brightness (light) to reduce the resistance. The resistance value will change with the detected intensity of the ambient light . With this property, we can use photoresistors to detect light intensity. Photoresistors and other electronic symbols are as follows:  


![image-20230509103839019](media/image-20230509103839019.png)

The following circuit is used to detect changes in resistance values of photoresistors:

![image-20230509103855833](media/image-20230509103855833.png)

In the circuit above, when the resistance of the photoresistor changes due to the change of light intensity, the voltage between the photoresistor and resistance R2 will also change. Thus, the intensity of light can be obtained by measuring this voltage.

### **Read the Analog Value**

We first use a simple code to read the value of the photoresistor, print it in the serial monitor. For wiring, please refer to the following wiring diagram.

![image-20230509103920874](media/image-20230509103920874.png)

![image-20230509103927645](media/image-20230509103927645.png)

### **Test Code**

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\2. Windows  System\2. C_Tutorial\2. Projects\Project 20：Night Lamp\Project_20.1_Read_Photosensitive_Analog_Value.

```c
//**********************************************************************************
/*  
 * Filename    : Read Photosensitive Analog Value
 * Description : Basic usage of ADC
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ANALOG_IN  26  //the pin of the photosensitive sensor

void setup() {
  Serial.begin(115200);
}

//In loop() function, analogRead is called to get the ADC value of ADC0 and assign it to adcVal. 
//Calculate the measured voltage value through the formula, and print these data through the serial port monitor.
void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  double voltage = adcVal / 1023.0 * 3.3;
  Serial.println("ADC Value: " + String(adcVal) + " --- Voltage Value: " + String(voltage) + "V");
  delay(500);
}
//*********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509104007295](media/image-20230509104007295.png)

Click ![image-20230509104016649](media/image-20230509104016649.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509104027421](media/image-20230509104027421.png)

![image-20230509104034876](media/image-20230509104034876.png)

Upload the code to the Pico board, wire up and power up, open the serial monitor and set the baud rate to 115200. Then you can read the analog value of photoresistor. When the light intensity around the sensor gets dim, the analog value displayed on the serial monitor will gradually reduce. On the contrary, the analog value will gradually increase.

![image-20230509104050108](media/image-20230509104050108.png)

### **Circuit Diagram and Wiring Diagram**

Next, we make a light-control lamp.

The Raspberry Pi Pico takes the analog value of the sensor and then adjusts the brightness of the LED.

![image-20230509104213311](media/image-20230509104213311.png)

![image-20230509104220877](media/image-20230509104220877.png)

You can open the code we provide:

Go to the folder KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project 20：Night Lamp\\Project\_20.2\_Night\_Lamp.

```c
//**********************************************************************************
/*  
 * Filename    : Night Lamp
 * Description : Controlling the brightness of LED by photosensitive sensor.
 * Auther      : http//www.keyestudio.com
*/
#define PIN_ADC0    26  // the pin of the photosensitive sensor
#define PIN_LED     16  // the pin of the LED

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_ADC0, INPUT);
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //read the ADC value of photosensitive sensor
  analogWrite(PIN_LED, map(adcVal, 0, 1023, 0, 255));//map ADC to the duty cycle of PWM to control LED brightness.
  delay(10);
}
//********************************************************************************
```


Before uploading Test Code to Raspberry Pi Pico, please check the configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![image-20230509104252033](media/image-20230509104252033.png)

Click ![image-20230509104300780](media/image-20230509104300780.png) to upload the test code to the Raspberry Pi Pico board.

![image-20230509104311198](media/image-20230509104311198.png)

![image-20230509104317935](media/image-20230509104317935.png)

### **Test Results**

After the project code is uploaded successfully and power up. when the light intensity gets weak, the LED will becomes brighter; otherwise, the LED will become darker.



