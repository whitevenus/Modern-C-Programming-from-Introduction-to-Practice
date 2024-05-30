#include <cstdio>

int main()
{

  bool t = true;
  bool f = false;

  printf("!true: %d\n", !t);
  printf("true && flase: %d\n", t && f);
  printf("true && !flase: %d\n", t && !f);
  printf("true || flase: %d\n", t || f);
  printf("false || flase: %d\n", f || f);
}