#include "list.h" // Include user header file
#include <stdio.h> // For printf
#include <stdlib.h> // For NULL

struct ll_node *ll_create(int data) {
    // TODO
    struct ll_node *node = malloc(sizeof(struct ll_node));
    node->data = data;
    node->next = NULL;
    return node;
    
}
void ll_destroy(struct ll_node *head) {
    // TODO
    struct ll_node *uwu;
    if (head == NULL){
        return;
    }
    
    while(head != NULL){
        uwu = head;
        head = head->next;
        free(uwu);
        
    }   
    
   
    
    
   
}
struct ll_node *ll_append(struct ll_node *list, int data) {
    // TODO
    struct ll_node *currNode = list;
    while (currNode->next)
    {
        currNode = currNode->next;
    }
    struct ll_node *newNode = (struct ll_node *)malloc(sizeof(struct ll_node));
    newNode->data = data;
    newNode->next = NULL;    
    currNode->next = newNode; 

    return list; 
}
struct ll_node *ll_delete(struct ll_node *head, int value) {
    // TODO

    struct ll_node *temp = head, *prev;

    while (temp != NULL && temp->data == value)
    {
        head = temp->next; 
        free(temp);        
        temp = head;       
    }

    while (temp != NULL)
    {
        while (temp != NULL && temp->data != value)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return head;

        prev->next = temp->next;
        free(temp); 
        temp = prev->next;
    }

    return head; 

}
