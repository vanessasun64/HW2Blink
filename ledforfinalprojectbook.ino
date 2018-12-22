#define LED 0 // set pin 0 to power the interaction
 
// the setup routine runs once when you press reset:
void setup() {

  pinMode(LED, OUTPUT);  // initialize the LED pin as an output.

}
 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED, HIGH); // turn LED on
  delay(500);
  digitalWrite(LED, LOW); // turn LED off
  delay(500);

  }
