#include <stdio.h>
#include <stdlib.h>

typedef struct point {

    int x;
    int y;
}Point;

void printPoint(Point pt) {

    printf("X coordinate = %d \nY coordinate = %d \n", pt.x, pt.y);
}

Point inputPoint() {

    Point pt;
    printf("Enter the x coordinate: ");
    scanf("%d", &pt.x);
    printf("Enter the y coordinate: ");
    scanf("%d", &pt.y);

    return pt;
}


int main() {

        // Get a point coordinate from the user and print it on the screen.
/*
    Point p1 = inputPoint();
    printPoint(p1);

                                */


        // Iterate over the array elements and assign a point coordinates for each element and
        // then print the points coordinates on the screen.

    Point pointsArray[5];

    // User input values
    for(int i=0; i<5; i++)
    {
        printf("Point #%d \n", i+1);
        printf("Enter x coordinate: ");
        scanf("%d", &pointsArray[i].x);
        printf("Enter y coordinate: ");
        scanf("%d", &pointsArray[i].y);
    }
    printf("\n");

    // Print user input values
    for(int j=0; j<5; j++)
    {
        printf("Point %d Coordinates ==> (%d, %d) \n", j+1, pointsArray[j].x, pointsArray[j].y);
    }

    return 0;
}
