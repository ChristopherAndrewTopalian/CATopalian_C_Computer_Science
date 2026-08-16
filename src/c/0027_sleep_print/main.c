// sleep_print.c

#include <stdio.h>
#include <stdlib.h>

// Include the correct headers based on the operating system
#ifdef _WIN32
    #include <windows.h>  // Required for Windows Sleep()
#else
    #include <unistd.h>   // Required for Mac/Linux sleep()
#endif

int main()
{
    printf("Count to 4\n");

    // Call the exact right function name with the right case
    #ifdef _WIN32
        Sleep(4000);  // Windows uses uppercase 'S' and milliseconds
    #else
        sleep(4);     // Mac/Linux uses lowercase 's' and seconds
    #endif

    printf("4 seconds passed\n");

    // prompt user to press Enter to exit
    printf("Press Enter to Exit");
    getchar();  // waits for Enter

    return 0;
}

//----//

/*
Count to 4
4 seconds passed
Press Enter to Exit
*/

// g++ main.c -o our_test.exe

/*
Because C is a low-level language, it talks directly to the operating system hardware. Windows engineers decided to name their function Sleep() and measure it in milliseconds. UNIX (Linux/Mac) engineers decided to name their function sleep() and measure it in seconds. The #ifdef _WIN32 blocks are the standard industry way to make a single C file compile perfectly on both operating systems.
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

