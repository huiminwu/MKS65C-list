#include <stdio.h>
#include "testing.c"

void print_list(struct node * n) {
    while (n->next != 0) {
        printf("Next one is not null!");
        printf("%i -> ", n->i);
    }
    print("NULL \n");
}
        
