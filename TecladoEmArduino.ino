#define BUZZER 8
#define BUTTON1 1
#define BUTTON2 2
#define BUTTON3 3
#define BUTTON4 4
#define BUTTON5 5
#define BUTTON6 6

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(BUTTON3, INPUT);
  pinMode(BUTTON4, INPUT);
  pinMode(BUTTON5, INPUT);
  pinMode(BUTTON6, INPUT);
}

void loop() 
{
  if(digitalRead(BUTTON1) == HIGH)
  {
     tone(BUZZER,500);
  }
  else if(digitalRead(BUTTON2) == HIGH)
  {
     tone(BUZZER,1000);
  }
  else if(digitalRead(BUTTON3) == HIGH)
  {
     tone(BUZZER,1500);
  }   
  else if(digitalRead(BUTTON4) == HIGH)
  {
     tone(BUZZER,2000);
  }   
  else if(digitalRead(BUTTON5) == HIGH)
  {
     tone(BUZZER,2500);
  }   
  else if(digitalRead(BUTTON6) == HIGH)
  {
     tone(BUZZER,3000);
  }
  else
  {
    noTone(BUZZER);
  }   

}
