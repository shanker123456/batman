#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[]){ 
char file [20],sample [20]; 
write(1, "Filename: ",11); 
scanf("%s", file);
int fd=open(file, O_RDWR, 777); lseek(fd,1,SEEK_CUR);
write(fd, "HelloPeople: ",3); 
close(fd);
}

