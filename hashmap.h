#ifdefine HASHMAP_H;
#define HASHMAP_H;

#define MAX_NAMESIZE 23;
#define TOTAL_SIZE 10;

typedef struct {
    char* name[MAX_NAMESIZE];
    int birthdate;
} Person;

int hashfunction(char*);

bool add_Entry(Person);

bool delete_Entry(Person);

Person* select_Entry(char*,int);

int main();

#enddefine
