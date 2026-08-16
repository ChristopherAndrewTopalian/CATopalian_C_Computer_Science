// Calculate Hard Drive Memory Statistics

#include <stdio.h>
#include <windows.h>

int main()
{
    ULARGE_INTEGER freeBytesAvailable;    
    ULARGE_INTEGER totalBytes;   
    ULARGE_INTEGER totalFreeBytes;

    if (GetDiskFreeSpaceEx(NULL, &freeBytesAvailable, &totalBytes, &totalFreeBytes))
    {
        printf("Total space: %llu bytes\n", totalBytes.QuadPart);

        printf("Free space: %llu bytes\n", totalFreeBytes.QuadPart);

        printf("Available space: %llu bytes\n", freeBytesAvailable.QuadPart);
    }
    else
    {
        perror("Error getting disk space information");
        return 1; // return an error code
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

