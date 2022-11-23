#define b1 digitalRead(b_1)
#define b2 digitalRead(b_2)
#define b3 digitalRead(b_3)
#define b4 digitalRead(b_4)
#define dw digitalWrite
const int led_1 = 7, b_1 = 13, b_2 = 12, b_3 = 11, b_4 = 10,;


void setup()
{
  pinMode(led_1, OUTPUT);
  pinMode(b_1, INPUT);
  pinMode(b_2, INPUT);
  pinMode(b_3, INPUT);
  pinMode(b_4, INPUT);
}

void loop()
{
  if(b4 == 0){
    if(b1 == 1){
      dw(led_1, HIGH);
      dw(led_2, HIGH);
      dw(led_3, HIGH);
      delay(500);
    }
      dw(led_1, LOW);
      dw(led_2, LOW);
      dw(led_3, LOW);

    if(b2 == 1){
      dw(led_1, HIGH);
      dw(led_2, HIGH);
      dw(led_3, HIGH);
      delay(500);
      dw(led_1, LOW);
      dw(led_2, LOW);
      dw(led_3, LOW);
      delay(500);
      dw(led_1, HIGH);
      dw(led_2, HIGH);
      dw(led_3, HIGH);
    }
      dw(led_1, LOW);
      dw(led_2, LOW);
      dw(led_3, LOW);

      if(b3 == 1){
      dw(led_1, HIGH);
      dw(led_2, HIGH);
      dw(led_3, HIGH);
      delay(500);
      dw(led_1, LOW);
      dw(led_2, LOW);
      dw(led_3, LOW);
      delay(500);
      dw(led_1, HIGH);
      dw(led_2, HIGH);
      dw(led_3, HIGH);
      delay(500);
      dw(led_1, LOW);
      dw(led_2, LOW);
      dw(led_3, LOW);
      delay(500);
      dw(led_1, HIGH);
      dw(led_2, HIGH);
      dw(led_3, HIGH);
    }
      dw(led_1, LOW);
      dw(led_2, LOW);
      dw(led_3, LOW);
  }
  
  if(b4 == 1){
    if(b1 == 1){
      dw(led_1, HIGH);
      delay(500);
      dw(led_1, LOW);
      dw(led_2, HIGH);
      delay(500);
      dw(led_2, LOW);
      dw(led_3, HIGH);
      delay(500);
      dw(led_3, LOW);
    }

    if(b2 == 1){
      dw(led_1, HIGH);
      delay(500);
      dw(led_1, LOW);
      delay(500);
      dw(led_1, HIGH);
      delay(500);
      dw(led_1, LOW)
      dw(led_2, HIGH);
      delay(500);
      dw(led_2, LOW);
      delay(500);
      dw(led_2, HIGH);
      delay(500);
      dw(led_2, LOW)
      dw(led_3, HIGH);
      delay(500);
      dw(led_3, LOW);
      delay(500);
      dw(led_3, HIGH);
      delay(500);
      dw(led_3, LOW);
    }

    if(b2 == 1){
      dw(led_1, HIGH);
      delay(500);
      dw(led_1, LOW);
      delay(500);
      dw(led_1, HIGH);
      delay(500);
      dw(led_1, LOW)
      delay(500);
      dw(led_1, LOW);
      delay(500);
      dw(led_1, HIGH);
      delay(500);
      dw(led_1, LOW)
      dw(led_2, HIGH);
      delay(500);
      dw(led_2, LOW);
      delay(500);
      dw(led_2, HIGH);
      delay(500);
      dw(led_2, LOW)
      dw(led_3, HIGH);
      delay(500);
      dw(led_2, LOW);
      delay(500);
      dw(led_2, HIGH);
      delay(500);
      dw(led_2, LOW)
      delay(500);
      dw(led_3, LOW);
      delay(500);
      dw(led_3, HIGH);
      delay(500);
      dw(led_3, LOW);
      delay(500);
      dw(led_3, LOW);
      delay(500);
      dw(led_3, HIGH);
      delay(500);
      dw(led_3, LOW);
    }
  }

}