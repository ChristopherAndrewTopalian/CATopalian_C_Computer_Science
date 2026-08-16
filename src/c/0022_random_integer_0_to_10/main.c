// random_integer_0_to_10.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    // generate a random integer between 1 and 10
    int randomInteger = (rand() % 10) + 1;

    // print the random integer
    printf("Random integer: %d\n", randomInteger);

    // prompt user to press Enter to exit
    printf("Press Enter to Exit\n");
    getchar();

    return 0;
}

//----//

/*
Random integer: 7
Press Enter to Exit
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

