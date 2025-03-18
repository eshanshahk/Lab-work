/*Read file name as command line argument. Check whether the
correct number of arguments is passed in the command line and also check whether the file exists. If the file exists, count the number of words, characters and the number of lines in the file.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Pass a file as a command line argument.\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        printf("File not found.\n");
        return 1;
    }

    int lines = 0, words = 0, ch = 0;
    char c;
    int inWord = 0;

    while ((c = fgetc(file)) != EOF)
    {
        ch++;
        if (c == '\n')
            lines++;

        if (c == ' ' || c == '\n')
            inWord = 0;
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(file);
    printf("\nCharacters: %d\nWords: %d\nLines: %d\n", ch, words, lines);
    return 0;
}
