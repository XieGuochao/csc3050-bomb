#include <stdio.h>
#include <string.h>
#define hellosentence "hello csc3050!\n"
#define reversesentence "wzerwxllo"

int task1() {
    char input[100];
    printf("password: ");
    fflush(stdout);
    fgets(input, 99, stdin);
    if (strcmp(hellosentence, input) == 0) {
        return 0;
    } else {
        return 1;
    }
}

int task2() {
    // This test is used to test for loop.
    int data[5];
    int i;
    scanf("%d %d %d %d %d\n", &data[0], &data[1], &data[2], &data[3], &data[4]);

    for (i = 0; i < 4; i++) {
        if (data[i] != (data[i+1]>>2)) {
            return 1;
        }
    }
    return 0;
}

int task3() {
    // This test is to test string operation.
    char buffer[10];
    fgets(buffer, 10, stdin);
    for (int i=0; i<9; i++) {
        char c = 'a' + ('a' - buffer[i]) + 25;
        if (c != reversesentence[i]) {
            return 1;
        }
    }
    return 0;
}