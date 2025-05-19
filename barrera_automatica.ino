
#define echoPin 3 
#define trigPin 2 
#include <Servo.h>

int led_green = 5;
int led_yello = 6;
int led_red = 7;
Servo servo_9;

// defines variables
long duration; 
int distance; 

void setup() 
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); 
  Serial.println("with Arduino UNO R3");
  pinMode(led_green, OUTPUT);
  pinMode(led_yello, OUTPUT);
  pinMode(led_red, OUTPUT);
  servo_9.attach(9);
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; 

  Serial.print("Distance: ");
  Serial.print(distance);

  if(distance > 18)
  {
    digitalWrite(led_green, LOW); 
    digitalWrite(led_yello, LOW); 
    digitalWrite(led_red, HIGH); 
    servo_9.write(0);
  }
  else if(distance < 15)
  {
    digitalWrite(led_green, LOW); 
    digitalWrite(led_yello, HIGH); 
    digitalWrite(led_red, LOW); 
    if(distance < 6)
    {
      digitalWrite(led_green, HIGH); 
      digitalWrite(led_yello, LOW); 
      digitalWrite(led_red, LOW); 
      servo_9.write(90);
    }
  }

  Serial.println(" cm");
}
