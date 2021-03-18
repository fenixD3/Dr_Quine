#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

int     main()
{
    int i = 5;

    if (i > 0)
    {
        int fd = open();
    }
    return 0;
}
