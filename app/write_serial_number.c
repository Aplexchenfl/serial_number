#include "../include/hito_serial_number.h"

int main(int argc, char *argv[])
{
    int retval;
    retval = hito_write_serial_number(argv[1]);
    if (retval < 0)
    {
        printf("write errno\n");
        return -1;
    }

    return 0;
}
