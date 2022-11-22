
int yellow = 3;
int green = 4;
int red = 5;
int green2 = 6;
int red2 = 7;

void setup(){
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
    pinMode(green2, OUTPUT);
    pinMode(red2, OUTPUT);
}

void loop(){
    digitalWrite(green, HIGH);
    digitalWrite(red2, HIGH);
    delay(4000);
    
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(2000);
    
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(red2, LOW);    
    digitalWrite(green2, HIGH);
    delay(3000);
    digitalWrite(green2, LOW);
    digitalWrite(red2, HIGH);
    delay(200);
    digitalWrite(red2, LOW);
    delay(200);
    digitalWrite(red2, HIGH);
    digitalWrite(red, LOW);
    delay(2000);
}