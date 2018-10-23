int ledPins[] = {9,10,11}; // my lights are connected to pins 9, 10, 11

// everything under setup function plays upon starting up. 
void setup() {
for(int i = 0; i < 8; i++){ // loops i from 0 to all less than 8
  pinMode(ledPins[i],OUTPUT);
}

}

void loop() { //loops everything in this function
 
for(int i = 0; i<= 2;){ //applies to all 3 lights

  digitalWrite(ledPins[i], HIGH); // turn on
  delay(50);                        // pause
  digitalWrite(ledPins[i], LOW); // turn off
  delay(50);                        // pause

  digitalWrite(ledPins[i+1], HIGH); // turn on
  delay(50);                        // pause
  digitalWrite(ledPins[i+1], LOW); // turn off
  delay(50);

  i++; // makes sure the loop goes onto the next light

for(int i = 2; i<=2;){ //applies only to the last light 


  digitalWrite(ledPins[i], HIGH); // turn on
  delay(500);                        // pause
  digitalWrite(ledPins[i], LOW); // turn off
  delay(500);                        // pause

i++; // makes sure the loop goes onto the next light
}
}
}
