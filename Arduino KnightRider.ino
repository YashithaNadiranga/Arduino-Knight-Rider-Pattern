/*=============================================
Program : Arduino KnightRider
Author : DESKTOP-PC\Yashitha Nadiranga
Time : 10:51 AM
Date : 9/7/2017
Created with ARDUINO IDE
=============================================
*/
void setup(){
    
    for(int i = 1;i<11;i++){
    
        pinMode(i,OUTPUT);
    }

}
void loop(){
    
    int t = 50;
    
    for(int i = 1;i<11;i++){
    
        digitalWrite(i,HIGH);
        delay(t);
        digitalWrite(i,LOW);
    }
    
    for(int i = 9;i > 1;i--){
    
        digitalWrite(i,HIGH);
        delay(t);
        digitalWrite(i,LOW);
    }

}