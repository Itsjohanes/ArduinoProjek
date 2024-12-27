int nilai = 0;

int led7 = 7;
int pot = A0;

void setup() {
  pinMode(led7, OUTPUT);
  Serial.begin(9600); // Inisialisasi komunikasi serial dengan baud rate 9600
}

void loop() {
  nilai = analogRead(pot); // Membaca nilai dari potensiometer
  if(nilai > 100){
    digitalWrite(led7,1);
  }else{
    digitalWrite(led7,0);

  }
}
