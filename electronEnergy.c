#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//electron energy calculation
int main(void)
{
    // electron mass
    double mass = 9.1E-31;

    // speed of light
    double speed = 2.998E8;

    double energy, dimensionlessSpeed;

    int count = 10, index;

    printf("Speed v/c\tEnergy (joule)\n");

    for (index = 0; index < count; index++)
    {
        dimensionlessSpeed = (double)index / count;
        energy = mass * speed * speed * (1 / sqrt(1 - dimensionlessSpeed * dimensionlessSpeed) - 1);
        printf("\t%.1f\t%e\n", dimensionlessSpeed, energy);
    }

    return 0;
}