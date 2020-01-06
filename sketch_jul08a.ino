int MicPin = A0;          // pin that the mic is attached to
int MicValue1 = 0;  
int MicValue2 = 0; // the Microphone value
int sirenPin = 3;  // attach Buzzer or LED to pin 11
int sirenPin2 = 5;  // attach Buzzer or LED to pin 11
int sirenPin3 = 6;  // attach Buzzer or LED to pin 11
int sirenPin4 = 9;  // attach Buzzer or LED to pin 11
int sirenPin5 = 10;  // attach Buzzer or LED to pin 11
int sirenPin6 = 11;  // attach Buzzer or LED to pin 11

void setup() {
  pinMode(sirenPin, OUTPUT);
  pinMode(sirenPin2, OUTPUT);
  pinMode(sirenPin3, OUTPUT);
  pinMode(sirenPin4, OUTPUT);
  pinMode(sirenPin5, OUTPUT);
  pinMode(sirenPin6, OUTPUT);
    
  pinMode(MicPin, INPUT);
  Serial.begin(9600);  //for test the input value initialize serial
}

void loop() {

  MicValue1 = analogRead(MicPin);  // read pin value
  Serial.println(MicValue1);
  delay(0);
  MicValue2 = analogRead(MicPin);
  Serial.println(MicValue2);
  
  if (MicValue1 - MicValue2 >= 27.50){
   digitalWrite(sirenPin, HIGH);   // turn lights on
    delay(200);

   digitalWrite(sirenPin, LOW); 
    delay(150);
  }
 if (MicValue1 - MicValue2 >= 30.87){
   digitalWrite(sirenPin2, HIGH);   // turn lights on
    delay(200);

   digitalWrite(sirenPin2, LOW); 
    delay(150);
  }
 if (MicValue1 - MicValue2 >= 16.35){
   digitalWrite(sirenPin3, HIGH);   // turn lights on
    delay(200);

   digitalWrite(sirenPin3, LOW); 
    delay(150);
  }
  if (MicValue1 - MicValue2 >= 18.35){
   digitalWrite(sirenPin4, HIGH);   // turn lights on
    delay(200);

   digitalWrite(sirenPin4, LOW); 
    delay(150);
  }
  if (MicValue1 - MicValue2 >= 20.60){
   digitalWrite(sirenPin5, HIGH);   // turn lights on
    delay(200);

   digitalWrite(sirenPin5, LOW); 
    delay(150);
  }
 if (MicValue1 - MicValue2 >= 21.83){
   digitalWrite(sirenPin6, HIGH);   // turn lights on
    delay(200);

   digitalWrite(sirenPin6, LOW); 
    delay(150);
  }
}
