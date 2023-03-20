// Didn't finished yet
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>

typedef struct p{
    int pid;
    pid_t pid1, pid2;
}process;

int main(){ 

    process *root;
    root = (process*)malloc(sizeof(process));

    for(int i=0; i<2; i++){

        root->pid = getpid();
        root->pid1 = fork();

        if(root->pid1 != 0)
            root->pid2 = fork();

    }

    wait(NULL);
    printf("root pid: %d pid1: %d pid2: %d\n", root->pid, root->pid1, root->pid2);
}

// using child's pid for create unique seed
//    srand(getpid());
//    int random = (rand() % 101);
//    printf("%d\n", random);
