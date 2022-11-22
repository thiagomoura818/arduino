
int yellow = 3;
int green = 4;
int red = 5;

void setup(){
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
}

void loop(){
    digitalWrite(green, HIGH);
    delay(4000);
    
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(2000);
    
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(4000);
}