//Takes a number as input and prints the next number as output

#include <avr/io.h>

#include <util/delay.h>

#include <stdbool.h>




int main (void)

{

 bool A,B,C,D;

 bool a,b,c,d;

 DDRD = 0b00111100;

 DDRB = 0b00100000;

 

        while(1){
 
  A = (!a&&!b&&d) || (b&&!c&&!d) || (a&&b&&!d) || (a&&!b&&c);


                PORTD = (D << 5);

                PORTD |= (C << 4);

                PORTD |= (B << 3);

                PORTD |= (A << 2);

                D = (PIND & (1 << PIND6)) == (1 << PIND6);
                
                C = (PIND & (1 << PIND7)) == (1 << PIND7);

                B = (PINB & (1 << PINB0)) == (1 << PINB0);

                A = (PINB&(1 << PINB1)) == (1 << PINB1);

  

 }

        return 0;

}
