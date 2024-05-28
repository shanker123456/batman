#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
int i;
void *shared_memory;
char buff[100];
int shmid;
shmid=shmget((key_t)2345, 1024, 0666);
printf("The process id is : ",getpid());
printf("The shared memory created with %d\n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("The created id is attached to shared memory %p\n",shared_memory);
printf("Data read from shared memory is : %s\n",(char *)shared_memory);
}
