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