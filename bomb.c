#include <stdio.h>
#include <string.h>
#include "tasks.h"

int message(int code, char *msg)
{
    if (code == 1)
    {
        printf("BOMB!\n");
        return 1;
    }
    printf(msg);
    return 0;
}

int main(int argc, char const *argv[])
{
    int result;
    result = task1();
    if (message(result, "Good start!\n"))
    {
        return 0;
    }

    result = task2();
    if (message(result, "Move on!\n"))
    {
        return 0;
    }

    result = task3();
    if (message(result, "Good luck!\n"))
    {
        return 0;
    }

    printf("You have solved all puzzles!\n");
    return 0;
}
