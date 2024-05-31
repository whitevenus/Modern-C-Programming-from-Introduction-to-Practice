#include <cstdio>

struct College
{
  char name[256];
};

void print_name(College *college_ptr, size_t n_colleges)
{
  for (size_t i = 0; i < n_colleges; ++i)
  {
    printf("%s College\n", college_ptr[i].name);
  }
}

int main()
{
  College best_colleges[]{"Magdalen", "Nuffield", "Kellogg"};
  print_name(best_colleges, sizeof(best_colleges) / sizeof(College));
}