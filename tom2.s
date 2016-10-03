.name "tu te chute"
.comment "testeteste"

ive:
st r1, 7
ld %323, r1
ld	%252645135, r9
st r2, :ive
sti r2, %:ive, %1
sti r1, %:w, %1
sti r1, %:live1, %1
sti r1, %:loop, %1
sti r1, %:lp, %1
sti r1, %:wiwi, %1
sti r1, %:l1, %1
sti r1, %:l, %1
sti r1, %:lf, %1
sti r1, %:i, %1
sti r1, %:ii, %1
sti r1, %:iii, %1
sti r1, %:atc, %1
sti r1, %:prep, %1
ld %0, r2

l1:
live %1234
fork %:atc

st	r9, -9
st	r9, -10
lfw:
st	r9, -19
st	r9, -25
st	r9, -28
st	r9, -37
st	r9, -46
st	r9, -55
st	r9, -64
st	r9, -73
st	r9, -82
st	r9, -91
st	r9, -100
st	r9, -109
st	r9, -118
st	r9, -127
st	r9, -136
st	r9, -145
st	r9, -159
st	r9, -178
st	r9, -197
st	r9, -236
st	r9, -255
;st	r9, -274
;st	r9, -303
;st	r9, -332
;st	r9, -360
st	r9, -390
;st	r9, -429
st	r9, -458
st	r9, -500
;st	r9, -435
;st	r9, -444
;st	r9, -465
;st	r9, -467
;st	r9, -471
;st	r9, -489
;st	r9, -407

w:
	live	%1234
	zjmp %:lfw

atc:
	live %1234
	fork %:wiwi

loop:
	live %1234
	fork %:prep

lp:
	live %1234
	fork %:live1
l:
	live %1234
	fork %:lf
	zjmp %:loop

lf:
	live %1234
	fork %:loop
	zjmp %:lf

live1:
	live	 %1234
i:	
	live	 %1234
ii:	
	live	 %1234
iii:
	live	 %1234
	zjmp	 %:live1

wiwi:
	live 	%1234
	ldi		%0, %:live1, r4
	sti 	r1, %:ll, %1
	ldi		%0, %:to, r5
	zjmp 	%:write

prep:
	live	%1234
	ldi		%7, %:write, r2
	ldi		%0, %:live1, r4
	sti 	r1, %:ll, %1
	ldi		%0, %:to, r5
	st 		r5, 360
	zjmp	%352


write:
	ldi		%7, %:write, r2
	st		r2, 256
	st      r2, 256
	st      r2, 256
	st      r2, 256
	st      r2, 256
st      r2, 256
st      r2, 256
;st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
st      r2, 256
ll:
live	%1234
to:
st      r4, 256
st      r5, 256
