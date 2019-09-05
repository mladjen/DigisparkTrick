#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT); // Windows key
    DigiKeyboard.delay(1500);                   // wait 1.5 seconds
    DigiKeyboard.println("cmd");                // searches for cmd and presses enter
    DigiKeyboard.delay(1000);                   // waits 1 second for cmd to open
    DigiKeyboard.println("cd Desktop");         // change directory to desktop
    DigiKeyboard.println("ECHO dont leave your lappy unlocked silly ;P > clickme.txt"); // your message here
}
void loop() {
}
