#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}

void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  // DigiKeyboard.sendKeyStroke(0);
  
  // Type out the test password one digit at a time (assumes US-style keyboard)
  DigiKeyboard.print("1");
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  // wait 2 seconds before entering next number
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("0");
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("1");
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("0");
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("1");
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("0");
  DigiKeyboard.delay(2000);


  // Press ENTER key to submit password
  DigiKeyboard.println();

  DigiKeyboard.delay(2000);
  
}
