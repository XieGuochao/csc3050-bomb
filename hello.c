#include <stdio.h>
#include <string.h>

#define hellosentence "hello csc3050!\n"

void hello() {
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

int main(int argc, char const *argv[])
{
    hello();
    return 0;
}
