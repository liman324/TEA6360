// pin 18 == GND
#include <TEA6360.h>
#include <Wire.h>
 TEA6360 tea;

void setup(){
   Wire.begin();
   audio();
}

void loop(){}

void audio(){
 // НОМЕР ПОЛОСЫ int 1...5, РЕЖИМ ФИЛЬТРА int 1...3, УСИЛЕНИЕ/ОСЛАБЛЕНИЕ 12 дБ шаг 2.4 дБ int -5...5 
  tea.setFilter(1,1,5);// 12 kHz
  tea.setFilter(2,1,5);// 2,95 kHz
  tea.setFilter(3,1,1);// 790 Hz
  tea.setFilter(4,1,3);// 205 Hz
  tea.setFilter(5,1,3);// 59 Hz
}
