// C program to implement the writer side of FIFO
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
// Creating the named file (FIFO)
Mkfifo(myfifo, 0666);
Char arr2[80];
While (1) {
// Open FIFO for write only
Fd = open(myfifo, O_WRONLY);
// Take an input string from user
Printf(“Enter a message: “);
Fgets(arr2, sizeof(arr2), stdin);
// Write the input string on FIFO
Write(fd, arr2, strlen(arr2) + 1);
Close(fd);
}
Return 0;
}
