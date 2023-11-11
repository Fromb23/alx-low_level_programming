#ifndef CALC_H
#define CALC_H

typedef struct
{
    int (*add)(int, int);
    int (*sub)(int, int);
    int (*div)(int, int);
    int (*mul)(int, int);
} calc;

/* a functions */

int add(int a, int b);

int substruct(int a, int b);

/* Initialize the calculator structure */

extern calc calculator;

#endif
