//
// Created by Joao Filipe Mantova on 7/19/20.
//

#include <stdio.h>

struct Cart {
    int orderNumber;
    char emailAddress[30];
    char password[30];
};

void pointertostruct() {
    struct Cart myCart, *pointer1, *pointer2;
    printf("%lu bytes\n", sizeof(myCart.emailAddress));
    pointer1 = &myCart;

    printf("Enter order number: ");
    scanf("%d", &myCart.orderNumber);
    printf("Enter email address: ");
    scanf("%s", myCart.emailAddress);
    printf("%lu bytes\n", sizeof(myCart.emailAddress));
    printf("Enter password: ");
    scanf("%s", myCart.password);

    printf("\nDetails: \n");
    printf("Order number: %d\n", pointer1->orderNumber);
    printf("Email: %s\n", pointer1->emailAddress);
    printf("Password: %s\n", pointer1->password);
}