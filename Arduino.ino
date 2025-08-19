//Define pino do LED
const int ledpin = 13 

void setup(){
    //Define o pino do LED como saída 
    pinMode(ledPin,OUTPUT);
}

void loop(){
    //Acende o LED
    digitalWrite(ledPin, HIGH);
    delay(1000); \\aguarda 1 segundo

    //Desliga o LED
    digitalWrite(ledPin,LOW );
    delay(1000);
}

