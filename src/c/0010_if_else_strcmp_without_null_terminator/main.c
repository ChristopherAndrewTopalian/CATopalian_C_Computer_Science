// if else - strcmp, without null terminating the string

#include <stdio.h>  // printf, scanf_s
#include <string.h> // strcmp

int main()
{
    char name[101]; // buffer to store the name

    printf("Enter your name: ");

    // read input from user and prevent buffer overflow
    scanf_s("%s", name, (unsigned int)sizeof(name));

    // remove newline char left in input buffer
    getchar();

    if (strcmp(name, "Chris") == 0)
    {
        printf("Hi Chris.\nIt is good that you are visiting Earth.\n");
    }
    else
    {
        printf("Howdy %s. Tell Chris to Sign in later.\n", name);
    }

    printf("\nPress Enter to Exit");

    // wait for user to press Enter
    getchar();

    return 0;
}

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

