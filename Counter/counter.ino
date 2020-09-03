int counter = 0;
int outPin[4] = {5, 4, 3, 2}; 
int input;

void setup () {
 for (counter=0; counter<6; counter++)
    pinMode(outPin[counter], OUTPUT);
  Serial.begin(9600);
  counter = 0;
}

void loop () {
  if (Serial.available()>0){
    input=Serial.read();
    
    if (input=='r') {
      PORTD = counter<<2;
      counter = 0;
    }
    
    if (input=='1') {
      while (counter<=1) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    
    if (input=='2') {
      while (counter<=2) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    
    if (input=='3') {
      while (counter<=3) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    
    if (input=='4') {
      while (counter<=4) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    
    if (input=='5') {
      while (counter<=5) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    
    if (input=='6') {
      while (counter<=6) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }       
    }
    
    if (input=='5') {
      while (counter<=5) 
       {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }      
    }
    
    if (input=='6') {
      while (counter<=6) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    
    if (input=='7') {
      while (counter<=7) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }       
    }
    
    if (input=='8') {
      while (counter<=8) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    
    if (input=='9') {
      while (counter<=9) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }
    }
  counter = 0;  
  }  
} 