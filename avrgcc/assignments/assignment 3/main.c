//Takes a number as input and prints the next number as output

#include <avr/io.h>

#include <util/delay.h>

#include <stdbool.h>




int main (void)

{

 bool A,B,C,D;

 bool q,x,y,z;

 DDRD = 0b00111100;

 DDRB = 0b00100000;

 

        while(1){  

               

                z = (PIND & (1 << PIND6)) == (1 << PIND6);
                
                y = (PIND & (1 << PIND7)) == (1 << PIND7);

                x = (PINB & (1 << PINB0)) == (1 << PINB0);

                q = (PINB&(1 << PINB1)) == (1 << PINB1);
D = 0;
C = 0;
B = 0;
A = q;
                PORTD = (D << 5);

                PORTD |= (C << 4);

                PORTD |= (B << 3);

                PORTD |= (A << 2);


 }

        return 0;

}
