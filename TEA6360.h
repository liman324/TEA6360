
#ifndef TEA6360_H
#define TEA6360_H


#define TEA6360_address 0b1000010 // pin 18 gnd 

#define F_1        0b00000000
#define F_2        0b00000001
#define F_3        0b00000010
#define F_4        0b00000011
#define F_5        0b00000100

#include <Arduino.h>
class TEA6360
{
  public:
    TEA6360();
        void setFilter(int f, int filter, int gain); //1...5, 1...3, -5...0...+5
    
  private:
        void writeWire(char a, char b);
};
    
#endif //TEA6360_H
