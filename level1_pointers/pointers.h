#ifndef POINTERS_H
#define POINTERS_H

/**
 * sets value of pointer to max value of to ints, and takes null pointer exception
 */
void set_max(int a, int b, int *pm);

/**
 * first identifying a 0 value, if not then creates array of consecutive numbers from 1 - x included. 
 */
int* range(int x);

/**
 * creates and returns a string in all uppercase of giver string
 */
char *capitalize(char *s, int slen);

#endif
