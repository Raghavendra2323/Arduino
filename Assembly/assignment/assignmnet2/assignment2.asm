
;F = wx'+y'z+wy

.include "/home/raghavendra/m328Pdef.inc"

ldi r16,  0b00111100
out DDRD,r16      ;declaring pins as output

ldi r16, 0b00000001   ;initializing W
ldi r17, 0b00000000  ;initializing X
ldi r18, 0b00000000   ;initializing Y
ldi r19, 0b00000000  ;initializing  Z
ldi r20, 0b00000001   


;W'
mov r0, r16                  
eor r0, r20

;X'
mov r1, r17
eor r1, r20

;Y'
mov r2,r18
eor r2, r20

;Z'
mov r3,r19
eor r3,r20

and  r0,r2
and r0,r3               ;W'Y'Z'

and r16,r2
and r16,r3               ; XY'Z'

and r18,r0              ;W'Y

or r16,r0
or r16, r18

lsl r16
lsl r16

out PORTD,r16

Start:
rjmp Start
