
struct AccountDatabase
{
    virtual ~AccountDatabase() = default;
    virtual double getAmount() = 0;
    virtual void setAmount(long id) = 0;
};

int main()
{
    return 0;
}