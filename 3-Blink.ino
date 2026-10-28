// James Patterson
// Madison Kenney

/*
  Blink

  //Removed the Description of the Sample Code - Donovan

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  while(digitalRead(9) == 0)
  {
    digitalWrite(6, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
    delay(1000);                      // wait for a second
    digitalWrite(6, LOW);   // change state of the LED by setting the pin to the LOW voltage level
    delay(1000);                      // wait for a second

    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(1000);

    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
  }
  
}
