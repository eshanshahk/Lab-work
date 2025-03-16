/*Write a program to read N students roll number, name from the
keyboard and then write it to a student file. Also copy the contents into another file.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no;
    char name[50];
};

int main()
{
    FILE *file1, *file2;
    int n, i;
    struct Student s;

    file1 = fopen("students.txt", "w");
    if (file1 == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter roll number and name for student %d: ", i + 1);
        scanf("%d", &s.roll_no);
        getchar();
        fgets(s.name, sizeof(s.name), stdin);
        fprintf(file1, "%d %s", s.roll_no, s.name);
    }

    fclose(file1);

    file1 = fopen("students.txt", "r");
    file2 = fopen("students_copy.txt", "w");
    if (file1 == NULL || file2 == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, file2);
    }

    printf("Data successfully copied to students_copy.txt\n");

    fclose(file1);
    fclose(file2);

    return 0;
}
