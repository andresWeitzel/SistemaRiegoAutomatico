
// =========== IMPORTACION CLASES CREADAS ==========
#include "ControlSensoresAgua.h"
#include "ModuloReles.h"
#include "SensorPT100.h"

// =========== OBJETOS ===============
ControlSensoresAgua sensoresAgua;

ModuloReles reles;

SensorPT100 pt100;
// =========== FIN OBJETOS ===============



// ===========  VARIABLES ==========
// =========== FIN VARIABLES ==========


void setup() {
  
  Serial.begin(9600);

  //Declaramos las entradas del Rele
  reles.pinModeReles();

  reles.activarIN4();
  reles.activarIN3();
  reles.activarIN2();
  reles.desactivarIN1();


  
}

void loop() {



  
  Serial.println("");Serial.println("");

  Serial.println(pt100.sensar());
  
  //Serial.print("Sensor MH: ");Serial.println(sensoresAgua.sensarSensorMH());
  
  //Serial.println(sensoresAgua.estadoSensorMH());
  
 // Serial.println("");Serial.println("");

  //Serial.print("Sensor MHRD: ");Serial.println(sensoresAgua.sensarSensorMHRD());

  //Serial.println(sensoresAgua.sensarSensorMHRD());
  
  //Serial.println(sensoresAgua.estadoSensorMHRD());
  

  //Serial.println("");Serial.println("");
  
  //Serial.println("Nivel de Agua : ");Serial.print(sensoresAgua.nivelDeAgua());

 // Serial.println("");Serial.println("");

  //delay(3000);
  
  delay(200);





}
