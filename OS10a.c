C program to implement the reader side of FIFO
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
Int main() {
Int fd;
// FIFO file path
Char *myfifo = “/tmp/myfifo”;
Char arr1[80];
While (1) {
// Open FIFO for read only
Fd = open(myfifo, O_RDONLY);
// Read from FIFO
Read(fd, arr1, sizeof(arr1));
// Print the read message
Printf(“User2: %s”, arr1);
Close(fd);
}
