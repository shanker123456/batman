#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[]){ 
char filename [20], buffer[100]; 
write(1, "Enter the file name:",21); 
scanf("%s", filename);
int fd=open(filename,O_WRONLY,742); if(fd==-1){
write(2, "File not found",14);
}
else{
write(1, "Enter the content you would like to write: ",43);
scanf("%s", buffer);
write(fd, buffer, strlen(buffer));
close(fd);
}
}

