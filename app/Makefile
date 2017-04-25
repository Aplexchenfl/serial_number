
all:
	make -C  ../src/
	arm-none-linux-gnueabi-gcc  read_serial_number.c -o read_serial_number  -L ../src/ -lserial_number
	arm-none-linux-gnueabi-gcc  write_serial_number.c -o write_serial_number  -L ../src/ -lserial_number

clean:
	rm read_serial_number  write_serial_number
	make -C ../src/  clean
