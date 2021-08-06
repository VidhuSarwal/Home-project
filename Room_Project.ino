/*
 
*/

// constants won't change. They're used here to set pin numbers:
const int Input1 = 24;    
const int Input2 = 25;
const int Input3 = 26;    
const int Input4 = 27;    
const int Input5 = 28;
const int Input6 = 29;    
const int Input7 = 30;
const int Input8 = 31;    
const int out1 = 40;
const int out2 = 41;
const int out3 = 42;
const int out4 = 43;
const int out5 = 44;
const int out6 = 45;
const int out7 = 46;
const int out8 = 47;
      

// variables will change:
int buttonState = 0;         

void setup() {
  // initialize the Input pin as an input:
  pinMode(Input1, INPUT);
    pinMode(Input2, INPUT);  
      pinMode(Input3, INPUT);
       pinMode(Input4, INPUT);
         pinMode(Input5, INPUT);
           pinMode(Input6, INPUT);
             pinMode(Input7, INPUT);
               pinMode(Input8, INPUT);
  // initialize the output pin as an output:
  pinMode(out1, OUTPUT);
    pinMode(out2, OUTPUT);
      pinMode(out3, OUTPUT);
        pinMode(out4, OUTPUT);
          pinMode(out5, OUTPUT);
            pinMode(out6, OUTPUT);
              pinMode(out7, OUTPUT);
                pinMode(out8, OUTPUT);

   Serial.begin(9600);              
}

void loop() {
  // read the state of the pushbutton value:
 // buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (digitalRead(Input1) == HIGH) {
    // turn Relay on:
    digitalWrite(out1, HIGH);
      
       // Serial.print("  Relay1 :High  ");
   delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out1, LOW);
      //Serial.print("Relay1 :low  ");
    delay(1);
  }
  delay(1);
  
   if (digitalRead(Input2) == HIGH) {
    // turn Relay on:
    digitalWrite(out2, HIGH);
     // Serial.print("Relay2 :High  ");
      delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out2, LOW);
    //  Serial.print("Relay2 :low  ");
      delay(1);
  }

  if (digitalRead(Input3) == HIGH) {
    // turn Relay on:
    digitalWrite(out3, HIGH);
      
       // Serial.print("  Relay1 :High  ");
   delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out3, LOW);
     // Serial.print("Relay1 :low  ");
    delay(1);
  }
if (digitalRead(Input4) == HIGH) {
    // turn Relay on:
    digitalWrite(out4, HIGH);
      
       // Serial.print("  Relay1 :High  ");
   delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out4, LOW);
     // Serial.print("Relay1 :low  ");
    delay(1);
  }
    if (digitalRead(Input5) == HIGH) {
    // turn Relay on:
    digitalWrite(out5, HIGH);
      
      //  Serial.print("  Relay1 :High  ");
   delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out5, LOW);
     // Serial.print("Relay1 :low  ");
    delay(1);

  }
if (digitalRead(Input6) == HIGH) {
    // turn Relay on:
    digitalWrite(out6, HIGH);
      
      //  Serial.print("  Relay1 :High  ");
   delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out6, LOW);
     // Serial.print("Relay1 :low  ");
    delay(1);
  }

    if (digitalRead(Input7) == HIGH) {
    // turn Relay on:
    digitalWrite(out7, HIGH);
      
     //   Serial.print("  Relay1 :High  ");
   delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out7, LOW);
      //Serial.print("Relay1 :low  ");
    delay(1);
  }

if (digitalRead(Input8) == HIGH) {
    // turn Relay on:
    digitalWrite(out8, HIGH);
      
       // Serial.print("  Relay1 :High  ");
   delay(1);
  } else {
    // turn Relay off:
    digitalWrite(out8, LOW);
    //  Serial.print("Relay1 :low  ");
    delay(1);
  }
}
