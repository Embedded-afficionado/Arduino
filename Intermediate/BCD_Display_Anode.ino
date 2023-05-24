unsigned const int A = 13;
unsigned const int B = 12;
unsigned const int C = 11;
unsigned const int D = 10;
unsigned const int E = 9;
unsigned const int F = 8;
unsigned const int G = 7;
unsigned const int H = 6;
#define BUTTON_PIN 2
#define BUTTON_DECREMENTER 1
#define BUTTON_PIN_STOPPER 0
int controladora = -1;


void setup(void)
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

//My Functions

void zero(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void one(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void two(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, LOW);
}

void three(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void four(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void five(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void six(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void seven(void) {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void eight(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

void nine(void) {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, LOW);
}

int numero_atual(int controladora){
  if(controladora == 0){
    zero();
  }
  if(controladora == 1){
    one();
  }
  if(controladora == 2){
    two();
  // Terminar função
  }
  if(controladora == 3){
    three();
  }
  if(controladora == 4){
    four();
  }
  if(controladora == 5){
    five();
  }
  if(controladora == 6){
    six();
  }
  if(controladora == 7){
    seven();
  }
  if(controladora == 8){
    eight();
  }
  if(controladora == 9){
    nine();
  }
}
// Start
void loop(void)
{
  byte buttonState = digitalRead(BUTTON_PIN);
  byte buttonState_Stopper = digitalRead(BUTTON_PIN_STOPPER);
  byte buttonState_dec = digitalRead(BUTTON_DECREMENTER);
  if (buttonState == LOW) {
      Serial.println("Button is pressed");  
      controladora = controladora +1;
      numero_atual(controladora);
      Serial.println(controladora);
  }
  if (buttonState_dec == LOW) {
      Serial.println("Deu bueno");  
      controladora = controladora -1;
      numero_atual(controladora);
      Serial.println(controladora);
  }
  if(buttonState_Stopper == LOW){
    controladora = -1;
      
  }
  delay(200);
}
