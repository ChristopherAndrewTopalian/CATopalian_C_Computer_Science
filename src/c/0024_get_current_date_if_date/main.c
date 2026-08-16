// getCurrentDate_if_date.c

#include <stdio.h>
#include <time.h>
#include <string.h>

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
    char date[11]; // buffer to store current date string
    const char* specifiedDate = "2024-10-31"; // specify date to compare

    // get current date
    getCurrentDate(date, sizeof(date));

    // print current date
    printf("Current date: %s\n", date);

    // check if the current date matches the specified date
    if (strcmp(date, specifiedDate) == 0)
    {
        printf("Today is the specified date: %s\n", specifiedDate);
    }
    else
    {
        printf("Today is not the specified date.\n");
    }

    return 0;
}

//----//

/*
Current date: 2024-10-31
Today is the specified date: 2024-10-31
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

