int sensor; //sensor variable
int led1=12; //led variable
void setup(){
Serial.begin(9600);     // Communication started with 9600 baud
pinMode(sensor,INPUT); 
pinMode(led1, OUTPUT);
}
void loop(){
sensor=analogRead(A5); // Incoming analog signal read and appointed sensor
Serial.println(sensor)  ;   //Wrote serial port
delay(5000); //5 second delay
if(sensor>0)
  {
    digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else
  {
    digitalWrite(led1,LOW); // turn the led off (LOW is the voltage level)
    
  }
  
}
