/*Create a C Program to Calculate the Distance Between Two Points Using Structure
Euclidean distance between two points (x1, y1) and (x2, y2) is given
by:*/
#include <stdio.h>
#include <math.h>

// Define a structure to represent a point
struct Point
{
    float x;
    float y;
};

// Function to calculate Euclidean distance
float calculateDistance(struct Point p1, struct Point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main()
{
    struct Point p1, p2;

    // Input first point coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &p1.x, &p1.y);

    // Input second point coordinates
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &p2.x, &p2.y);

    // Calculate and display the distance
    float distance = calculateDistance(p1, p2);
    printf("Euclidean Distance: %.2f\n", distance);

    return 0;
}
