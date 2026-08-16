// get current working directory

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // GetCurrentDirectory

int main()
{
    char buffer[MAX_PATH];

    // get the current working directory
    if (!GetCurrentDirectory(MAX_PATH, buffer))  
    {
        perror("Error getting current working directory");
        return EXIT_FAILURE;
    }

    printf("Current working directory: %s\n", buffer);

    return EXIT_SUCCESS;
}

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

