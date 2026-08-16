// mph_to_kph.c

#include <stdio.h>

int main()
{
    double mph, kph;

    // prompt user for input
    printf("Enter speed in miles per hour (mph): ");
    if (scanf_s("%lf", &mph) != 1)
    {
        printf("Invalid input.\n");
        return 1; // exit if input is invalid
    }

    // convert mph to kph
    kph = mph * 1.60934;

    // display result
    printf("Speed in kph: %.2f\n", kph);

    return 0;
}

//----//

/*
Enter speed in miles per hour (mph): 40
Speed in kilometers per hour (kph): 64.37
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

