#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    int wstatus;
    pid_t  cpid, w;
    cpid = fork();
    if (cpid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (cpid == 0) {            
        printf("Child PID is %jd\n", (intmax_t) getpid());
        if (argc == 1)
            pause();                    
        _exit(atoi(argv[1]));
           } 
    else{
siginfo_t info;
int options=WEXITED | WSTOPPED | WCONTINUED; 
if(wattid (P_PID, cpid, &info, options)==-1){ 
perror("Wattid");
exit(EXIT_FAILURE);
}
if(info.si_code==CLD_EXITED) {
printf("exited, status=%d\n", info.st_status);
}
else if(info.st_code==CLD_KILLED){
printf("killed by signal %d\n",info.st_status);
}
else if(info.st_code==CLD_STOPPED){
printf("stopped by signal-%d\n",info.st_status);
}
else if(info.st_code==CLD_CONTINUED) { 
printf "continued";
}
exit(EXIT_SUCCESS);
}
}  

