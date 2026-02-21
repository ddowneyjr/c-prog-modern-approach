#include <stdio.h>

int main (void) 
{
    int height, length, width, volume, weight;

    printf("Enter height of a box: ");
    scanf("%d", &height);
    printf("Enter the length of box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volums (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}