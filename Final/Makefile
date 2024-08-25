all: temp

temp: temp.o temp_api.o
	gcc -o temp temp.o temp_api.o

temp.o: temp.c temp_api.h
	gcc -c -o temp.o temp.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o
	del temp.exe
