#include<stdio.h> 
#include <unistd.h> 
int main(){ 
pid_t cpid=vfork();  if(cpid<0) { 
perror("vfork failed");
} else if(cpid==0){ printf("Child process"); 
printf("Child_pid = %d",getpid());  
_exit(0); 
} else{ 
printf("Parent process"); 
printf("Parent pid-%d", getpid()); 
} 
}
