// getYear.c

#include <stdio.h>
#include <time.h>

int getYear()
{
    // get current time
    time_t now = time(NULL);

    // declare a tm structure to hold local time
    struct tm localTime;

    // use localtime_s for safe local time conversion
    localtime_s(&localTime, &now);

    // return the year
    return localTime.tm_year + 1900; // tm_year is years since 1900
}

int main()
{
    // get and print the current year
    printf("Current year: %d\n", getYear());

    return 0;
}

//----//

/*
Current year: 2024
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

