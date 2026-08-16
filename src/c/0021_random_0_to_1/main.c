// random0to1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    // generate a random float between 0.0 and 1.0
    float randomFloat = (float)rand() / (float)RAND_MAX;

    // print the random float
    printf("Random float: %f\n", randomFloat);

    // prompt user to press Enter to exit
    printf("Press Enter to Exit\n");
    getchar();

    return 0;
}

//----//

/*
Random float: 0.767113
Press Enter to Exit
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

