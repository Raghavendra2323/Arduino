;F = xy' + x'yz

.include "/home/raghavendra/m328Pdef.inc"

ldi r16,  0b00111100
out DDRD,r16      ;declaring pins as output

ldi r16, 0b00000001  ;initializing X
ldi r17, 0b00000000  ;initializing Y
ldi r18, 0b00000001   ;initializing Z
ldi r19, 0b00000001

;X' 

mov r0, r16                  
eor r0, r19             

;Y'
mov r1,r17
eor r1, r19

;Z'
mov r2, r18
eor r2, r19

and 	r16, r1      ; XY' value

and  r0, r17      ; X'Y value

and  r0, r18      ; X'YZ value

or r16, r0

lsl r16
lsl r16

out PORTD, r16

start:
rjmp start
