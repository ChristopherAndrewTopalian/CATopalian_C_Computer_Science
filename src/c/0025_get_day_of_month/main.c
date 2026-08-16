// getDayOfMonth.c

#include <stdio.h>
#include <time.h>

int getDayOfMonth()
{
    // get current time
    time_t now = time(NULL);

    // declare a tm structure to hold local time
    struct tm localTime;

    // use localtime_s for safe local time conversion
    localtime_s(&localTime, &now);

    // return the day of the month
    return localTime.tm_mday;
}

int main()
{
    // get and print the current day of the month
    printf("Current day of the month: %d\n", getDayOfMonth());

    return 0;
}

//----//

/*
Current day of the month: 31
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

