struct BaseClass
{
};
struct DerivedClass : BaseClass
{
};
void are_belong_to_us(DerivedClass &base)
{
}

int main()
{
    BaseClass base;
    // are_belong_to_us(base); Error
}