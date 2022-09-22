

// ------------ VALORES DE USO SENSOR MH ----------
/* Sensor MH   270(<Vacio) a 377(>Lleno)

 * Falla Sensor MH   694(>falla)  a  1023(<falla)  (Desconexión Cable Negativo)

 * Falla Sensor MH   0(>falla)   a  5.7(<falla)  (Desconexión Cable Positivo)


 
  == Estados Posibles del Sensor  ==

  medicion < 270                             --> vacio
  
  medicion >= 270  ||  medicion >= 377        --> lleno
  medicion >= 270  ||  medicion <= 377        --> lleno



  medicion >= 694 && medicion <= 1023   --> Falla de Conexion / Suministro

  medicion >= 0 && medicion <= 5.7   --> Falla de Conexion / Suministro

  


  */


class SensorMH{

  
  
  // ------------  VARIABLES  ----------------

  private : boolean estadoActualSensor=true;

  private : boolean estadoActualTanque=true;

  private : float medicionSensor=0.0;

  private : float valorMinSumergido=270;

  private : float valorMaxSumergido=377;



 


  // ------------ FUNCIONES  ----------------
 
   public : boolean estadoSensor(){

     medicionSensor = analogRead(A0);

   
   //medicion >= 694 && medicion <= 1023   --> Falla de Conexion / Suministro
    if(medicionSensor >= 694 && medicionSensor <= 1023){

       estadoActualSensor = false;
    }
   //medicion >= 0 && medicion <= 5.7   --> Falla de Conexion / Suministro
    else if (medicionSensor >= 0 && medicionSensor <= 5.7){

       estadoActualSensor = false;
    }
    else{
      estadoActualSensor = true;
    }

    return estadoActualSensor;
  }
  
  
  
  
  public : float sensar(){

      medicionSensor = analogRead(A0);

      return medicionSensor;
 
  
  }
  

  
  public : boolean estadoTanque(){

    medicionSensor = analogRead(A0);

    // medicion < 270                                  --> vacio
    if (medicionSensor < valorMinSumergido ){

      estadoActualTanque = false;

   
    }
    //  medicion >= 270  ||  medicion >= 377            --> lleno
    else if(medicionSensor >= valorMinSumergido || medicionSensor >= valorMaxSumergido  ){

      estadoActualTanque = true;
      

    }
     //medicion >= 270  ||  medicion <= 377             --> lleno
    else if (medicionSensor >= valorMinSumergido || medicionSensor <= valorMaxSumergido){

      estadoActualTanque = true;
     
    }
    else{
      // Error de Medicion, devolvemos false
      estadoActualTanque = false;  
     
    }

    

     return estadoActualTanque;
    

  }

  
  
};


  
