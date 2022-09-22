
// =========== IMPORTACION DE CLASES CREADAS ==========
#include "SensorMH.h"
#include "SensorMHRD.h"

// =========== INSTANCIAS DE LAS CLASES CREADAS =======
 SensorMH sensorMH;
 SensorMHRD sensorMHRD;




class ControlSensoresAgua{


  
// ------------  VARIABLES  ----------------

  private : String estadoMH;
  private : String estadoMHRD;


  private : float valorSensorMH;
  private : float valorSensorMHRD;


  private : String valorNivelDeAgua;



// -------------- FUNCIONES ----------------------


public : String estadoSensorMH(){

  if(sensorMH.estadoSensor()){

    estadoMH = "Sensor MH Activo!"; 
  }
  else{
    estadoMH = "Sensor MH Inactivo! Comprobar Funcionamiento!"; 
  }

  return estadoMH;
  
}




public : String estadoSensorMHRD(){

  if(sensorMHRD.estadoSensor()){

    estadoMHRD = "Sensor MH RD Activo!"; 
  }
  else{
    estadoMHRD = "Sensor MH RD Inactivo! Comprobar Funcionamiento!"; 
  }

  return estadoMHRD;
  
}




public : float sensarSensorMH(){

  valorSensorMH = sensorMH.sensar();

  return valorSensorMH;
  
}




public : float sensarSensorMHRD(){

  valorSensorMHRD = sensorMHRD.sensar();

  return valorSensorMHRD;
  
}




public : String nivelDeAgua(){


  if(sensorMH.estadoTanque() == true && sensorMHRD.estadoTanque()== true){

    if(sensorMH.estadoSensor() == true && sensorMHRD.estadoSensor()==true){

        valorNivelDeAgua = " 60-100%";
    }else{

        valorNivelDeAgua = "FALLO EN SENSORES";
    }
    
  }
  else if(sensorMH.estadoTanque() == false && sensorMHRD.estadoTanque() == true){

      if(sensorMH.estadoSensor() == true && sensorMHRD.estadoSensor()==true){

        valorNivelDeAgua = "20-60%";
    }else{

        valorNivelDeAgua = "FALLO EN SENSORES";
    }
  }
  else if(sensorMH.estadoTanque() == false && sensorMHRD.estadoTanque() == false){

      if(sensorMH.estadoSensor() == true && sensorMHRD.estadoSensor()==true){

        valorNivelDeAgua = "0-20%";
    }else{

        valorNivelDeAgua = "FALLO EN SENSORES";
    }
  }
  else{
    valorNivelDeAgua = "ERROR DE CALCULO DEL ESTADO DEL TANQUE!!";
  }

  

  return valorNivelDeAgua;
  
}




};
