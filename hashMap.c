#include <stdio.h>
#include <stdlib.h>

#define MAX_NAMESIZE 64;
#define TOTAL_NODES 10;

typedef struct {
    char* name[MAX_NAMESIZE];
    int birthdate;
} Person;

int hashfunction(char* name) {
}
