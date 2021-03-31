#include <cs50.h>
#include <stdio.h>

void draw(int now, int height);

int main(void)
{
    // Get height between 1 and 8
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Draw
    draw(0, height);
}

void draw(int now, int height)
{
    if (now == height)
    {
        return;
    }

    // Gaps
    for (int j = 0; j < height - now - 1; j++)
    {
        printf(" ");
    }

    // Blocks
    for (int i = 0; i < now + 1; i++)
    {
        printf("#");
    }
    printf("\n");
    draw(now + 1, height);
}