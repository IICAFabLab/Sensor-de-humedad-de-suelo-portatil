#include <RTClib.h>
#include <Wire.h>
#include <SD.h>
#include <SPI.h>

RTC_DS3231 rtc;

File archivo;

void setup() {

  Serial.begin(9600);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  pinMode(3, OUTPUT);

  if (!rtc.begin()) {

    Serial.println("No hay un módulo RTC");
    while (1);
  }

  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

  Serial.print("Iniciando tarjeta SD...\n");
  if (!SD.begin(4)){

    Serial.print("No se pudo iniciar la tarjeta SD...");
    while (1);
  }

  archivo.println(" ");
  Serial.println("Tarjeta SD iniciada con éxito...");
}

void loop(){

  DateTime now = rtc.now();
  archivo = SD.open("datos.txt", FILE_WRITE);

  if (archivo){

    archivo.print(now.hour());

    archivo.print(":");

    archivo.print(now.minute());

    archivo.print(":");

    archivo.print(now.second());

    archivo.print(",");

    archivo.print(now.day());

    archivo.print("/");

    archivo.print(now.month());

    archivo.print("/");

    archivo.print(now.year());

    archivo.print(",");

    archivo.println(" ");

    digitalWrite(3, HIGH);

    delay(5000);

    archivo.close();

    digitalWrite(3, LOW);

  }

  else{

    Serial.println("Error al abrir el archivo...");
  }

  Serial.print("HORA --> ");

  Serial.print(now.hour());

  Serial.print(":");

  Serial.print(now.minute());

  Serial.print(":");

  Serial.print(now.second());

  Serial.print(" FECHA --> ");

  Serial.print(now.day());

  Serial.print("/");

  Serial.print(now.month());

  Serial.print("/");

  Serial.print(now.year());

  delay(55000);
}