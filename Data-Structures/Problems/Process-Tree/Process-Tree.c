// Didn't finished yet
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>

void createTree(int height){

    pid_t pid = fork();

    if(pid != 0){
        pid_t childPid = fork();

        if(childPid != 0){
            // Parent process
        }else{
            // Right child
        }

    }else{
        // Left child
    }

}

int main(){ 
   
    createTree(4);

    printf("Hello World\n");
    return 0;
}

// using child's pid for create unique seed
//    srand(getpid());
//    int random = (rand() % 101);
//    printf("%d\n", random);
