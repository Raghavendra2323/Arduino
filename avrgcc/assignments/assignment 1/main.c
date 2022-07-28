

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
  

 A = (!a&&c)||b;
 B = (a&&!a);
 C = (b&&!b);
 D = (c&&!c);

                PORTD = (D << 5);
                PORTD = (C << 4);
                PORTD = (B << 3);
                PORTD = (A << 2);

                d = (PIND & (1 << PIND6)) == (1 << PIND6);

                c = (PIND & (1 << PIND7)) == (1 << PIND7);

                b = (PINB & (1 << PINB0)) == (1 << PINB0);

                a = (PINB&(1 << PINB1)) == (1 << PINB1);

  

 }

        return 0;

}
