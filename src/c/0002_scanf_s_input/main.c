// Input from user

#include <stdio.h>

int main()
{
    // max name is 100 chars + null terminator
    char name[101];

    printf("Enter First Name: ");

    // read input from user and prevent buffer overflow
    scanf_s("%s", name, (unsigned int)sizeof(name));

    printf("Hi %s\n", name);

    printf("\nPress Enter to Exit\n");

    // remove newline char left in input buffer
    getchar();

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

