#include<unistd.h>
#include<stdlib.h> 
#include<fcntl.h> 
#include<stdio.h> 
#include<string.h> 
int main(int argc, char *argv[]) 
{ 
    char filename [20], buffer[100]; 
    write(1, "Enter the File Name : ", 21); 
    //read(0, filename, 20); 
    printf(filename);
    scanf("%s", filename);
    //filename[strcspn(filename, "\n")] = '\0'; 
    int fd=open(filename, O_WRONLY, 742); 
    //printf("%d", fd); 
    if (fd==-1)
    { 
        write(2, "File Not Found", 14); 
        
    } 
    else
    { 
        write(1, "Enter the content you would like to write : ", 43); 
        //read(0, buffer, 100); 
        scanf("%s", buffer); 
        write(fd, buffer, strlen(buffer)); 
        close(fd);
    }
}
