// split_words.c

#include <stdio.h>
#include <string.h>

#define MAX_WORDS 10
#define MAX_WORD_LENGTH 50

int main()
{
    char words[] = "Tabitha Lee";

    char splitWords[MAX_WORDS][MAX_WORD_LENGTH]; // array to hold split words

    int count = 0;

    // use strtok_s to split the string
    char* context; // for strtok_s

    char* token = strtok_s(words, " ", &context); // split by space

    while (token != NULL && count < MAX_WORDS)
    {
        // copy the token to the array safely
        strncpy_s(splitWords[count], MAX_WORD_LENGTH, token, MAX_WORD_LENGTH - 1);

        splitWords[count][MAX_WORD_LENGTH - 1] = '\0'; // ensure null-termination

        count++;

        // get the next token
        token = strtok_s(NULL, " ", &context);
    }

    // print the split words
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", splitWords[i]);
    }

    // prompt user to press Enter to exit
    printf("Press Enter to Exit");
    getchar(); // waits for Enter

    return 0;
}

//----//

/*
Tabitha
Lee
Press Enter to Exit
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

