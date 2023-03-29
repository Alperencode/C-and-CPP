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
                wait(NULL);
                wait(NULL);

                char processFile1[20], processFile2[20], parentFile[20];
                sprintf(processFile1, "%d.txt", pid);
                sprintf(processFile2, "%d.txt", childPid);
                sprintf(parentFile, "%d.txt", getpid());

                FILE *file1 = fopen(processFile1, "r");
                FILE *file2 = fopen(processFile2, "r");

                int num1, num2;
                fscanf(file1, "%d", &num1);
                fscanf(file2, "%d", &num2);
                int sum = num1 + num2;

                FILE *fp = fopen(parentFile, "w");
                fprintf(fp, "Sum of (%d and %d): %d\n", num1, num2, sum);

                fclose(fp);
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
        srand(getpid());
        int random = (rand() % 101);

        char leafNode[20];
        sprintf(leafNode, "%d.txt", getpid());
        FILE *leafFile = fopen(leafNode, "w");

        fprintf(leafFile, "%d\n", random);
        fclose(leafFile);
    }

}

int main(){ 
   
    createTree(3);

    return 0;
}
