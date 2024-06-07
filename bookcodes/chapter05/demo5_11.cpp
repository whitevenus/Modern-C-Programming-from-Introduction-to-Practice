#include <cstdio>

struct Logger
{
    virtual ~Logger() = default;
    virtual void log_transfer(long from, long to, double amount) = 0;
};

struct ConsoleLogger : Logger
{
    void log_transfer(long from, long to, double amount) override
    {
        printf("[cons] %ld -> %ld: %f\n", from, to, amount);
    }
};

struct FileLogger : Logger
{
    void log_transfer(long from, long to, double amount) override
    {
        printf("[file] %ld -> %ld: %f\n", from, to, amount);
    }
};
