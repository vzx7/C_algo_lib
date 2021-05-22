#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define C2 0.95
#define MIN 0.8

unsigned short int count = 0;

float calculate_missiles(float p1, float p2)
{
    if (p1 < MIN)
        return 0;

    return 1 + (unsigned)log(C2) / log(1 - p1 * p2);
}

const float RAND_MAX_F = RAND_MAX;

float get_rand()
{
    return rand() / RAND_MAX_F;
}

int atack()
{
    unsigned count_shots = 10;
    float n = 0.0;

    printf("----------------------------------------\n");
    printf("| p1       | p2       | попадание | n  |\n");
    printf("----------------------------------------\n");

    while (count_shots--)
    {
        float p_one = get_rand();
        float p_two = get_rand();
        float res = round(calculate_missiles(p_one, p_two));
        if (res > 0)
            n += res;

        printf("| %f | %f | %s       | %.0f  |\n", p_one, p_two, res, res > 0 ? "да " : "нет");
        printf("----------------------------------------\n");
    }

    printf("| количество ракет за 10 попыток: | %.0f  |\n", n);
    printf("----------------------------------------\n");

    return n > 0;
}

void loop()
{
    short int is_victory = atack();
    if (!is_victory)
    {
        count++;
        printf("\n\n>>> %i попытка атаковать!\n\n", count);
        loop();
    }
}

int main(void)
{
    int i, stime;
    long ltime;

    ltime = time(NULL);
    stime = (unsigned)ltime / 2;

    srand(stime);

    count++;
    loop();
    return 0;
}