
#define echoPin 3 
#define trigPin 2 
int LED1 = 0;  // LED1 Pin
// defines variables
float Dist;
float temp;
float calcDisc()
{
  long duration; // variable for the duration of sound wave travel
  float distance; // variable for the distance measurement
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  return distance;
  
}


void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(LED1, OUTPUT);
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  digitalWrite(LED1, LOW);
}
void loop() {
  
  
 Dist= calcDisc();
 if(Dist <= 2.5)
 {
while(Dist>=2&&Dist<=18)
{
  digitalWrite(LED1, HIGH);
 // temp=Dist;
  Dist= calcDisc();
 
  
}
 }
digitalWrite(LED1, LOW);
 
}
