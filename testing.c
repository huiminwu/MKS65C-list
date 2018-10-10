#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    struct node * n1 = malloc(sizeof(struct node));
    struct node * n2 = malloc(sizeof(struct node));
    struct node * n3 = malloc(sizeof(struct node));

    n1->i = 6;
    n1->next = n2;
    n2->i = 94;
    n2->next = n3;
    n3->i = 310;
    print_list(n1);

    print_list(insert_front(n1, 479));

    print_list(free_list(n1));
    return 0;
}
