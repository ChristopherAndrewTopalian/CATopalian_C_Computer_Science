// get_os_name.c

#include <stdio.h>

int main()
{
    // determine the operating system
#ifdef _WIN32
    printf("Operating System: Windows\n");
#elif __linux__
    printf("Operating System: Linux\n");
#elif __APPLE__ || __MACH__
    printf("Operating System: macOS\n");
#else
    printf("Operating System: Unknown\n");
#endif

    // prompt user to press Enter to exit
    printf("Press Enter to Exit");
    getchar();  // waits for Enter

    return 0;
}

//----//

/*
Operating System: Windows
Press Enter to Exit
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

