#include <stdio.h> //printf() scanf()
#include <unistd.h> //fork() pipe() write() close() read()

int main(int argc, char **argv)
{
    int x;
    int y;
    int fd[2];
    pid_t   id;
    // fd[0] - read
    // fd[1] - write
    if (pipe(fd) == -1)
    {
        printf("An error occured with opening the pipe\n");
        return 1;
    }
    id = fork();
    if (id == -1)
        return 2;
    if (id == 0)
    {
        close(fd[0]);
        printf("Input a number: ");
        scanf("%d", &x);
        if (write(fd[1], &x, sizeof(int)) == -1)
            return 3;
        close(fd[1]);
    }
    else
    {
        close(fd[1]);
        if (read(fd[0], &y, sizeof(int)) == -1)
            return 4;
        close(fd[0]);
        printf("Got from child process %d\n", y);
    }
    return 0;
}