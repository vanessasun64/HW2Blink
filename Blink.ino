/*
 Sketch Title: H A P P Y

This code is for a certain LED light setup on the breaboard, where the LED lights form 2 smiley faces.
Blue/green LEDs form one smiley and red/yellow LEDs form another smiley.
The blue/green LEDs are connected to Pin 12 and have the pattern that lights when the yellow/red LEDs are not lit.
The b/g LEDs signal the start of a morse code loop that the red/yellow LED lights play.
 
 */

int LED = 13;
int LED2 = 12;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  delay(500);  
  pinMode(LED2, OUTPUT);
  delay(500);
}


// the loop function runs over and over again forever
void loop() {

// start signal
  digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait
  digitalWrite(LED2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);  
  
  digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait
  digitalWrite(LED2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);  

  digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait
  digitalWrite(LED2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);  
  
  digitalWrite(LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait
  digitalWrite(LED2, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);  


// H
  // dot
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

  // dot
   digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                 // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

  // dot
   digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                 // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

  // dot
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);              // pause for separation

// pause!!

// A

  // dot
   digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                 // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

  // dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);               // pause for separation

// pause!!

// P

// dot
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

// dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

// dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

// dot
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);               //pause of separation

// pause!!

// P
 // dot
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

// dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

// dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

// dot
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);               //pause of separation

// pause!!

// Y
// dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

// dot
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

 // dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(500);  

 // dash
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                // wait
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);  

}
