#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    printf("execvp----\n");
    pid_t cpid = fork();
    char *args[] = {"./factorial", NULL};
    char *args1[] = {"./prime", NULL};
    if (cpid == -1)
    {
        printf("FOrk failed");
    }
    else if (cpid == 0)
    {
        printf("Process ID of child : %d\n", getpid());
        execvp("./factorial", args);
    }
    else
    {
        printf("Process ID of parent : %d\n", getpid());

        wait(1);
        execvp("./prime", args1);
    }
    printf("ENd of fork system call");
}
