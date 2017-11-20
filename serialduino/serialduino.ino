int inByte;         // incoming serial byte

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0) {
    inByte = Serial.read();
    if(inByte == 'P'){
      Serial.write("5\r\n");
      Serial.write("Martin\r\n");
      Serial.write("Acosta\r\n");
      Serial.write("3145.04026s\r\n");
      Serial.write("06031.48632w\r\n");               
      Serial.write("0.190\r\n");
    }
  }
}
