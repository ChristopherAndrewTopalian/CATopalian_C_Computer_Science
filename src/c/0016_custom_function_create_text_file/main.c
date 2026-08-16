// Custom Function - Create Text File with Data

#include <stdio.h>

void writeToFile(const char* fileName, const char* content)
{
    // declare FILE pointer
    FILE* outputFile;

    // open file for writing
    if (fopen_s(&outputFile, fileName, "w") == 0)
    {
        // check if file opened successfully
        if (outputFile != NULL)
        {
            // write data to file
            fprintf(outputFile, "%s\n", content);

            // close file
            fclose(outputFile);

            printf("Data written to %s successfully.\n", fileName);
        }
        else
        {
            printf("Failed to open file %s.\n", fileName);
        }
    }
    else
    {
        printf("Failed to open file %s.\n", fileName);
    }
}

int main()
{
    const char* fileName = "ourTextFile.txt";
    const char* content = "Hi Everyone";

    writeToFile(fileName, content);

    return 0;
}

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

