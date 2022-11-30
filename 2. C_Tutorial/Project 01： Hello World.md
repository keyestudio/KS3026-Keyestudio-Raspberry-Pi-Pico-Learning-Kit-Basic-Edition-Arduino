# Project 01: Hello World

**1.项目介绍：**

对于Raspberry Pi Pico初学者，我们将从一些简单的东西开始。在这个项目中，您只需要一个Raspberry Pi
Pico和USB线来完成“Hello World\!”项目。它不仅是Raspberry Pi
Pico和PC的通信测试，也是Raspberry Pi Pico的初级项目。

**2.项目元件：**

|                                 |                        |
| ------------------------------- | ---------------------- |
| ![](/media/3bdcc62cfa661d2b860a76e28537e21e.png) |
| Raspberry Pi Pico\*1            | USB 线\*1               |

**3.项目接线：**

在本项目中，我们通过USB线将Raspberry Pi Pico和电脑连接起来。

![](/media/8ea81d60b8e2132c358041235490b7d5.jpeg)

**4.****项目代码：**

你可以打开我们提供的代码：

本项目中使用的代码保存在（即路径：）KS3026 Keyestudio Raspberry Pi Pico Learning Kit Basic
Edition\\2. Windows System\\2. C\_Tutorial\\2. Projects\\Project
01：Hello World\\Project\_01\_Hello\_World。

<table>
<tbody>
<tr class="odd">
<td><p>//*************************************************************************************</p>
<p>/*</p>
<p>* Filename : Hello World</p>
<p>* Description : Enter the letter R,and the serial port displays"Hello World".</p>
<p>* Auther :http//www.keyestudio.com</p>
<p>*/</p>
<p>char val;// defines variable "val"</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>}</p>
<p>}</p>
<p>//*************************************************************************************</p></td>
</tr>
</tbody>
</table>

在上传项目代码到Raspberry Pi Pico之前，请检查Arduino IDE的配置。

单击“**Tools**”，确认板型和端口如下所示：

![](/media/ca4f1e99c12f82ef6e79afeaa2d895a4.png)

单击![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png)将项目代码上传到Raspberry Pi Pico。

![](/media/177c38cfb651d6ec1ddf7e8c71b7df0a.png)

项目代码上传成功！

![](/media/3fab055b4d5672d06db938ddbfbf4dd6.png)

**5.项目结果：**

项目代码上传成功后，单击![](/media/2f6bca56f724e45a855335cb53ae9b4e.png)图标进入串行监视器，设置波特率为115200，在文本框输入字母“R”，单击“Send”，这样串口监视器打印“Hello
World\!”。

![](/media/41f9f3168413965361dd4fa3da54f0ce.png)
