<b> 8-Switch Automation Control </b>
<br> 

<p> This Home automation project is capable of controlling 8 Switches simultaneously. It works on ESP8266 on a NodeMCU V3 Break-Out Board and Arduino Mega. Arduino Mega allows for expansion easily to make it control about 40+ switches at once.
<br> 
<br>
At the core, The ESP uses ESPHome Library. This ESPhome library is capable of controlling GPIO Pins as well as recieving OTA updates. The Pi runs on Hassio, or Home assistant with ESPhome integration. 
<br> 
<br>
The work of arduino is very simple, it simply senses for the high or low input coming from ESP and then changes the state of the respective relay pin.
<br>
<br> 
You will need to configure the *.yaml script as per your board so dont use mine, you may however, use it as a sample. 
<br>
<br>
<br>
I will soon be adding comments in the code to explain it. 
<br>
<i>The *.yaml file is for ESP configuration, it uses indentation like python so be careful not to mess it up. </i>
