// Create Text File with Data

#include <stdio.h>

int main()
{
    // declare FILE pointer
    FILE* outputFile;

    // open file for writing
    if (fopen_s(&outputFile, "ourTextFile.txt", "w") == 0)
    {
        // write data to file using fprintf_s
        if (fprintf_s(outputFile, "Hi Everyone\n") > 0)
        {
            // close file
            fclose(outputFile);

            printf("Data written successfully.\n");
        }
        else
        {
            printf("Error writing data to file.\n");
            // close file if an error occurs
            fclose(outputFile);
        }
    }
    else
    {
        printf("Failed to open file.\n");
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

