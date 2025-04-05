// Exercises showing why need to be careful about using scanf

#include <stdio.h>

int example();
int example1();

int main () {
    example1();
    return 0;
}

int example() {
    int i, j;

    float x;

    scanf("%d%f%d", &i, &x, &j);

    printf("%d\n", i);
    printf("%f\n", x);
    printf("%d\n", j);

    return 0;
}

// if input 10.3 5 6
// %d: reads 10 as integer assigns it to i, .5 left in buffer
// .3 5 6 in buffer
// %f reads 0.3
// %d reads 5
// 6 left in buffer
// so need to be careful!!!

int example1() {
    int x;
    float i, j;

    scanf("%f%d%f", &i, &x, &j);

    printf("%f\n", i);
    printf("%d\n", x);
    printf("%f\n", j);

    return 0;
}

// if enter 12.3 45.6 789
// %f reads 12.300000
// %d reads 45
// 0.6 789 in buffer
// %f reads 0.6000000
// 789 left in buffer