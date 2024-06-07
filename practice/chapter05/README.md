# 第 5 章 《运行时多态》 编程练习题之自答

## 5.1

**题**：我们没有在`Bank`类中实现会计功能。设计一个名为`AccountDatabase`的接口，使其可以检索和设置银行账户中的金额（用`long`类型的**id**标识）。

**解**：

```c++
struct AccountDatabase
{
    virtual ~AccountDatabase() = default;
    virtual double getAmount(long id) = 0;
    virtual bool setAmount(long id, double amount) = 0;
};

```

## 5.2

**题**：生成一个实现`AccountDatabase`的`InMemoryAccountDatabase`类。





## 5.3 

**题**：向`Bank`添加一个`AccountDatabase`引用成员。使用构造函数注入将`InMemory-AccountDatabase`添加到`Bank`中。



## 5.4

**题**：修改`ConsoleLogger`，在构造函数中接受`const char*`。当`ConsoleLogger`记录日志时，在日志输出之前添加该字符串。请注意，你可以修改日志记录行为而无须修改`Bank`。