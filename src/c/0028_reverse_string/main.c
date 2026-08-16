// reverse_string.c

#include <stdio.h>
#include <string.h>

void reverseString(char* str)
{
    int length = strlen(str);
    char temp;

    // reverse the string in place
    for (int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char word[] = "kingdom";

    // reverse the word
    reverseString(word);

    // print the reversed word
    printf("Reversed word: %s\n", word);

    // prompt user to press Enter to exit
    printf("Press Enter to Exit");
    getchar(); // waits for Enter

    return 0;
}

//----//

/*
Reversed word: modgnik
Press Enter to Exit
*/

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

