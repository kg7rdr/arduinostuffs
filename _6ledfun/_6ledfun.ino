/////////////////////////Define led outputs///////////////////////
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
char mychar;


void setup() {
  Serial.begin(9600);   //Baud from software (NOT WIRELESS COMMUNICATION BAUD RATE)
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
void s1(){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(100);
    digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(100);
    digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(100);
    digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(100);
    digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(100);
}
/////////////////////////////////////////////////////////////
void s2(){
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}
/////////////////////////////////////////////////////////////////////
void s3(){
  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led2, HIGH);
  delay(200);
  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led4, HIGH);
  delay(200);
  digitalWrite(led5, HIGH);
  delay(200);
  digitalWrite(led6, HIGH);
  
  delay(300);
  
  digitalWrite(led6, LOW);
  delay(200);
  digitalWrite(led5, LOW);
  delay(200);
  digitalWrite(led4, LOW);
  delay(200);
  digitalWrite(led3, LOW);
  delay(200);
  digitalWrite(led2, LOW);
  delay(200);
  digitalWrite(led1, LOW);
  
}
//////////////////////////////////////////////////////////////////
void s4(){
  digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led6,LOW);
    digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led5,LOW);
    digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  digitalWrite(led4,LOW);
    digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led6,LOW);
  delay(100);
    digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led6,LOW);
    digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led5,LOW);
    digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  digitalWrite(led4,LOW);
    digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led6,LOW);
  delay(100);
    digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led6,LOW);
    digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led5,LOW);
    digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  digitalWrite(led4,LOW);
    digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led6,LOW);
  delay(100);
}
void s5(){
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  delay(50);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  delay(50);
    digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  delay(50);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  delay(50);
    digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  delay(50);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  delay(50);
    digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  delay(50);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  delay(50);
    digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  delay(50);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  delay(50);
}
  
////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

void loop() {

  if(Serial.available()){   
    mychar = Serial.read();

    if(mychar == '1') //Runs sequence 1 if "1" is send over serial
      {
      s1();
      Serial.println("sequence 1");
    }
   ///////////////////////////////////////// 
          else if(mychar == '2') //Runs sequence 2 if "2" is send over serial
      {
      s2();
      Serial.println("sequence 2");
    }
   ///////////////////////////////////////// 
          else if(mychar == '3') //Runs sequence 3 if "3" is send over serial
      {
      s3();
      Serial.println("sequence 3");
    }
    ////////////////////////////////////////
          else if(mychar == '4') //Runs sequence 4 if "4" is send over serial
      {
      s4();
      Serial.println("sequence 4");
    }
    ////////////////////////////////////////
          else if(mychar == '5') //Runs sequence 5 if "5" is send over serial
      {
      s5();
      Serial.println("sequence 5");
    }

    ////////////////////////////////////////
    ////////////////////////////////////////
  }
}
