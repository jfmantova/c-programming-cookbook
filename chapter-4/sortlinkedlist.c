//
// Created by Joao Filipe Mantova on 7/17/20.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void sortlinkedlist() {

    struct node
            *pointer1,
            *pointer2,
            *newNode,
            *startList = NULL;

    int length;

    printf("How many elements in the linked list?\n");
    scanf("%d", &length);

    printf("Enter elements:\n");
    for (int i = 0; i < length; ++i) {
        newNode = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (startList == NULL) {
            startList = newNode;
            pointer1 = startList;
        } else {
            pointer1->next = newNode;
            pointer1 = newNode;
        }
    }

    for (int i = length - 2; i >= 0; i--) {
        pointer1 = startList;
        pointer2 = pointer1->next;
        for (int j = 0; j <= i; ++j) {
            if (pointer1->data > pointer2->data) {
                int temp = pointer1->data;
                pointer1->data = pointer2->data;
                pointer2->data = temp;
            }
        }
    }

    printf("Sorted order is:\n");
    struct node *temp = startList;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}