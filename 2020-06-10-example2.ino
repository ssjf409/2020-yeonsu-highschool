#define C4 262 // 4도 
#define D4 294 // 4레 
#define E4 330 // 4미 
#define F4 349 // 4파 
#define G4 392 // 4솔 
#define A4 440 // 4라 
#define B4 494 // 4시 
#define C5 523 // 5도 
#define D5 587 // 5레 
#define E5 659 // 5미 
#define F5 698 // 5파 
#define G5 783 // 5솔 
#define A5 880 // 5라 
#define B5 988 // 5시 


int buttonPin = 7;
int buttonPin2= 8;
int buttonPin3 = 9;
int buttonPin4 = 10;
int buttonPin5 = 11;
int buttonPin6 = 12;
int buttonPin7 = 13;
int octabuttonPin = 3;
int octabuttonPin2 = 4;
int ledPin = 6;
int ledPin2 = 7;
int piezoPin = 2;

int octave = 4;

void setup() { 
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
  pinMode(buttonPin7, INPUT_PULLUP);
  
  pinMode(octabuttonPin, INPUT_PULLUP);
  pinMode(octabuttonPin2, INPUT_PULLUP);

  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  
  pinMode(piezoPin, OUTPUT);
} 

void loop() {
  int buttonState = digitalRead(buttonPin);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  int buttonState4 = digitalRead(buttonPin4);
  int buttonState5 = digitalRead(buttonPin5);
  int buttonState6 = digitalRead(buttonPin6);
  int buttonState7 = digitalRead(buttonPin7);
  int octabuttonState = digitalRead(octabuttonPin);
  int octabuttonState2 = digitalRead(octabuttonPin2);

  
  if(octabuttonState == LOW) {
    octave = 4;
  }
  
  if(octabuttonState2 == LOW) {
    octave = 5;
  }

  if(octave == 4) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, HIGH);
  }

  if(octave == 4) {
    if(buttonState == LOW) {
      tone(piezoPin, C4, 10);
    }
    
    if(buttonState2 == LOW) {
      tone(piezoPin, D4, 10);
    }
    
    if(buttonState3 == LOW) {
      tone(piezoPin, E4, 10);
    }
    
    if(buttonState4 == LOW) {
      tone(piezoPin, F4, 10);
    }
    
    if(buttonState5 == LOW) {
      tone(piezoPin, G4, 10);
    }
    
    if(buttonState6 == LOW) {
      tone(piezoPin, A4, 10);
    }
    
    if(buttonState7 == LOW) {
      tone(piezoPin, B4, 10);
    }
    
  } else if(octave == 5) {
    
    if(buttonState == LOW) {
      tone(piezoPin, C5, 10);
    }
    
    if(buttonState2 == LOW) {
      tone(piezoPin, D5, 10);
    }
    
    if(buttonState3 == LOW) {
      tone(piezoPin, E5, 10);
    }
    
    if(buttonState4 == LOW) {
      tone(piezoPin, F5, 10);
    }
    
    if(buttonState5 == LOW) {
      tone(piezoPin, G5, 10);
    }
    
    if(buttonState6 == LOW) {
      tone(piezoPin, A5, 10);
    }
    
    if(buttonState7 == LOW) {
      tone(piezoPin, B5, 10);
    }
    
  }
  
}
