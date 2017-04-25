#ifndef  __HITO_SERIAL_NUMBER_H__
#define  __HITO_SERIAL_NUMBER_H__

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>


#define EEPROM_DEV "/dev/eeprom"

int hito_read_serial_number(char *dest);
int hito_write_serial_number(char *dest);


#endif      /* __HITO_SERIAL_NUMBER_H__ */
