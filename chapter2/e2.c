#include <stdio.h>

#define PI 3.14159f

int main(void)
{

    int r = 10;

    // formula for the volume of a sphere
    float volume = (4.0f / 3.0f) * PI * (r * r * r);

    printf("The volume of a sphere with a %d meter radius is: %f\n", r, volume);

    return 0;
}