// main.c uses CONSOLELOG.h and PROMPT.h

#include "PROMPT.h"
#include "CONSOLELOG.h"
#include <stdio.h> // printf, scanf

int main()
{
    // max input is 100 chars + null terminator
    char input[101];

    consoleLog("Enter First Name");
    prompt(input);

    printf("Hi %s\n", input);

    consoleLog("Press Enter to Exit\n");

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

