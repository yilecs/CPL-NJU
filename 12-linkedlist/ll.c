#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct LL {
    struct Node *head;
    struct Node *tail;
} LL;

void DisplayLL(LL *list);
Node *initNode(int data);
void AppendLL(LL *list, Node *node);
void FreeLL(LL *list);

int main() {
    LL list;
    list.head = NULL;
    list.tail = NULL;

    AppendLL(&list, initNode(100));
    AppendLL(&list, initNode(200));
    AppendLL(&list, initNode(300));
    AppendLL(&list, initNode(400));
    AppendLL(&list, initNode(500));

    DisplayLL(&list);

    FreeLL(&list);

    printf("%p\n", list.head);
    printf("%p\n", list.tail);
}

void DisplayLL(LL *list) {
    Node *p = list->head;
    while (p!=NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

Node *initNode(int data) {
    Node *p = (Node *)malloc(sizeof(*p));
    p->data = data;
    p->next = NULL;

    return p;
}

void AppendLL(LL *list, Node *node) {
    if (list->head == NULL && list->tail == NULL) {
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        list->tail = node;
    }
}

void FreeLL(LL *list) {
    Node *p = list->head;

    while (p!=NULL){
        list->head = p->next;
        free(p);
        p = list->head;
    }

    list->tail = NULL;
}
