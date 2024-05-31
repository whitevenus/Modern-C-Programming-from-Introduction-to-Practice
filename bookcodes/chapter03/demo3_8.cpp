#include <cstdio>

struct ClockOfTheLongNow
{
  ClockOfTheLongNow()
  {
    set_year(2019);
  }
  void add_year()
  {
    ++year;
  }
  bool set_year(int new_year)
  {
    if (new_year < 2019)
      return false;
    year = new_year;
    return true;
  }
  int get_year()
  {
    return year;
  }

private:
  int year;
};

void add_year(ClockOfTheLongNow &clock)
{
  clock.set_year(clock.get_year() + 1);
}

int main()
{
  ClockOfTheLongNow clock;
  printf("The year is %d.\n", clock.get_year());
  add_year(clock);
  printf("The year is %d.\n", clock.get_year());
}