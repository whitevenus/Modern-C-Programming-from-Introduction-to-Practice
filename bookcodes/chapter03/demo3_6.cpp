#include <cstdio>

int main()
{
  char lower[] = "abc?e";
  char upper[] = "ABC?E";

  char *upper_ptr = upper;
  lower[3] = 'd';
  upper_ptr[3] = 'D';

  char letter_d = lower[3];
  char letter_D = upper_ptr[3];

  printf("lower: %s\nupper: %s", lower, upper);

  // 数组越界了
  lower[7] = 'g';
}