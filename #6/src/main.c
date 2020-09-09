/*
main.c
project euler problem 6
Jordan Sola 2020
*/

#include <stdio.h>

int main()
{
    int sum_of_squares = 0;
    for (int i = 1; i < 100 + 1; i++)
    {
        sum_of_squares += i * i;
    }

    int sum_of_naturals = 0;
    for (int i = 1; i < 100 + 1; i++)
    {
        sum_of_naturals += i;
    }

    int sum_of_naturals_and_squares = sum_of_squares - sum_of_naturals;

    printf("%d\n", sum_of_naturals_and_squares);
    scanf("\n");
    return 0;
}