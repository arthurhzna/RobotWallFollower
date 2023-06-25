void rumus(){// PID
  Nerror();
  float kp = 1;
  float kd = 3;
  static unsigned char ki = 1;
 
  int SetPoint = 0;
  Error = SetPoint - error;
  int OutPID = kp*Error + kd*(Error-lastError) + ki*0.1;
  lastError = Error;

  PWMMotorKanan = 65 + OutPID;
  PWMMotorKiri = 65 - OutPID;

  Serial.print("pwmKa= ");Serial.print(PWMMotorKanan);Serial.print("\t");
  Serial.print("pwmKi= ");Serial.print(PWMMotorKiri);Serial.println("\t");
}

void Nerror(){
  ultrasonic();
  switch(jarak0){
     case 26:error = 6;break;
    case 25:error = 6;break;
    case 24:error = 6;break;
    case 23:error = 6;break;
    case 22:error = 6;break;   
    case 21:error = 6;break;
    case 20:error = 6;break;
    case 19:error = 6;break;
    case 18:error = 5;break;
    case 17:error = 4;break;
    case 16:error = 3;break;
    case 15:error = 2;break;
    case 14:error = 1;break;
    case 13:error = 0;break;
    case 12:error = -1;break;
    case 11:error = -2;break;
    case 10:error = -3;break;
    case 9:error = -4;break;
    case 8:error = -5;break;
    case 7:error = -6;break;
    case 6:error = -7;break;
    case 5:error = -8;break;
    case 4:error = -9;break;
    // case 2:error = -10;break;
    // case 1:error = -11;break;
    default : error=6;break;
    
  }
}

void maju(){
  digitalWrite (MotorKanan1,LOW);
  digitalWrite (MotorKanan2,HIGH);
  digitalWrite (MotorKiri1,LOW);
  digitalWrite (MotorKiri2,HIGH);
}

void pid(){
    rumus(); 
  // if(error == 6){
  //   digitalWrite (MotorKanan1,LOW);
  //   digitalWrite (MotorKanan2,HIGH);
  //   digitalWrite (MotorKiri1,HIGH);
  //   digitalWrite (MotorKiri2,LOW);
  //   analogWrite(ENBA,70);
  //   analogWrite(ENBB,80);
  // }
  // else{
    maju();
    analogWrite(ENBA,PWMMotorKanan);
    analogWrite(ENBB,PWMMotorKiri);}
// }
