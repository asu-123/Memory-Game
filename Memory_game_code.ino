long randn;
int arr[50];
int in[50];
int count;
void setup() {
   Serial.begin(9600);
   pinMode(2,INPUT);
   pinMode(3,INPUT);
   pinMode(4,INPUT);
   pinMode(5,INPUT);
  
   pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(12,OUTPUT);
   // if analog input pin 5 is unconnected, random analog
   // noise will cause the call to randomSeed() to generate
   // different seed numbers each time the sketch runs.
   // randomSeed() will then shuffle the random function.
   randomSeed(analogRead(A5));
}

void loop() {
  count=4;
 // int rd1=digitalRead(2);
//  if(rd1==1){
    gen(count);
    delay(50);
    red();
    checker();
  //delay(1000);
 // }
}

void gen(int count){
  for(int i=0;i<count;i++){
    randn = random(6,10);
    arr[i]=randn-4;
    digitalWrite(randn,HIGH);
    //digitalWrite(10,HIGH);
    buzz();
    delay(700);
    digitalWrite(randn,LOW);
    //digitalWrite(10,LOW);
    delay(300);
    
  }
}
void red(){
  int k=0;
  while(k<count){
    int bt1=digitalRead(2);
    int bt2=digitalRead(3);
    int bt3=digitalRead(4);
    int bt4=digitalRead(5);
    if(bt1==1){
      in[k]=2;
      digitalWrite(6,HIGH);
      k++;
      delay(200);
      digitalWrite(6,LOW);
    }
    if(bt2==1){
      in[k]=3;
      digitalWrite(7,HIGH);
      k++;
      delay(200);
      digitalWrite(7,LOW);
    }
    if(bt3==1){
      in[k]=4;
      digitalWrite(8,HIGH);
      k++;
      delay(200);
      digitalWrite(8,LOW);
    }
    if(bt4==1){
      in[k]=5;
      digitalWrite(9,HIGH);
      k++;
      delay(200);
      digitalWrite(9,LOW);
    }
  }
}

bool checker(){
  int q=0;
  for(int j=0;j<count;j++){
    if(arr[j]!=in[j]){
       q++;
    }
  }
  if(q>0){
    Serial.println("fail");
    loos();
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(12,LOW);
  }
  else{
    Serial.println("pass");
    win();
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(11,LOW);
  }
}

void buzz(){
  for(int l=0;l<10;l++){
    digitalWrite(10,HIGH);
    delay(1);
    digitalWrite(10,LOW);
    delay(1);
  }
}

void win(){
  for(int p=0;p<15;p++){
    for(int l=0;l<10;l++){
        digitalWrite(10,HIGH);
        delay(1);
        digitalWrite(10,LOW);
        delay(1);
    }
  }
}
void loos(){
  for(int p=0;p<6;p++){
    for(int l=0;l<10;l++){
        digitalWrite(10,HIGH);
        delay(1);
        digitalWrite(10,LOW);
        delay(1);
    }
    delay(100);
  }
}
