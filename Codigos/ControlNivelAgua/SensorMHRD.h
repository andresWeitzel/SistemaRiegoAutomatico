

// ------------ VALORES DE USO SENSOR MHRD----------
/* Sensor MH-RD 383(>vacio) a 173(<lleno)
   
 * Falla Sensor MH-RD   700(>falla)  a  1023(<falla)  (Desconexión Cable Negativo)
 
 * Falla Sensor MH-RD   0(>falla)  a  83(<falla)  (Desconexión Cable Positivo)
  
 

  
  == Estados Posibles del Sensor  ==
  
  medicion > 383                          --> vacio

  medicion >= 173  || medicion <= 383     --> lleno
  medicion <= 173  || medicion <= 383     --> lleno
  
  medicion >= 700  && medicion <= 1023    --> Falla de Conexion / Suministro

  medicion >=0   && medicion <= 83    --> Falla de Conexion / Suministro


  */


class SensorMHRD{

 
  // ------------  VARIABLES  ----------------

  private : boolean estadoActualSensor=true;

  private : boolean estadoActualTanque=true;
  
  private : float medicionSensor=0.0;
  
  private : float valorMaxSumergido=383;

  private : float valorMinSumergido=173;






  // ------------ FUNCIONES  ----------------

   public : boolean estadoSensor(){

    medicionSensor=analogRead(A1);


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

      medicionSensor = analogRead(A1);

      return medicionSensor;
 
  
  }



  public : boolean estadoTanque(){

    medicionSensor = analogRead(A1);

     //   medicion > 383                                        --> vacio

    if (medicionSensor > valorMaxSumergido ){

      estadoActualTanque=false;
      
     
    }
    //medicion >= 173  || medicion <= 383                       --> lleno
    else if(medicionSensor >= valorMinSumergido  || medicionSensor <= valorMaxSumergido  ){
      
      estadoActualTanque=true;
    
    }
    
    // medicion <= 173  || medicion <= 383                      --> lleno
    else if (medicionSensor <= valorMinSumergido  || medicionSensor <= valorMaxSumergido  ){

      estadoActualTanque=true;
 
    }
     
    else{
      
      estadoActualTanque=false;
      
     
    }

     return estadoActualTanque;

  }
  
};
