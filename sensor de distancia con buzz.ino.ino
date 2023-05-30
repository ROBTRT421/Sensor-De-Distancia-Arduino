#include <Wire.h> //biblioteca le permite comunicarse con dispositivos I2C 
#include <LiquidCrystal_I2C.h> //biblioteca que permite controlar pantallas I2C 
const int trigPin = 9;    //pin donde lo conectamos trigger
const int echoPin = 10;   //pin donde conectamos echo
long duracion;   //declar variables
int distancia;
int ultimaDistancia = 0;
int buzzer = 7;         //pin donde conectamos el buzzer
LiquidCrystal_I2C lcd(0x27,16,2); //creamos objetos
void setup() 
{
  pinMode(trigPin, OUTPUT); //inicializamos como salida
  pinMode(echoPin, INPUT);  //inicializamos como entrada
  pinMode(buzzer, OUTPUT);  //inicializamos como salida
  lcd.init(); //inicializar el objeto
  lcd.backlight(); //encender el display
}
void loop() 
{
  digitalWrite(trigPin, LOW);  //apagamos
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);  //encendemos para enviar la onda
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duracion = pulseIn(echoPin, HIGH); //obtener duracion en microsegundos
  distancia = (duracion * 0.034) / 2; //formula para obtener la distancia
  if(distancia != ultimaDistancia) //no es igual a la ultima distancia
  {
    lcd.clear(); //limpiar la pantalla de LCD
    lcd.setCursor(0, 0); //posicionarnos
    lcd.print("Distancia: "); // Imprimir en la pantalla de LCD
    lcd.print(distancia); //imprimir variable distancia
    lcd.print(" cm");
    ultimaDistancia = distancia; //actualizar variable
  }
  if(distancia < 5) //objeto a menos de 5cm
  {
   digitalWrite(buzzer, HIGH);  //suena el buzzer
   delay(300);                  //tiempo durante el que suena
   digitalWrite(buzzer, LOW);   //deja de sonar el buzzer
  }
  delay(500);
}

