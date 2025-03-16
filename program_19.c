/*Read file name as command line argument. Check whether the
correct number of arguments is passed in the command line and also check whether the file exists. If the file exists, count the number of words, characters and the number of lines in the file.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Error: File does not exist.\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char ch, prev = '\0';

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n')
        {
            lines++;
        }
        if ((ch == ' ' || ch == '\n' || ch == '\t') && (prev != ' ' && prev != '\n' && prev != '\t'))
        {
            words++;
        }
        prev = ch;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }

    fclose(file);

    printf("File: %s\n", argv[1]);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
