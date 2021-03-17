/*
	Grace write itself in file
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define ITSELF "/*%1$c%2$cGrace write itself in file%1$c*/%1$c%1$c#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c%1$c#define ITSELF %3$c%4$s%3$c%1$c#define FILE_PATH %3$c%5$s%3$c%1$c#define GRACE(file) int main() { int fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH); if (fd) { dprintf(fd, ITSELF, 10, 9, 34, ITSELF, FILE_PATH); close(fd); } return 0; }%1$c%1$cGRACE(FILE_PATH)%1$c"
#define FILE_PATH "./Grace_kid.c"
#define GRACE(file) int main() { int fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH); if (fd) { dprintf(fd, ITSELF, 10, 9, 34, ITSELF, FILE_PATH); close(fd); } return 0; }

GRACE(FILE_PATH)
