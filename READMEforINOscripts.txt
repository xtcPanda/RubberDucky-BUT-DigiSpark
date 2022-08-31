# BackDoor

### Description:

#### 1: Remote_BackDoor.ino:<br>
Creates account with admin privileges with name blanka and passwd Ping@123. Also hides it from login 
screen and turn on remote desktop to be accessible from remote location.<br>

**Tested on:**<br>
**OS**: Windows 10<br>
**User**: Admin User<br>
**Hardware**: ATtiny85 (Chinese)

#### 2: GoodOl' BackDoor.ino:<br>
Based on old sticky key backdoor trick by adding a registry key instead of replacing the file in system32 directory. After successful run press shift 5 times on login screen and command prompt will popup with admin privileges.<br>

To remove the backdoor run the following command in command prompt with admin privileges and backdoor will be removed.

***REG DELETE "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\sethc.exe***

**Tested on:**<br>
**OS**: Windows 10/7<br>
**User**: Admin User<br>
**Hardware**: ATtiny85 (Chinese)

#### 3: Create_Account:
This script does the following:
Starts Command prompt as Administrator
Runs sequence of powershell commands
Stores password in a variable
Creates new local user account
Gives newly created account administrator priviliages
Exits Command prompt
Additional information:
Running time is around 15 seconds(depending on hw and length of user name, password, description...)
Optionally you can add -FullName and -Description parameters to give account more believable look: New-LocalUser \"accName\" -Password $pass -FullName \"User name\" -Description \"Description of new account\"
Credits
https://github.com/Michyus

#### 4: Talker:
This DigiSpark script opens up the powershell and makes your computer speak out a message.



