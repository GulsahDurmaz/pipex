//#include <string.h>
#include <stdio.h> //printf() fflush() perror()
#include <sys/wait.h> // wait()
#include <unistd.h> //fork()
//#include <stdlib.h>

int main()
{
    pid_t id = fork();
    int n;
    int i;
    int status;
    
    if (id < 0)
    {
        perror("Fork failed");
        return 1;
    }
    if (id == 0)
        n = 1;
    else
        n = 6;
    if (id != 0)
    {
        // printf("status: %d\n", status);
        wait(&status);
    }
    for (i = n; i < n + 5; i++)
    {
        printf("%d ", i);
        fflush(stdout);
    }
    if (id != 0)
        printf("\n");
    return 0;
}