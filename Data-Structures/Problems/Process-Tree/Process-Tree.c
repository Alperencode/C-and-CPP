// Didn't finished yet
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

void createTree(int height){

    if(height>0){
        pid_t pid = fork();
        if(pid>0){
            pid_t childPid = fork();

            if(childPid != 0){
                // Parent process
            }else{
                // Right child
                createTree(--height);
            }
        }else{
            // Left child
            createTree(--height);
        }
    }else{
        // Leaf node
        srand(getpid());
        int random = (rand() % 101);

        char fileName[20];
        sprintf(fileName, "%d.txt", getpid());
        FILE *fp = fopen(fileName, "w");

        fprintf(fp, "%d\n", random);
        fclose(fp);
    }

}

int main(){ 
   
    createTree(3);

    return 0;
}
