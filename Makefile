.SILENT:
all: clean main exe

main: obj/mainSupport.o obj/cola.o
	gcc src/main.c obj/mainSupport.o obj/cola.o -o main -lm

obj/mainSupport.o: 
	gcc -c -Iinclude src/mainSupport.c -o obj/mainSupport.o

obj/cola.o:
	gcc -c -Iinclude src/cola.c -o obj/cola.o

.PHONY: clean

exe:
	valgrind ./main -a 4 -d 5 -t 120 

clean:
	rm -f obj/*.o
	rm -f main*
