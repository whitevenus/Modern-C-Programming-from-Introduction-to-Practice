# 第 1 章 《启动和运行》 编程练习题之自答

## 1.1

**题**：创建一个名为absolute_value的函数，它返回其参数的绝对值。取整数x的绝对值的规则如下：如果x大于或等于0，则绝对值为x；否则为x乘以-1。

**解**：

```c++
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
```

## 1.2

**题**：尝试用不同的值运行上述程序。是否看到了期望的数值？

**解**：略

## 1.3

**题**：用调试器运行上述程序，单步调试每条指令。

**解**：待补充。

## 1.4

**题**：编写另一个名为sum的函数，该函数接受两个int参数并返回它们的和。

**解**：

```c++
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
```



