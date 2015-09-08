int red = 9;
int green = 10;
int blue = 11;

void setup()
{
    // initialize serial communication
    Serial.begin(9600);
    pinMode(A0, INPUT);     // set A0 as input
    pinMode(red,   OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue,  OUTPUT);

    digitalWrite(red,    LOW);
    digitalWrite(green,  LOW);
    digitalWrite(blue,   LOW);
}

void loop()
{
    int sensorValue = analogRead(A0);
    Serial.print(sensorValue);
    Serial.println("");
//  sensorValue = map(sensorValue, 70, 400, 0, 300);

    if (sensorValue <= 110) {
      digitalWrite(red,    LOW);
      digitalWrite(green, HIGH);
      digitalWrite(blue,   LOW);
    }
    if (sensorValue > 110 && sensorValue < 190) {
      digitalWrite(red,    LOW);
      digitalWrite(green,  LOW);
      digitalWrite(blue,  HIGH);
    }
    if (sensorValue >= 190) {
      digitalWrite(red,   HIGH);
      digitalWrite(green,  LOW);
      digitalWrite(blue,   LOW);
    }
    delay(100);
    
}
