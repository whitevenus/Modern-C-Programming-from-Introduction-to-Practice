# 第 3 章 《引用》 编程练习题之自答

## 3.1

**题**：阅读CVE-2001-0500，即微软IIS(Internet InformationServices)中的缓冲区溢出（这个漏洞通常被称为Code Red蠕虫漏洞）。

**解**：略

## 3.2

**题**：在代码清单3-6中增加`read_from`和`write_to`函数。这些函数应该从`upper`或`lower`读取元素或向`upper`或`lower`写入元素。进行边界检查以防止缓冲区溢出。

**解**：

```c++
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
```

## 3.3

**题**：在代码清单3-9增加一个`Element*previous`，使之成为一个**双向链表**。给Element添加一个`insert_before`方法。使用两个独立的for循环从前到后，再从后到前遍历链表。在每个循环中打印`operating_number`。

**解**：待补充。

## 3.4

**题**：使用无显式声明类型重新实现代码清单3-11（提示：使用auto）。

**解**：

```c++
#include <cstdio>

int main()
{
    auto original = 100;
    auto &original_ref = original;
    printf("Original: %d\n", original);
    printf("Reference: %d\n", original_ref);

    auto new_value = 200;
    original_ref = new_value;
    printf("Original: %d\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);
}
```

## 3.5

**题**：查看第2章的所有代码清单。哪些方法可以标记为const？哪里可以使用auto？

**解**：`get_year`方法可以标记为`const`方法，类型声明处都可以使用`auto`。
