#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[100];
    char ch;
    int character, word, line;
    //printf("Enter source file path: ");
    //scanf("%s", path);
    file = fopen("text_input.txt", "r");
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    character = word = line = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        character++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            line++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            word++;
    }

    printf("\n");
    printf("Total characters = %d\n", character);
    printf("Total words      = %d\n", word+1);
    printf("Total lines      = %d\n", line+1);

    fclose(file);

    return 0;
}
