#include <stdio.h>
#include <string.h>
#define hellosentence "hello csc3050!\n"

void task1() {
    char input[100];
    printf("\npassword: ");
    fflush(stdout);
    fgets(input, 99, stdin);
    if (strcmp(hellosentence, input) == 0) {
        printf("PASS!");
    } else {
        printf("BOMB!");
    }
}
