#define key1 digitalRead(A0)
void setup() {
  // put your setup code here, to run once:
pinMode(A0 , INPUT);
for(int i =0; i <=7 ; i++)
{
  pinMode(i , OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
int i , a;
int dancinglight[8] [8] = {
  {0 , 0 , 0 , 0 , 0 , 0 , 0 , 1},
  {0 , 0 , 0 , 0 , 0 , 0 , 1 , 0},
  {0 , 0 , 0 , 0 , 0 , 1 , 0 , 0},
  {0 , 0 , 0 , 0 , 1 , 0 , 0 , 0},
  {0 , 0 , 0 , 1 , 0 , 0 , 0 , 0},
  {0 , 0 , 1 , 0 , 0 , 0 , 0 , 0},
  {0 , 1 , 0 , 0 , 0 , 0 , 0 , 0},
  {1 , 0 , 0 , 0 , 0 , 0 , 0 , 0}
};
for(i = 0 ; i <= 7 ; i++)
{
digitalWrite(i , 0);  
}
if (key1 == 0)
{
  for ( a = 0 ;a <= 7; a++)
  {
    for (i = 0 ; i <= 7; i++)
    {
      digitalWrite(i, dancinglight[a] [i]);
    }
    delay(100);
  }
}
}
