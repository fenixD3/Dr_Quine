#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

int		main()
{
	int i = 5;

	if (i > 0)
	{
		if (strchr(__FILENAME__, '_'))
			--i;
		char file_name[100] = {0};
		sprintf(file_name, "Sully_%d.c", i);
		char execute_file_name[100] = {0};
		sprintf(execute_file_name, "Sully_%d", i);
		char execute_cmd[400] = {0};
		sprintf(execute_cmd, "gcc %s -Wall -Wextra -Werror -o %s; ./%s", file_name, execute_file_name, execute_file_name);
		char* new_source_code = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c%1$c#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)%1$c%1$cint%2$c%2$cmain()%1$c{%1$c%2$cint i = %5$d;%1$c%1$c%2$cif (i > 0)%1$c%2$c{%1$c%2$c%2$cif (strchr(__FILENAME__, '_'))%1$c%2$c%2$c%2$c--i;%1$c%2$c%2$cchar file_name[100] = {0};%1$c%2$c%2$csprintf(file_name, %3$cSully_%6$cd.c%3$c, i);%1$c%2$c%2$cchar execute_file_name[100] = {0};%1$c%2$c%2$csprintf(execute_file_name, %3$cSully_%6$cd%3$c, i);%1$c%2$c%2$cchar execute_cmd[400] = {0};%1$c%2$c%2$csprintf(execute_cmd, %3$cgcc %6$cs -Wall -Wextra -Werror -o %6$cs; ./%6$cs%3$c, file_name, execute_file_name, execute_file_name);%1$c%2$c%2$cchar* new_source_code = %3$c%4$s%3$c;%1$c%1$c%2$c%2$cint fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);%1$c%2$c%2$cif (fd)%1$c%2$c%2$c{%1$c%2$c%2$c%2$cdprintf(fd, new_source_code, 10, 9, 34, new_source_code, i, 37, i - 1);%1$c%2$c%2$c%2$cclose(fd);%1$c%2$c%2$c%2$csystem(execute_cmd);%1$c%2$c%2$c}%1$c%2$c}%1$c%2$creturn 0;%1$c}%1$c";

		int fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
		if (fd)
		{
			dprintf(fd, new_source_code, 10, 9, 34, new_source_code, i, 37, i - 1);
			close(fd);
			system(execute_cmd);
		}
	}
	return 0;
}
