#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], pattern[100];
    int table[256];
    int i, j, m, n;

    printf("Enter the text: ");
    scanf("%s", text);

    printf("Enter the pattern: ");
    scanf("%s", pattern);

    n = strlen(text);
    m = strlen(pattern);

    // Initialize shift table
    for(i = 0; i < 256; i++)
        table[i] = m;

    for(i = 0; i < m - 1; i++)
        table[(int)pattern[i]] = m - 1 - i;

    // Horsepool algorithm
    i = m - 1;

    while(i < n)
    {
        j = 0;

        while(j < m && pattern[m - 1 - j] == text[i - j])
            j++;

        if(j == m)
        {
            printf("Pattern found at position %d\n", i - m + 2);
            return 0;
        }

        i = i + table[(int)text[i]];
    }

    printf("Pattern not found\n");

    return 0;
}
