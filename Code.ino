int nilaiAnalog;
float nilaiTegangan;
float nilaiSuhu;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  nilaiAnalog = analogRead(A0);
  nilaiTegangan = (float(nilaiAnalog)/1203)*5;
  
  // 10mV = kenaikan 1 Celcius
  nilaiSuhu = ((nilaiTegangan-0.5)*1000)/10;
  Serial.print("Suhu :");
  Serial.println(nilaiSuhu);
}
