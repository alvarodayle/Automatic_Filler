#include <Stepper.h>

#define Sensor1    0  
#define Sensor2    5   
#define Sensorbico 2   
#define Esteira    3
#define Bomba      4

bool estadosensor1;
bool estadosensor2;  
bool estadosensorbico;

const int stepsPerRevolution = 200; 

Stepper myStepper(stepsPerRevolution, 6, 8, 7, 9);     

int tamanho = 0;

void setup() {

 pinMode (Sensor1,    INPUT_PULLUP);
 pinMode (Sensor2,    INPUT_PULLUP); 
 pinMode (Sensorbico, INPUT_PULLUP);
 pinMode (Esteira,    OUTPUT);
 pinMode (Bomba,      OUTPUT);

 digitalWrite(Bomba, HIGH);
 
 myStepper.setSpeed(60);

 Serial.begin(9600);
}

void loop(){
  
   estadosensor1    = digitalRead(Sensor1);
   estadosensor2    = digitalRead(Sensor2);
   estadosensorbico = digitalRead(Sensorbico);

//------------ Indentificação dos tamanhos -----------------

if(estadosensor1 == HIGH){}

else{
  delay(1000);
  if(estadosensor2 == LOW){
    Serial.println("Garrafa de 1,5 litro detectada");
    tamanho = 2;
    }
    
  else{
    Serial.println("Garrafa de 1 litro detectada"); 
    tamanho = 1;
  }
}

//----- Proscessos de parada e envase das garrafas ----------

if(estadosensorbico == HIGH){
  digitalWrite(Esteira, HIGH);
}

else{
    digitalWrite(Esteira, LOW);
    
    if(tamanho == 1){
    Serial.println("Registrador 1");
    delay(2000);
    myStepper.step(-2200);
    delay(4000);
    Serial.println("Bomba acionada");
    digitalWrite(Bomba, LOW);
    delay(18000);
    Serial.println("Bomba desligada");
    digitalWrite(Bomba, HIGH);
    delay(2000);
    myStepper.step(2200);
    delay(2000);
    Serial.println("Fim do envase");
    tamanho = 0; 
  }
  
  if(tamanho == 2){
    Serial.println("Registrador 2");
    delay(2000);
    myStepper.step(-1000);
    delay(4000);
    Serial.println("Bomba acionada");
    digitalWrite(Bomba, LOW);
    delay(29000);
    Serial.println("Bomba desligada");
    digitalWrite(Bomba, HIGH);
    delay(2000);
    myStepper.step(1000);
    delay(2000);
    Serial.println("Fim do envase");
    tamanho = 0;
    }
  }  
}  
