void ultrasonic(){//SENSOR ULTRASONIK
  digitalWrite(TRIGPIN0, LOW);                   
  delayMicroseconds(2);
  digitalWrite(TRIGPIN0, HIGH);                  
  delayMicroseconds(10);
  digitalWrite(TRIGPIN0, LOW);                   
  timer0 = pulseIn(ECHOPIN0, HIGH);
  jarak0 = timer0/58;

  digitalWrite(TRIGPIN1, LOW);                   
  delayMicroseconds(2);
  digitalWrite(TRIGPIN1, HIGH);                  
  delayMicroseconds(10);
  digitalWrite(TRIGPIN1, LOW);                   
  timer1 = pulseIn(ECHOPIN1, HIGH);
  jarak1 = timer1/58;
  
  digitalWrite(TRIGPIN2, LOW);                   
  delayMicroseconds(2);
  digitalWrite(TRIGPIN2, HIGH);                  
  delayMicroseconds(10);
  digitalWrite(TRIGPIN2, LOW);                   
  timer2 = pulseIn(ECHOPIN2, HIGH);
  jarak2 = timer2/58;

  // digitalWrite(TRIGPIN3, LOW);                   
  // delayMicroseconds(2);
  // digitalWrite(TRIGPIN3, HIGH);                  
  // delayMicroseconds(10);
  // digitalWrite(TRIGPIN3, LOW);                   
  // timer3 = pulseIn(ECHOPIN3, HIGH);
  // jarak3 = timer2/58;

  Serial.print("error= ");Serial.print(error);Serial.print(" cm");Serial.print("\t");
  Serial.print("Jarak0 = ");Serial.print(jarak0);Serial.print(" cm");Serial.print("\t");
  Serial.print("Jarak1 = ");Serial.print(jarak1);Serial.print(" cm");Serial.print("\t");
  Serial.print("Jarak2 = ");Serial.print(jarak2);Serial.print(" cm");Serial.print("\t");
}