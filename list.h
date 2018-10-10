struct node {int i; struct node * next;};
void print_list(struct node*n);
struct node * insert_front(struct node *n, int data);
struct node * free_list(struct node *n);
