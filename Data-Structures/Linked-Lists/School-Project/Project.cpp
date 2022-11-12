// 210205058 Alperen AĞA
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

// creating node struct
struct n{
    int no,grade;
    struct n* next;
};
typedef struct n node;

int main(){

    // initializing local no and grade
    int localNo,localGrade;
    
    // defining pointers (type node)
    node *head,*newNode,*temp;

    // allocating memory for head node
    head = (node*)malloc(sizeof(node));  // type casting to node (default is void)

    // opening txt file in input mode
    ifstream myFile("grades.txt"); // using ifstream (input file stream)
 
    int flag = 0; // using flag to create head node
    while(!myFile.eof()){
        // reading values from myFile and assigning them to local variables
        myFile >> localNo >> localGrade;

        if(flag!=0){
            // if head is created
            newNode = (node*)malloc(sizeof(node));  // allocating memory for the newNode
            
            // assigning local values to newNode
            newNode -> no = localNo;
            newNode -> grade = localGrade;
            newNode -> next = NULL;
            
            if(newNode->no < head->no){
                // if localNo is smaller than head's no
                newNode->next = head;  // newNode will point to the head's element
                head = newNode;  // and head will point to new element
            }else{
                // else we will traverse the list and find the right place
                temp = head;  // so we are starting from head
                // checking if temp's next is exist and temp's next's no value is still smaller
                while((temp->next != NULL) && (newNode->no) > (temp->next->no)){
                    // then iterate the temp
                    temp = temp->next;
                }
                // after while ends that means either we found the right place for newNode
                // or we are at the end of the list
                newNode -> next = temp->next;  // so newNode points to temp's next
                temp->next = newNode; // and temp's next points to newNode
            }
        }else{
            // if flag is 0
            // that means list is empty
            // so we are assigning the values to head node
            head -> no = localNo;
            head -> grade = localGrade;
            head -> next = NULL;
            flag = 1;
        }
    }

    // At the and we traversing the sorted linked list
    temp = head;  // starting from head
    while(temp != NULL){
        printf("%d %d\n", temp->no, temp->grade);  // printing out
        temp = temp->next;  // iterating temp
    }

    myFile.close();  // closing file
}
