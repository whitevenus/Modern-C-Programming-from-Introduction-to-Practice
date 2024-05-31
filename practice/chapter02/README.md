# 第 2 章 《类型》 编程练习题之自答

## 2.1

**题**：创建 enum class Operation，其值为 Add、Subtract、Multiply 和 Divide。

**解**：

```c++
enum class Operation
{
  	Add,
  	Subtract,
  	Multiply,
  	Divide
};
```

## 2.2

**题**：创建 struct Calculator。它应该有一个接受 Operation 的构造函数。

**解**：

```c++
struct Calculator
{
  	Calculator(Operation op)
  	{
  	}
};
```

## 2.3

**题**：在 Calculator 上创建 int calculate(int a, int b)方法。在被调用时，该方法应根据其构造函数参数执行加法、减法、乘法或除法运算，并返回结果。

**解**：

```c++
struct Calculator
{
    Calculator(Operation op_in)
    {
        op = op_in;
    }
    int calculate(int a, int b)
    {
        int result{};
        switch (op)
        {
        case Operation::Add:
        {
            result = a + b;
        }
        break;
        case Operation::Subtract:
        {
            result = a - b;
        }
        break;
        case Operation::Multiply:
        {
            result = a * b;
        }
        break;
        case Operation::Divide:
        {
            result = a / b;
        }
        break;
        default:
            printf("Error operator..");
            break;
        }
        return result;
    }

private:
    Operation op;
};
```

## 2.4

**题**：尝试用不同的方法来初始化 Calculator 实例。

**解**：

```c++
#include <cstdio>

enum class Operation
{
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator
{
    Calculator(Operation op_in)
    {
        op = op_in;
    }
    int calculate(int a, int b)
    {
        int result{};
        switch (op)
        {
        case Operation::Add:
        {
            result = a + b;
        }
        break;
        case Operation::Subtract:
        {
            result = a - b;
        }
        break;
        case Operation::Multiply:
        {
            result = a * b;
        }
        break;
        case Operation::Divide:
        {
            result = a / b;
        }
        break;
        default:
            printf("Error operator..");
            break;
        }
        return result;
    }

private:
    Operation op;
};

int main()
{
    Calculator cal1{Operation::Add};
    Calculator cal2{Operation::Subtract};
    Calculator cal3 = {Operation::Multiply};
    Calculator cal4(Operation::Divide);
    printf("Add result %d\n", cal1.calculate(10, 20));
    printf("Sub result %d\n", cal2.calculate(10, 20));
    printf("Mul result %d\n", cal3.calculate(10, 20));
    printf("Div result %d\n", cal4.calculate(10, 20));
    return 0;
}
```
