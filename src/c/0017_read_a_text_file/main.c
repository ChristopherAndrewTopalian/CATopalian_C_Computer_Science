// Read a Text File

#include <stdio.h>

void displayFileContents(const char* fileName) {
    // declare FILE pointer
    FILE* inputFile;

    // open file for reading
    if (fopen_s(&inputFile, fileName, "r") == 0)
    {
        // check if file opened successfully
        if (inputFile != NULL)
        {
            // max line length is 255 chars + 1 null terminator
            char line[256];

            printf("Contents of %s:\n", fileName);

            // read, display file contents line by line
            while (fgets(line, sizeof(line), inputFile) != NULL)
            {
                printf("%s", line);
            }

            // close the file
            fclose(inputFile);
        }
        else
        {
            printf("Error opening file: %s\n", fileName);
        }
    }
    else
    {
        printf("Error opening file: %s\n", fileName);
    }
}

int main()
{
    const char* fileName = "ourTextFile.txt";

    displayFileContents(fileName);

    printf("\nPress Enter to Exit");

    // wait for user to press Enter
    getchar();

    return 0;
}

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

