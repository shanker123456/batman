#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
int main(int argc, char *argv[]){ 
char filename [20], buffer[100]; 
write(1, "Enter the filename: ",21); 
scanf("%s", filename);
int fd=open(filename, O_RDONLY,742); if(fd==-1){
write(2,"file not found",14);
}
else{
read(fd, buffer, 100);
write(1,buffer, strlen(buffer));
close(fd);
}
}

