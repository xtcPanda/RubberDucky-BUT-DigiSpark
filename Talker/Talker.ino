//This DigiSpark script opens up Mounir's song Ana ray2 and also a GIF and then maximizes it using F11
#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  /*calling the sendKeyStroke() function with 0 starts the script, it cancels the effect of 
  all keys that are already being pressed at the time of execution to avoid conflicts*/
   DigiKeyboard.sendKeyStroke(0);
   // waits 10th of a second (100 ms) before sending any other key strokes
   DigiKeyboard.delay(100);
   // presses <WINDOWS> + R to open run.exe and waits another half second for it to start
   DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
   DigiKeyboard.delay(500);
   // writes "powershell" in the textbox of run.exe and presses ENTER to open it
   DigiKeyboard.print("powershell");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(3000);
   DigiKeyboard.print("Add-Type -AssemblyName System.speech"); 
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(200);
   DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(100);
   DigiKeyboard.print("$speak.Speak(\"Hi there, I know you think something is wrong with the universe since I am talking but do not worry I just got bored of how many mistakes you make.\")");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //this payload works once cuz of this line
  for(;;){
  //empty
  }
}
