// Declaração de variáveis
byte ledA = 2;
byte ledVd = 3;
byte ledVm = 4;
byte ledB = 5;
byte ledL = 6;
int potencia = A1;
int valor = 0;

// Inicializando as variáveis
void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledVd, OUTPUT);
  pinMode(ledVm, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledL, OUTPUT);  
  pinMode(potencia, INPUT);
  Serial.begin(9600);
}

// Lógica de funcionamento
void loop() {
    valor = analogRead(A1);
    Serial.println(valor);

    if (valor > 0 & valor < 205) {
        digitalWrite(ledA, 1);
      	digitalWrite(ledVd, 0);
      	digitalWrite(ledVm, 0);
      	digitalWrite(ledB, 0);
      	digitalWrite(ledL, 0);
    }

    if (valor >=205 & valor < 410) {
        digitalWrite(ledA, 0);
      	digitalWrite(ledVd, 1);
      	digitalWrite(ledVm, 0);
      	digitalWrite(ledB, 0);
      	digitalWrite(ledL, 0);
    }

    if (valor >=410 & valor < 620) {
        digitalWrite(ledA, 0);
      	digitalWrite(ledVd, 0);
      	digitalWrite(ledVm, 1);
      	digitalWrite(ledB, 0);
      	digitalWrite(ledL, 0);
    }
  
  if (valor >= 620 & valor < 840) { 
     	digitalWrite(ledA, 0);
      	digitalWrite(ledVd, 0);
      	digitalWrite(ledVm, 0);
      	digitalWrite(ledB, 1);
      	digitalWrite(ledL, 0);
  }
  
  if (valor >= 840 & valor < 1023) {
     	digitalWrite(ledA, 0);
      	digitalWrite(ledVd, 0);
      	digitalWrite(ledVm, 0);
      	digitalWrite(ledB, 0);
      	digitalWrite(ledL, 1);
  }
}
  