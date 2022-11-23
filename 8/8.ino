#define b1 digitalRead(b_1)
#define b2 digitalRead(b_2)
#define b3 digitalRead(b_3)
#define b4 digitalRead(b_4)
#define dw digitalWrite
const int led_1 = 4, led_2 = 3, led_3 = 2, b_1 = 13, b_2 = 12, b_3 = 11, b_4 = 10;


void setup()
{
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(b_1, INPUT);
  pinMode(b_2, INPUT);
  pinMode(b_3, INPUT);
  pinMode(b_4, INPUT);
}

void loop()
{
  if(b1 == 1){
    dw(led_1, HIGH);
  }else{
    dw(led_1, LOW);
  }

  if(b2 == 1){
    dw(led_2, HIGH);
  }

  if(b3 == 1){
    dw(led_2, LOW);
  }

  while(b4 == 1){
    dw(led_3, HIGH);
    delay(200);
    dw(led_3, LOW);
    delay(200);
  }

}