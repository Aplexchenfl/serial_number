#include "../include/hito_serial_number.h"

int hito_read_serial_number(char *dest)
{
    int eeprom_fd, retval;
    eeprom_fd = open(EEPROM_DEV, O_RDONLY);
    if (eeprom_fd < 0)
    {
        perror("open device");
        close(eeprom_fd);
        return -1;
    }
    retval = read(eeprom_fd, dest, 12);
    if (retval < 0)
    {
        perror("read");
        close(eeprom_fd);
        return -1;
    }
    close(eeprom_fd);
    return 0;
}

int hito_write_serial_number(char *dest)
{
    int eeprom_fd, retval;
    eeprom_fd = open(EEPROM_DEV, O_RDONLY);
    if (eeprom_fd < 0)
    {
        perror("open device");
        close(eeprom_fd);
        return -1;
    }
    retval = write(eeprom_fd, dest, 12);
    if (retval < 0)
    {
        perror("read");
        close(eeprom_fd);
        return -1;
    }
    close(eeprom_fd);
    return 0;
}

