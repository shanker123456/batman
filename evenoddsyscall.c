#include<stdlib.h> 
#include<unistd.h> 
#include<fcntl.h> 
#include<string.h> 
int main(int argc, char *argv[]) 
{ 
    int fd; 
    char sample [10]; 
    write(1, "Enter a number : ", 16); 
    read(0, sample, 2); 
    if(atoi (sample)%2==0) 
    { 
        write(1, "Even Number", 11); 
        
    } 
    else { 
        write(1, "Odd Number", 10);
    }
}
