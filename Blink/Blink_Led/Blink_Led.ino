/*
-->USB Driver Url:https://www.st.com/en/development-tools/stsw-link009.html#get-software
-->Board Manager Url:https://dan.drown.org/stm32duino/package_STM32duino_index.json
-->Board: "Generic STM32F103C series"
-->Variant: "STM32F103C8 (20k RAM. 64k Flash)"
-->Upload method: "STLink"
-->CPU Speed(MHz): "72Mhz (Normal)"
-->Optimize: "Smallest (default)"
-->Port: not necessary
-->Programmer: Using Stlink-v2.


-->On board Green led Common Cathode(CC) connected with PC13;
*/ 

int led = PC13;

void setup() 
{
  pinMode(led, OUTPUT);       
}

void loop()
{              
  digitalWrite(led, HIGH);                           
} 
