
int yellow = 3;
int green = 4;
int red = 5;
int green2 = 6;
int red2 = 7;

void setup(){
    pinMode(3, OUTPUT);
}

void loop(){
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
}