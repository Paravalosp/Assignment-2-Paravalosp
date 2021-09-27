#ifndef LIST_H
#define LIST_H

/**
 * 
 */
struct ll_node {
    int data;
    struct ll_node *next;
};

/**
 * @param *node - return head of given list if not NULL
 */
struct ll_node *ll_head(struct ll_node *node);
/**
 * @param *node - return tail of given list if not NULL
 */
struct ll_node *ll_tail(struct ll_node *node);
/**
 * @param *node - return size of given list if not NULL
 */
int             ll_size(struct ll_node *node);
/**
 * @param *node - list of nodes
 * @param value - the value of the node in which must be returned
 */
struct ll_node *ll_find(struct ll_node *node, int value);

#endif
