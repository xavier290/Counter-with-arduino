// first of all we declare our variables

int counter = 0; // this variable will help us to count from 0 to 9 on binary numbers
int outPin[4] = {5, 4, 3, 2}; // with this array we will active the outputs of our arduino uno
int input; // this will help us to send orders to our arduino through the serial monitor

// now we well active the outputs and the serial monitor
void setup () {
 for (counter=0; counter<6; counter++)
    pinMode(outPin[counter], OUTPUT);
  Serial.begin(9600);
  counter = 0;
}

void loop () {
  // if the serial monitor is available we will be able to active the counter
  if (Serial.available()>0){
    input=Serial.read(); 
    /* i put the letter 'r' as a reset, that we will use when for example the arduino counts
    until 9 or 7, so because the arduino will continue showing the number 7 we could want to
    reset that, so the arduino will show the number 0 instead of 7 or 9*/
    if (input=='r') {
      PORTD = counter<<2;
      counter = 0;
    }
    /* is we send the number 1 through the serial monitor the arduino will count until the number 1
    the same apply with the rest of the code*/
    if (input=='1') {
      while (counter<=1) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    // the arduino will count until the number two if we send so through the serial monitor
    if (input=='2') {
      while (counter<=2) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    // the arduino will count until the number three if we send so through the serial monitor
    
    if (input=='3') {
      while (counter<=3) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    // the arduino will count until the number four if we send so through the serial monitor
    if (input=='4') {
      while (counter<=4) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    // the arduino will count until the number five if we send so through the serial monitor
    if (input=='5') {
      while (counter<=5) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    // the arduino will count until the number six if we send so through the serial monitor
    if (input=='6') {
      while (counter<=6) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }       
    }
    // the arduino will count until the number seven if we send so through the serial monitor
    if (input=='7') {
      while (counter<=7) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }       
    }
    // the arduino will count until the number eight if we send so through the serial monitor
    if (input=='8') {
      while (counter<=8) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }     
    }
    // the arduino will count until the number nine if we send so through the serial monitor
    if (input=='9') {
      while (counter<=9) {
         PORTD = counter<<2;   
         delay(1000); 
         counter++;  }
    }
  counter = 0;  // and finally we equal our variable counter to 0 again to avoid problems with the loop 
  }  
} 