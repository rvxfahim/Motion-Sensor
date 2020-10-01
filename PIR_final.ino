const int buttonPin = 3;     // the number of the pushbutton pin
const int ledPin =  2;      // the number of the LED pin



// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  //testing
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(2000);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    delay(100);
    buttonState = digitalRead(buttonPin);
      if (buttonState == HIGH)
       { delay(100);
         buttonState = digitalRead(buttonPin);
          if (buttonState == HIGH)  //nested if to debounce and check false input
          {
          digitalWrite(ledPin, HIGH);
          delay(1000);   
          delay(1000);
          delay(1000);
          delay(1000);
          delay(1000);
          delay(1000);
          delay(1000);
          delay(1000);
          delay(1000);
          delay(1000);
          delay(1000);
          digitalWrite(ledPin, LOW);
          delay(1000);
          delay(1000);
          delay(1000);
          }

          
       }
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    
  }
}
