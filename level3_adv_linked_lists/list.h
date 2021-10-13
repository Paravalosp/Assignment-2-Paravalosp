#ifndef LIST_H
#define LIST_H

// Same as level 2
struct ll_node {
    int data;
    struct ll_node *next;
};
struct ll_node *ll_head(struct ll_node *node);
struct ll_node *ll_tail(struct ll_node *node);
int             ll_size(struct ll_node *node);
struct ll_node *ll_find(struct ll_node *node, int value);


/**
 * @param data - the value to use inside user-created ll_node
 * Creates new ll_node with given data
 */
struct ll_node *ll_create(int data);
/**
 * @param *list - list new node must be appeneded to 
 * @param data - data needed inside of *list
 * appends new node to *list using data
 * 
 */
struct ll_node *ll_append(struct ll_node *list, int data);
/**
 * @param *node - the list to be destroyed
 * destroy all nodes in list
 * 
 */
void            ll_destroy(struct ll_node *node);
/**
 * @param *head - given list
 * @param value - data for node that should be deleted
 * delete a single node based of the key value
 */
struct ll_node *ll_delete(struct ll_node *head, int value);

#endif
