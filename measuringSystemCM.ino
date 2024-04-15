#define trig 2
#define echo 3

//int count = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  digitalWrite(trig, LOW);
  delay(4); 
  digitalWrite(trig, HIGH);
  delay(3);
  digitalWrite(trig, LOW);
  
  float dist = pulseIn(echo, HIGH);
  //Serial.println(dist); -- To print Garbage value
  float distance = dist*0.3433/20;
      //formula to convert garbage to cm
    Serial.println(distance);

}

