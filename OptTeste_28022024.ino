int SENSOR = 3;  // Saída do encontro entre o Coletor e resistor Pull Up
int SENSOR2 = 6; // Saída do encontro entre o Emissor e resistor Pull Down
int LED = 4;     // Led apagado enquanto não recebe comando do Arduino devido a interrupção na Chave Ótica 
int LED2 = 5;    // Led aceso enquanto não recebe comando do Arduino devido a interrupção na Chave Ótica 
int LED3 = 7;    // Led aceso devido a comando ótico recebido do Arduino no Optoacoplador
int ESTADO;
int ESTADO2;

void setup() {

  pinMode (SENSOR, INPUT);
  pinMode (SENSOR2, INPUT);
  pinMode (LED, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
}

void loop() {

  ESTADO = digitalRead(SENSOR);
  digitalWrite(LED, ESTADO);
  ESTADO2 = digitalRead(SENSOR2);
  digitalWrite(LED2, ESTADO2);
  digitalWrite(LED3, HIGH);
}