// Count Number of Lines in a Text File

#include <stdio.h>

int main()
{
    // declare FILE pointer
    FILE* inputFile;

    // open text file for reading
    if (fopen_s(&inputFile, "ourTextFile.txt", "r") == 0)
    {
        // check if the file opened successfully
        if (inputFile == NULL)
        {
            fprintf(stderr, "File won't open.\n");
            return 1; // return an error code
        }

        // variable to store the count of lines
        int lineCount = 0;

        // temp buffer stores each line read from file
        // max line length is 255 chars + 1 null terminator
        char line[256];

        // read file line by line and count lines
        while (fgets(line, sizeof(line), inputFile) != NULL)
        {
            lineCount++;
        }

        // close the file
        fclose(inputFile);

        // display the total number of lines
        printf("Number of lines in the file: %d\n", lineCount);
    }
    else
    {
        fprintf(stderr, "File won't open.\n");
        return 1; // return an error code
    }

    return 0;
}

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

