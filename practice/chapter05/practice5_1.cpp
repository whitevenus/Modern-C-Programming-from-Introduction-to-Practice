#include <cstdio>

struct AccountDatabase
{
    virtual ~AccountDatabase() = default;
    virtual double getAmount(long id) = 0;
    virtual bool setAmount(long id, double amount) = 0;
};

struct InMemoryAccountDatabase : AccountDatabase
{
    double getAmount(long id)
    {

        return 0;
    }
};

int main()
{
    return 0;
}