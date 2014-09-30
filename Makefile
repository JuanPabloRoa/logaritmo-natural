todo: log0.o log1.o log2.o log3.o log4.o log5.o log6.o log7.o log8.o
	
log0.o: logaritmo0.c
	gcc -pg -O0 -std=c99 logaritmo0.c -o log0
log1.o: logaritmo1.c
	gcc -pg -O0 -std=c99 logaritmo1.c -o log1
log2.o: logaritmo2.c
	gcc -pg -O0 -std=c99 logaritmo2.c -o log2
log3.o: logaritmo3.c
	gcc -pg -O0 -std=c99 logaritmo3.c -o log3
log4.o: logaritmo4.c
	gcc -pg -O0 -std=c99 logaritmo4.c -o log4
log5.o: logaritmo5.c
	gcc -pg -O0 -std=c99 logaritmo5.c -o log5
log6.o: logaritmo6.c
	gcc -pg -O0 -std=c99 logaritmo6.c -o log6
log7.o: logaritmo7.c
	gcc -pg -O0 -std=c99 logaritmo7.c -o log7
log8.o: logaritmo8.c
	gcc -pg -O0 -std=c99 logaritmo8.c -o log8
