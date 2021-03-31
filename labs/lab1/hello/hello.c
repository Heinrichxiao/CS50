#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get name of user
    string name = get_string("what is your name? ");
    // Say hello to the user
    printf("Hello, %s!\n", name);
}