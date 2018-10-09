#include <stdio.h>
#include "list.h"

struct node {
    int i;
    struct node * next;
};

int main() {
    struct node n1;
    struct node n2;
    struct node n3;
    struct node n4;

    n1.i = 6;
    *n1.next = n2;

    n2.i = 94;
    *n2.next = n3;
    
    n3.i = 310;
    *n3.next = n4;
    
    n4.i = 479;
    print_list(*n1);
    

    return 0;
}
