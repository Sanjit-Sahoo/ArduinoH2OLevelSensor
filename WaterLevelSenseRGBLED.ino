int resval = 0;  
int respin = A5; 
int red_light_pin= 13;
int green_light_pin = 12;
int blue_light_pin = 11;

void setup() { 
  
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

  Serial.begin(9600);
} 
  
void loop() { 
   
  resval = analogRead(respin); 
   
  if (resval<=20){ Serial.println("Water Level: Empty");}
  else if (resval>150 && resval<=200){ 
    
    Serial.println("Water Level: Low"); 
    analogWrite(red_light_pin,255);
    analogWrite(green_light_pin,0);
    analogWrite(blue_light_pin,0);}
  
  else if (resval>200 && resval<=250){ 
    
    Serial.println("Water Level: Low"); 
    analogWrite(red_light_pin,255);
    analogWrite(green_light_pin,69);
    analogWrite(blue_light_pin,0);}
  
  else if (resval>250 && resval<=300){ 
   
    Serial.println("Water Level: Medium");  
    analogWrite(red_light_pin,255);
    analogWrite(green_light_pin,255);
    analogWrite(blue_light_pin,0);}
  
  else if (resval>300 && resval<=350){ 
    
    Serial.println("Water Level: Medium");  
    analogWrite(red_light_pin,0);
    analogWrite(green_light_pin,255);
    analogWrite(blue_light_pin,0);}
  
  else if (resval>350 && resval<=375){ 
    
    Serial.println("Water Level: High");  
    analogWrite(red_light_pin,0);
    analogWrite(green_light_pin,0);
    analogWrite(blue_light_pin,255);}
  
  else if (resval>375 && resval<=10000){ 
    
    Serial.println("Water Level: High"); 
    analogWrite(red_light_pin,225);
    analogWrite(green_light_pin,0);
    analogWrite(blue_light_pin,255);
  }
  delay(100); 
}

