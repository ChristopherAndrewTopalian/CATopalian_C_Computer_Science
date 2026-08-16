// getCurrentDate.c

#include <stdio.h>
#include <time.h>

void getCurrentDate(char* buffer, size_t bufferSize)
{
    // get current time
    time_t now = time(NULL);

    // declare a tm structure to hold local time
    struct tm localTime;

    // use localtime_s for safe local time conversion
    localtime_s(&localTime, &now);

    // format the date as "YYYY-MM-DD" and store it in buffer
    strftime(buffer, bufferSize, "%Y-%m-%d", &localTime);
}

int main()
{
    char date[11]; // buffer to store date string

    // get current date
    getCurrentDate(date, sizeof(date));

    // print current date
    printf("Current date: %s\n", date);

    return 0;
}

//----//

/*
Current date: 2024-10-31
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

