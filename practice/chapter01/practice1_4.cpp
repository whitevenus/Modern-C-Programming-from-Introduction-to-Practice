#include <cstdio>

int sum_value(int x, int y)
{
    return x + y;
}

int main()
{
    int my_num1 = -10;
    int my_num2 = 30;
    printf("The sum value of %d and %d is %d.\n", my_num1, my_num2, sum_value(my_num1, my_num2));
    return 0;
}