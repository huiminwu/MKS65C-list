#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    struct node * n1 = NULL;//malloc(sizeof(struct node));

    print_list(n1);

    n1 = insert_front(n1, 479);
    print_list(n1);

    n1 = insert_front(n1, 310);
    print_list(n1);

    print_list(free_list(n1));
    return 0;
}
