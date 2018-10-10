#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * n) {
    struct node * iter = n;
    while (iter) {
        printf("%i -> ", iter->i);
        iter = iter->next;
    }
    printf("NULL \n");
}

struct node * insert_front(struct node * n, int data){
    struct node * newNode = malloc(sizeof(struct node));
    newNode->i = data;
    newNode->next = n;
    return newNode;

}

struct node * free_list(struct node * n) {
    struct node * begin = n;
    struct node * needToFree = n;
    while (begin) {
        free(needToFree);
        begin = begin->next;
        needToFree = begin;
    }
    return begin;
}
