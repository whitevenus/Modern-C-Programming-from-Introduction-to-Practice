#include <cstdio>

int absolute_value(int x)
{
    if (x >= 0)
    {
        return x;
    }
    else
    {
        return -1 * x;
    }
}

int main()
{
    int my_num = -10;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
    return 0;
}