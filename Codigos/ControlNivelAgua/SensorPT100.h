

class SensorPT100{

 
  // ------------  VARIABLES  ----------------

  private : boolean estadoActualSensor=true;

  //private : boolean estadoActualTanque=true;
  
  private : float medicionSensor=0.0;
  
  //private : float valorMaxSumergido=383;

  //private : float valorMinSumergido=173;






  // ------------ FUNCIONES  ----------------

   public : boolean estadoSensor(){

    medicionSensor=analogRead(A3);


    //medicion >=0   && medicion <= 83                --> Falla de Conexion / Suministro
    if (medicionSensor >= 0 && medicionSensor <= 83){

       estadoActualSensor = false;
    }
    
    //medicion >= 700  && medicion <= 1023            --> Falla de Conexion / Suministro
    else if(medicionSensor >= 700 && medicionSensor <= 1023){

      estadoActualSensor = false;
    }
    else{
      estadoActualSensor= true;
    }

    

    return estadoActualSensor;
  }

  
  
  public : float sensar(){

      //CALIBRACION: (valor Resistencia)*pendiente - intercepto 
 
      medicionSensor = ( (analogRead(A3) * 1.304) - 685.75 ) ;

      return medicionSensor;
 
  
  }



  
};
