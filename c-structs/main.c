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
    Point p1 = inputPoint();
    printPoint(p1);

    return 0;
}
