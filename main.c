#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

            //usage: main [writers] [readers]
int main(int argc, char *argv[]){
 
 int writers = atoi(argv[1]);
 int readers = atoi(argv[2]);

 printf("Writers %i, readers %i", writers, readers);
 return 0;
}
