// Array of Objects

#include <stdio.h> // printf

// define a structure to represent a person
struct Person
{
    char name[50];
    int age;
};

int main()
{
    // create an array of Person structs
    struct Person people[] =
    {
        { "John", 25 },
        { "Jane", 30 },
        { "Fiona", 28 }
    };

    // calculate number of elements in array
    int numPeople = sizeof(people) / sizeof(people[0]);

    // iterate over each person in the array
    for (int i = 0; i < numPeople; i++)
    {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }

    printf("\nPress Enter to Exit");

    // wait for user to press Enter
    getchar();

    return 0;
}

// g++ main.c -o our_test.exe

/*
Name: John, Age: 25
Name: Jane, Age: 30
Name: Fiona, Age: 28

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

