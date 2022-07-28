.include "/home/raghavendra/m328Pdef.inc"

	ldi r17, 0b11000011 ; identifying input pins 10,11,12,13
	out DDRB,r17		; declaring pins as input
	in r17,PINB
	
	ldi r16, 0b00111100 ;identifying output pins 2,3,4,5
	out DDRD,r16		;declaring pins as output
	out PORTD,r17		;writing output to pins 2,3,4,5
	
Start:
	rjmp Start
