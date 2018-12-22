int speaker = 12; // setting the pin for the speaker's power
int buttonPin = 13; // setting the pin for the button's power
int buttonState = 0; 
/* setting the initial state for the button, 0, meaning
    the button would start as measuring 0, the 'LOW' state
*/

void setup() {

pinMode(buttonPin, INPUT); // setting button as input
pinMode(speaker, OUTPUT); // setting speaker as output so it will make sounds
}

void loop() {
buttonState = digitalRead(buttonPin); 
  if (buttonState == HIGH) { 
    tone(speaker, 1000, 500);
    delay(50);
  }
  /*
   * If button is pressed, the HIGH state, then the speaker will
   * play a sound, frequency 1000, duration 500
   */
}
