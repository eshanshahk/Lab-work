#include <stdio.h>

struct Car
{
    char brand[20];
    char model[20];
    int year;
};

int main()
{
    struct Car cars[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter brand, model, and year for car %d: ", i + 1);
        scanf("%s %s %d", cars[i].brand, cars[i].model, &cars[i].year);
    }

    printf("\nCar Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s %s %d\n", cars[i].brand, cars[i].model, cars[i].year);
    }

    return 0;
}
