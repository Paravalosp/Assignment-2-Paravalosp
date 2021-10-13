#include "list.h" // Include user header file
#include <stdio.h> // For printf
#include <stdlib.h> // For NULL

struct ll_node *ll_head(struct ll_node *node) {
    // TODO
    if (node == NULL){
        return NULL;
    }
    return node;
}

struct ll_node *ll_tail(struct ll_node *node) {
    //TODO
    if(node == NULL){
        return NULL;
    }
    while(node->next != NULL){
        node = node->next;
    }
    return node;
    
}
int ll_size(struct ll_node *head) {
    // TODO
    if(head == NULL){
        return NULL;
    }
    int size = 1;
    while(head->next != NULL){
        size++;
        head = head->next;
    }
    return size;
}

struct ll_node *ll_find(struct ll_node *node, int value) {
    // TODO
    

    while (node != NULL){
        if (node->data == value)
            return node;
        else{
            node = node->next;
        }
    }
    return NULL;
}

