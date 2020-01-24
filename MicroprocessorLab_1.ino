//1

int a,b;

void setup()

{

  DDRD = 0b11111100;

  DDRB = 0b000011;

}



void loop()

{

  PORTD = 0b00000100;

  PORTB = 0x00;

  for(a=0;a<6;a++)

  {

      delay(1000);

      PORTD=PORTD<<1;

  }

  PORTB = 0b000001;

  for(b=0;b<2;b++)

  {

    delay(1000);

    PORTB = PORTB <<1;

  }

}





//2

int buttonPin1 = A0;

int buttonPin2 = A1;

int buttonState1 ;    

int buttonState2 ;  

       

void setup()

{

  DDRD = 0b11111100;

  DDRB = 0b000011;

  pinMode(buttonPin1, INPUT_PULLUP); 

  pinMode(buttonPin2, INPUT_PULLUP); 

 }

void loop()

{

 buttonState1 = digitalRead(buttonPin1); 

 buttonState2 = digitalRead(buttonPin2); 

 int a,b;

 if (buttonState2 == 0) 

 {     

  PORTD = 0b00000100;

  for(a=0;a<6;a++)

  {

    delay(1000);

    PORTD = PORTD << 1;

  }

  PORTB = 0b000001;

  for(b=0;b<2;b++)

  {

    delay(1000);

    PORTB = PORTB << 1;

  } 

 } 

 if (buttonState1 == 0) 

 {         

  PORTB = 0b000010;

  for(b=0;b<2;b++)

  {

    delay(1000);

    PORTB = PORTB >> 1;

  }    

  PORTD = 0b10000000;

  for(a=0;a<6;a++)

  {

    delay(1000);

    PORTD = PORTD >> 1;

  }

 }

}





//3

int buttonPin1 = A0;

int buttonPin2 = A1;

int analogPin  = A2;

int buttonState1 ;    

int buttonState2 ;  

int val = 0;  

       

void setup()

{

  DDRD = 0b11111100;

  DDRB = 0b000011;

  pinMode(buttonPin1, INPUT_PULLUP); 

  pinMode(buttonPin2, INPUT_PULLUP);

 }



void loop()

{

 val          = analogRead(analogPin);

 buttonState1 = digitalRead(buttonPin1); 

 buttonState2 = digitalRead(buttonPin2); 

 int a,b;

 if (buttonState2 == 0) 

 {     

  PORTD = 0b00000100;

  for(a=0;a<6;a++)

  {

    delay(val);

    PORTD = PORTD << 1;

  }

  PORTB = 0b000001;

  for(b=0;b<2;b++)

  {

    delay(val);

    PORTB = PORTB << 1;

  } 

 } 

 if (buttonState1 == 0) {         

  PORTB = 0b000010;

  for(b=0;b<2;b++)

  {

    delay(val);

    PORTB = PORTB >> 1;

  }    

  PORTD = 0b10000000;

  for(a=0;a<6;a++)

  {

    delay(val);

    PORTD = PORTD >> 1;

  }

 }

}
