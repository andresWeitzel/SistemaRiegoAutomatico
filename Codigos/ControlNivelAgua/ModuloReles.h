




class ModuloReles{


//------------ VARIABLES-------------------
int IN4 = 12;
int IN3 = 11;
int IN2 = 10;
int IN1 = 9;



//------------ FUNCIONES-------------------

public : void pinModeReles(){

   pinMode(IN4, OUTPUT);
   pinMode(IN3, OUTPUT);
   pinMode(IN2, OUTPUT);
   pinMode(IN1, OUTPUT);

}


public : void activarIN4(){
  
   //Los relays se activan con un estado bajo
  digitalWrite(IN4, LOW);
  
}

public : void desactivarIN4(){
  
    //Los reles se desactivan con un estado alto
  digitalWrite(IN4, HIGH);
  
}

public : void activarIN3(){

  digitalWrite(IN3, LOW);
}

public : void desactivarIN3(){
  
  digitalWrite(IN3, HIGH);
  
}


public : void activarIN2(){

  digitalWrite(IN2, LOW);
}


public : void desactivarIN2(){
  
  digitalWrite(IN2, HIGH);
  
}



public : void activarIN1(){

  digitalWrite(IN1, LOW);
}


public : void desactivarIN1(){
  
  digitalWrite(IN1, HIGH);
  
}

  
};
