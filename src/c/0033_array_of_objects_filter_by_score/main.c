// arrayOfObjectsFilterByScore

#include <stdio.h>
#include <string.h>

// define the Person class (struct)
struct Person {
    char name[50];
    char dob[20];
    int score;
};

int main()
{
    // create an array of 3 Person objects
    struct Person people[3] = {
        {"John Doe", "1995-03-25", 85},
        {"Jane Smith", "1993-07-19", 92},
        {"Alice Brown", "1996-12-12", 78}
    };

    // define the threshold score for filtering
    int scoreThreshold = 80;

    // use a for loop to display the information of people who meet the score condition
    for (int i = 0; i < 3; i++)
    {
        if (people[i].score > scoreThreshold)
        {
            printf("Name: %s\n", people[i].name);
            printf("Date of Birth: %s\n", people[i].dob);
            printf("Score: %d\n", people[i].score);
            printf("\n");
        }
    }

    printf("\nPress Enter to Exit");
    getchar();

    return 0;
}

/*
Name: John Doe
Date of Birth: 1995-03-25
Score: 85

Name: Jane Smith
Date of Birth: 1993-07-19
Score: 92

Press Enter to Exit
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

