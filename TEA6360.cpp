#include <Arduino.h>
#include <Wire.h>
#include "TEA6360.h"

TEA6360::TEA6360(){
    Wire.begin();
}

void TEA6360::setFilter(int f, int filter ,int gain){
           switch(f){
               case 1: f = F_1;break;
               case 2: f = F_2;break;
               case 3: f = F_3;break;
               case 4: f = F_4;break;
               case 5: f = F_5;break;
   }
   if(filter==3){
           switch(gain){
               case 5: gain = 0b01010000;break;
               case 4: gain = 0b01010001;break;
               case 3: gain = 0b01010010;break;
               case 2: gain = 0b01000010;break;
               case 1: gain = 0b00110010;break;
               
               case 0: gain = 0b00000000;break;
               
               case -1: gain = 0b00100011;break;
               case -2: gain = 0b00100100;break;
               case -3: gain = 0b00100101;break;
               case -4: gain = 0b00010101;break;
               case -5: gain = 0b00000101;break;     
   }}
     if(filter==2){
           switch(gain){
               case 5: gain = 0b01010000;break;
               case 4: gain = 0b01010001;break;
               case 3: gain = 0b01010010;break;
               case 2: gain = 0b01010011;break;
               case 1: gain = 0b01010100;break;
               
               case 0: gain = 0b00000000;break;
               
               case -1: gain = 0b01000101;break;
               case -2: gain = 0b00110101;break;
               case -3: gain = 0b00100101;break;
               case -4: gain = 0b00010101;break;
               case -5: gain = 0b00000101;break;     
   }}
    if(filter==1){
           switch(gain){
               case 5: gain = 0b01010000;break;
               case 4: gain = 0b01000000;break;
               case 3: gain = 0b00110000;break;
               case 2: gain = 0b00010000;break;
               case 1: gain = 0b00010000;break;
               
               case 0: gain = 0b00000000;break;
               
               case -1: gain = 0b00000001;break;
               case -2: gain = 0b00000010;break;
               case -3: gain = 0b00000011;break;
               case -4: gain = 0b00000100;break;
               case -5: gain = 0b00000101;break;     
   }}
           
           writeWire(f, gain); 
   }


void TEA6360::writeWire(char a, char b){
  Wire.beginTransmission(TEA6360_address);
  Wire.write (a);
  Wire.write (b);
  Wire.endTransmission();
}
