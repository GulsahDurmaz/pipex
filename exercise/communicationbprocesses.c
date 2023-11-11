#include <stdio.h> //printf() scanf()
#include <unistd.h> //fork() pipe() write() close() read()
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int pipe1[2]; // child to parent
    int pipe2[2]; // parent to child we don't even read, we just send the data to the child
    pid_t   pid;
    int x;
    int y;

    if (pipe(pipe1) == -1)
        return 1;
    if (pipe(pipe2) == -1)
        return 1;
    pid = fork();
    if (pid == -1)
        return 2;
    if (pid == 0)
    {
        // Child process
        close(pipe1[0]);
        close(pipe1[1]);
        if (read(pipe2[0], &x, sizeof(x)) == -1)
            return 3;
        printf("Received %d\n", x);
        x *= 4;
        if (write(pipe1[1], &x, sizeof(x)) == -1)
            return 4;
        printf("Wrote %d\n", x);
        close(pipe1[1]);
        close(pipe2[0]);
    }
    else
    {
        // Parent process
        close(pipe1[1]);
        close(pipe2[0]);
        srand(time(NULL));
        y = rand() % 10;
        if (write(pipe2[1], &y, sizeof(y)) == -1)
            return 5;
        printf("Wrote %d\n", y);
        if (read(pipe1[0], &y, sizeof(y)) == -1)
            return 6;
        printf("Result is %d\n", y);
        close(pipe1[0]);
        close(pipe2[1]);
        wait(NULL);
    }
    close(pipe1[0]);
    close(pipe1[1]);
    return 0;
}