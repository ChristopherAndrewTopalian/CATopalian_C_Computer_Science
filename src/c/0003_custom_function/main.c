#include <stdio.h>

// accepts the max size as a second parameter
void askName(char* name, unsigned int max_size)
{
    printf("Enter First Name: ");

    // Use the passed max_size variable instead of sizeof()
    scanf_s("%s", name, max_size);
}

int main()
{
    // max name is 100 chars + null terminator
    char userName[101];

    // Pass both the array AND its true size into the function
    askName(userName, (unsigned int)sizeof(userName));

    printf("Hi %s\n", userName);

    printf("\nPress Enter to Exit\n");
    // remove newline char left in input buffer by scanf_s
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

