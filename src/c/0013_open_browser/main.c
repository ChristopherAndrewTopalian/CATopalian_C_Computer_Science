// Open Browser to a URL using char url

#include <windows.h>

int main()
{
    // URL to open
    const char* url = "https://www.google.com";

    // open web browser to specified URL
    ShellExecuteA(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);

    return 0;
}

// g++ main.c -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherAndrewTopalian
// https://github.com/ChristopherTopalian
// https://sites.google.com/view/CollegeOfScripting

