#include <stdio.h>

#define PI 3.14159f

int main(void)
{

    float r;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    // formula for the volume of a sphere
    float volume = (4.0f / 3.0f) * PI * (r * r * r);

    printf("The volume of a sphere with a %f meter radius is: %f\n", r, volume);

    return 0;
}