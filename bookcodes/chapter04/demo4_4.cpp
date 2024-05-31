#include <cstdio>

struct Tracer
{
  Tracer(const char *name) : name{name}
  {
    printf("%s constructed.\n", name);
  }
  ~Tracer()
  {
    printf("%s destructed.\n", name);
  }

private:
  const char *const name;
};

// 全局静态存储期：当前编译单元内有效，直到程序结束。
static Tracer t1{"Static variable"};
// 线程局部存储期：线程内独享，直到线程结束。
thread_local Tracer t2{"Thread-local variable"};
int main()
{
  printf("A\n");
  // 自动存储期：当前函数内有效
  Tracer t3{"Automatic variable"};
  printf("B\n");
  // 动态存储期：不销毁之前都有效
  const auto *t4 = new Tracer{"Dynamic variable"};
  printf("C\n");
  delete t4;
}