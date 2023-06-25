#define MotorKiri1 5
#define MotorKiri2 4
#define MotorKanan1 7
#define MotorKanan2 6
#define ENBA 2
#define ENBB 3
int PWMMotorKanan;
int PWMMotorKiri;
int error,Error,lastError;

const int TRIGPIN0 = 27;          
const int ECHOPIN0 = 26;
long timer0;
int jarak0;

const int TRIGPIN1 = 44;          
const int ECHOPIN1 = 45;
long timer1;
int jarak1;

const int TRIGPIN2 = 31;          
const int ECHOPIN2 = 33;
long timer2;
int jarak2;

// const int TRIGPIN3 = 50;          
// const int ECHOPIN3 = 51;
// long timer3;
// int jarak3;


void setup() {
  Serial.begin(9600);
  pinMode(ECHOPIN0, INPUT);
  pinMode(TRIGPIN0, OUTPUT);
  pinMode(ECHOPIN1, INPUT);
  pinMode(TRIGPIN1, OUTPUT);
  pinMode(ECHOPIN2, INPUT);
  pinMode(TRIGPIN2, OUTPUT);
  // pinMode(ECHOPIN3, INPUT);
  // pinMode(TRIGPIN3, OUTPUT);
  pinMode(MotorKiri1, OUTPUT);
  pinMode(MotorKiri2, OUTPUT);
  pinMode(ENBA,       OUTPUT);
  pinMode(MotorKanan1, OUTPUT);
  pinMode(MotorKanan2, OUTPUT);
  pinMode(ENBB,       OUTPUT);
}

void loop() {
T_kiri();
baru();


}


