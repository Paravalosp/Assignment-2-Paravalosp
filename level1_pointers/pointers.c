#include "pointers.h" // Include user header file
#include <ctype.h> // For toupper
#include <stdlib.h> // For NULL

void set_max(int a, int b, int *pm) {
    if(pm == NULL){
        return;
    }
    if (a < b)
        *pm = b;
    else {
        *pm = a;
    }
}
int* range(int x) {
    // TODO
    if (x == 0){
        return NULL;
    }
    else{
        int *array = malloc(sizeof(int) * x);
        for(int i = 0; i < x; i ++){
            array[i] = i + 1;
        }
        return array;
    }
}
char* capitalize(char* s, int slen) {
    // TODO: Use toupper to convert a char to an uppercase char
    // NOTE: See README.md for more troubleshooting information
    if (slen == 0){
        return NULL;
    }
    else{
        char *array = malloc(sizeof(char) * slen + 1);
        
        for(int i = 0; i < slen; i ++){
            array[i] = toupper(s[i]);
        }
        array[slen] = '\0';
        return array;
    }
}
