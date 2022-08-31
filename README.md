# RubberDucky-BUT-DigiSpark
this is a project for a summer training course at my university in Network penetration testing using a Digispark Kickstarter Development Board ATTINY85 Module USB in an attempt to make our own cheap rubber ducky.

## What we did start to finish:
### How to set it up?  

we started by downloading the Arduino software:

![Screenshot of the downloading page in the arduino website](images\Screenshot of the downloading page in the arduino website.png)

using version 1.8.19 Arduino IDE

![Screenshot from inside the Arduino software v1-8-19](images\Screenshot from inside the Arduino software v1-8-19.png)

Setting up our IDE

- **go to the “File” menu and select “Preferences”**

  ![Screenshot from inside the Arduino software v1-8-19](images\Screenshot from inside the Arduino software v1-8-19.png)

- **In the box labeled “Additional Boards Manager URLs” enter:**

  `http://digistump.com/package_digistump_index.json`

- **and Click OK**

  ![Screenshot from the arduino preferences](images\Screenshot from the arduino preferences.png)

- **Go to the “Tools” menu and then the “Board” submenu - select “Boards Manager” and then from the type drop down select “Contributed”:**

  ![Screenshot of tools menu](images\Screenshot of tools menu.png)

- **Select the “Digistump AVR Boards” package and click the “Install” button.**

  ![Screenshot from the board manager](images\Screenshot from the board manager.png)

- **close the “Boards Manager” window and select the Digispark from the Tools→Boards menu. “Digispark (Default - 16.5mhz)”.**

  ![Screenshot of us choosing the digispark board16-5](images\Screenshot of us choosing the digispark board16-5.png)



### Uploading the payload

**P.S.** You do not need to plug in your Digispark before invoking upload

**P.S.** When you plug in the Device there will be a delay for 5 sec. that is because it is checking if you are trying to reprogram it or run it (bootloader) 

after you write your script in Arduino you will need to upload it to the Digispark but you won't be able to see the digispark as a usb drive the Arduino console will output this message instead:

`Running Digispark Uploader...`

`Plug in device now... (will timeout in 60 seconds)`

`> Please plug in the device ...`

`> Press CTRL+C to terminate the program.`

now we plug in our device and it will automatically detect it and upload the script to it outputting something like this:

`> Device is found!`

`connecting: 16% complete`

`connecting: 22% complete`

`connecting: 28% complete`

`connecting: 33% complete`

`> Device has firmware version 1.6`

`> Available space for user applications: 6012 bytes`

`> Suggested sleep time between sending pages: 8ms`

`> Whole page count: 94  page size: 64`

`> Erase function sleep duration: 752`

`msparsing: 50% complete`

`> Erasing the memory ...`

`erasing: 55% complete`

`erasing: 60% complete`

`erasing: 65% complete`

`> Starting to upload ...`

`writing: 70% complete`

`writing: 75% complete`

`writing: 80% complete`

`> Starting the user app ...running: 100% complete`

`Micronucleus done. Thank you!`

that means your script/payload was uploaded successfully

and in like 5 sec the program will work on its own and on your device so you will need to unplug it.

### Testing the DigiSpark

from here we started testing our Device with premade payloads like "Start" found in the Arduino software in File > Examples > Digispark_Examples

and that payload makes the device turn on another led we found in it and makes it blink or flash in a loop

then tried some other payloads found on github

using VirtualBox to test our attacks on other machines:

started by installing win 10 to a VM on VirtualBox since I had an old iso

![Screenshot from installing windows 10](images\Screenshot from installing windows 10.png)

then added a virtual box for win8.1 that I downloaded from Microsoft Edge Developer (you can find any link needed in the resources section)

![Screenshot of installing win 8.1](images\Screenshot of installing win 8.1.png)

We then tested these payloads on win11 (our host) and the 2 VMs we installed as mentioned earlier. (we only tested on windows environments cause we are targeting Devices using windows OS and nothing else at the moment with this project)



and after making sure everything works exactly as intended we started coding our own payloads or editing existing ones so we don't reinvent the wheel.

### Our Payloads



**P.S.** we can add more than one payload to our digispark by just chaining them to each other in the arduino script



## Resources:
- https://www.amazon.eg/-/en/gp/product/B0969HJTP4/ref=ox_sc_act_title_1?smid=A13V3DUXORRC33&psc=1 (the device we used)
- https://www.arduino.cc/en/software (we chose the win app version)
- https://github.com/digistump/DigistumpArduino/releases
- https://github.com/CedArctic/DigiSpark-Scripts (some premade scripts)
- http://digistump.com/wiki/digispark (the wiki for digispark)
- http://digistump.com/wiki/digispark/tutorials/connecting (how to connect it)
- http://digistump.com/package_digistump_index.json (Added Board)
- USB Rubber Ducky Documentation by hak5darren: https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Duckyscript
- Digistump DigiSpark Documentation: https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h
- [CedArctic/digiQuack: DuckyScript language to DigiSpark payload converter (Online / C++) (github.com)](https://github.com/CedArctic/digiQuack)
- [Downloads – Oracle VM VirtualBox](https://www.virtualbox.org/wiki/Downloads)
- [How to enable USB in VirtualBox | TechRepublic](https://www.techrepublic.com/article/how-to-enable-usb-in-virtualbox/)
- [Virtual Machines - Microsoft Edge Developer](https://developer.microsoft.com/en-us/microsoft-edge/tools/vms/)
- [Pay me some attention (ducktoolkit.com)](https://ducktoolkit.com/)
- 



## Credits:

- [theCyberGuy](https://www.linkedin.com/in/momen-eldawakhly-3b6250204/) (Our 1st Instructor for that course)
- [M0h4m3d G4l4l](https://www.linkedin.com/in/m0h4m3d-g4l4l/) (Our 2nd Instructor for that course)
- [Null Byte - YouTube](https://www.youtube.com/channel/UCgTNupxATBfWmfehv21ym-g)
- [Mohammed Fathy - YouTube](https://www.youtube.com/c/MohammedFathy)

of course anyone and everyone I looked up his work or read about something he wrote or helped in anyway is appreciated.



## Team Members:

- [Moaaz (xtcPanda) Akram](https://www.linkedin.com/in/moaaz-akram/) (Team Leader) (ME!)
- [Mohamed Mesbah](https://twitter.com/momesbah1)
- [Omar Emad](https://www.linkedin.com/in/omar-emad-807506243/)
- Ahmed Mohamed
- [Ahmed Hossam](https://www.linkedin.com/in/ahmed-hossam-b1754a201/)
- Shehab Mohamed
