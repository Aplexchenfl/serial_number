

CC = arm-none-linux-gnueabi-gcc
AR = arm-none-linux-gnueabi-ar


all:
	$(CC)  hito_serial_number.c   -fPIC -shared -o libserial_number.so
	$(CC)  -c hito_serial_number.c -o libserial_number.o -I .
	$(AR)  rcv libserial_number.a libserial_number.o

clean:
	rm *.so *.o *.a

