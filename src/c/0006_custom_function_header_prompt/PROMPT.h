// PROMPT.h header file
// PROMPT.h

#ifndef PROMPT
#define PROMPT
#include <stdio.h> // scanf_s
#include <string.h> // strlen

void prompt(char* userInput)
{
    // read input from user and prevent buffer overflow
    scanf_s("%s", userInput, 101);

    // wait for user to press Enter
    getchar();
}

#endif

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

