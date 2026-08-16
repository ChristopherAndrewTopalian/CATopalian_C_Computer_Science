// Our main.c uses CONSOLELOG.h header file

#include "CONSOLELOG.h"
#include <stdio.h> // printf

int main()
{
    consoleLog("Hi Everyone");

    printf("Press Enter to Exit\n");

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

