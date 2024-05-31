#include <cstdio>

struct ClockOfTheLongNow
{
  ClockOfTheLongNow()
  {
    set_year(2019);
  }
  ClockOfTheLongNow(long year)
  {
    set_year(year);
  }
  void add_year()
  {
    ++year;
  }
  bool set_year(long new_year)
  {
    if (new_year < 2019)
      return false;
    year = new_year;
    return true;
  }
  long get_year() const
  {
    return year;
  }

private:
  long year;
};

struct Avout
{
  Avout(const char *name, long year_of_apert) : name{name}, apert{year_of_apert}
  {
  }
  void announce() const
  {
    printf("My name is %s and my next apert is %ld.\n", name, apert.get_year());
  }
  const char *name;
  ClockOfTheLongNow apert;
};

int main()
{
  Avout raz{"Erasmas", 3010};
  Avout jad{"Jad", 4000};
  raz.announce();
  jad.announce();
}