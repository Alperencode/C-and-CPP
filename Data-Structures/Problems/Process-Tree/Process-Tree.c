#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

void createTree(int height){

    if(height>0){
        // Creating first child
        pid_t pid = fork();

        if(pid>0){
            // Creating second child
            pid_t childPid = fork();

            if(childPid != 0){
                // Parent process

                // Waiting for 2 child process to complete their jobs
                wait(NULL);
                wait(NULL);

                // String for file names
                char processFile1[20], processFile2[20], parentFile[20];

                // Adding '.txt' to file names 
                sprintf(processFile1, "%d.txt", pid);
                sprintf(processFile2, "%d.txt", childPid);

                // Opening child process files
                FILE *file1 = fopen(processFile1, "r");
                FILE *file2 = fopen(processFile2, "r");

                // Adding two random numbers from child processes
                int num1, num2;
                fscanf(file1, "%d", &num1);
                fscanf(file2, "%d", &num2);
                int sum = num1 + num2;

                // Writing sum to parent process file
                sprintf(parentFile, "%d.txt", getpid());
                FILE *parent = fopen(parentFile, "w");
                fprintf(parent, "%d", sum);

                // Closing files
                fclose(parent);
                fclose(file1);
                fclose(file2);
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

        // Generating random number using pid as seed
        srand(getpid());
        int random = (rand() % 101);

        // Creating file with leaf node pid
        char leafNode[20];
        sprintf(leafNode, "%d.txt", getpid());
        FILE *leafFile = fopen(leafNode, "w");

        // Writing random number to leaf node file
        fprintf(leafFile, "%d", random);
        fclose(leafFile);
    }

}

int main(){ 
   
    createTree(3);
    return 0;
}
