#include <cstdio>

char read_form(const char *alphabet, size_t index, size_t len)
{
    if (index < 0 || index >= len)
    {
        printf("Error Index....");
        return '\0';
    }
    return alphabet[index];
}

bool write_to(char *alphabet, size_t index, char c, size_t len)
{
    if (index < 0 || index >= len)
    {
        printf("Error Index....");
        return false;
    }
    alphabet[index] = c;
    return true;
}

int main()
{
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    char *upper_ptr = upper;

    write_to(lower, 3, 'd', sizeof(lower) / sizeof(char));
    write_to(upper_ptr, 3, 'D', sizeof(upper) / sizeof(char));

    char letter_d = read_form(lower, 3, sizeof(lower) / sizeof(char));
    char letter_D = read_form(upper_ptr, 3, sizeof(upper) / sizeof(char));

    printf("lower: %s\nupper: %s\n", lower, upper);

    // 数组越界给出提示
    write_to(lower, 7, 'g', sizeof(lower) / sizeof(char));
}