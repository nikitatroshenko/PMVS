all: HelloGoodbye

clean:
	rm -rf HelloGoodbye *.o *.a

libs:
	make libhello.a
	make libgoodbye.a

libhello.a: get_hello_message.o
	ar rcs libhello.a get_hello_message.o

get_hello_message.o: get_hello_message.c
	gcc -c -o get_hello_message.o get_hello_message.c

libgoodbye.a: get_goodbye_message.o
	ar rcs libgoodbye.a get_goodbye_message.o

get_goodbye_message.o:
	gcc -c -o get_goodbye_message.o get_goodbye_message.c

HelloGoodbye: libhello.a libgoodbye.a helloworld.c
	gcc helloworld.c -L. -lhello -lgoodbye -o HelloGoodbye

