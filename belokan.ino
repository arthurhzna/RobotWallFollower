void T_kiri(){
  while(1){
  pid();
  if (jarak1<40 && jarak2>50){
    break;
  }
  }
  digitalWrite (MotorKanan1,LOW);
  digitalWrite (MotorKanan2,HIGH);
  digitalWrite (MotorKiri1,LOW);
  digitalWrite (MotorKiri2,HIGH);
  analogWrite(ENBA,0);
  analogWrite(ENBB,0);
  delay(3000);
          // while(1){
          // digitalWrite (MotorKanan1,LOW);
          // digitalWrite (MotorKanan2,HIGH);
          // digitalWrite (MotorKiri1,LOW);
          // digitalWrite (MotorKiri2,HIGH);
          // analogWrite(ENBA,0);
          // analogWrite(ENBB,150);
          // if (jarak1<40){
          //   break;
          // }
          // }
            digitalWrite (MotorKanan1,LOW);
          digitalWrite (MotorKanan2,HIGH);
          digitalWrite (MotorKiri1,HIGH);
          digitalWrite (MotorKiri2, LOW);
          analogWrite(ENBA,100);
          analogWrite(ENBB,0);
            delay(400);

  digitalWrite (MotorKanan1,LOW);
  digitalWrite (MotorKanan2,HIGH);
  digitalWrite (MotorKiri1,LOW);
  digitalWrite (MotorKiri2,HIGH);
  analogWrite(ENBA,70);
  analogWrite(ENBB,70);
  delay(800);

  digitalWrite (MotorKanan1,LOW);
  digitalWrite (MotorKanan2,HIGH);
  digitalWrite (MotorKiri1,LOW);
  digitalWrite (MotorKiri2,HIGH);
  analogWrite(ENBA,0);
  analogWrite(ENBB,0);
  delay(3000);
              digitalWrite (MotorKanan1,LOW);
          digitalWrite (MotorKanan2,HIGH);
          digitalWrite (MotorKiri1,LOW);
          digitalWrite (MotorKiri2,HIGH);
          analogWrite(ENBA,100);
          analogWrite(ENBB,0);
          delay(300);
  digitalWrite (MotorKanan1,LOW);
  digitalWrite (MotorKanan2,HIGH);
  digitalWrite (MotorKiri1,LOW);
  digitalWrite (MotorKiri2,HIGH);
  analogWrite(ENBA,70);
  analogWrite(ENBB,70);
  delay(200);
    digitalWrite (MotorKanan1,LOW);
  digitalWrite (MotorKanan2,HIGH);
  digitalWrite (MotorKiri1,LOW);
  digitalWrite (MotorKiri2,HIGH);
  analogWrite(ENBA,0);
  analogWrite(ENBB,70);
  delay(100);
  }

  void baru(){
  while(1){
  pid();
  if (jarak1<35){
    break;}}}
