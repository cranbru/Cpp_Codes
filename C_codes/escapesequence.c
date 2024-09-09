#include <stdio.h>

int main() {
    // Using various escape sequences in one string
    char *str = "Hello,\tWorld!\nThis is a test of \"escape sequences\".\n"
                "Here's a backslash: \\ \n"
                "And a single quote: \' and a double quote: \"\n"
                "A bell sound will follow: \a\n"
                "A form feed: \fEnd of form feed\n"
                "A carriage return: \rBack to start\n"
                "A vertical tab: \vNext line vertically.\n";
    
    // Printing the string
    printf("%s", str);
    
    return 0;
}
