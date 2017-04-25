#include "../include/hito_serial_number.h"

int main(void)
{
    int retval;
    char dest[12];
    retval = hito_read_serial_number(dest);
    if (retval == -1)
    {
        printf("read error\n");
        return -1;
    }
    else
    {
        printf("serial number: %s\n", dest);
    }
    return 0;
}
