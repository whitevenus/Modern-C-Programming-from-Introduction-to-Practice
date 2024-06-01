

#include <stdexcept>
#include <cstdio>
#include <cstring>

struct SimpleString
{
  SimpleString(size_t max_size) : max_size{max_size}, length{}
  {
    if (max_size == 0)
    {
      throw std::runtime_error{"Max size must be at least1."};
    }
    buffer = new char[max_size];
    buffer[0] = 0;
  }
  SimpleString(const SimpleString &other) : max_size{other.max_size}, buffer{new char[other.max_size]}, length{other.length}
  {
    strncpy(buffer, other.buffer, max_size);
  }
  ~SimpleString() noexcept
  {
    delete[] buffer;
  }
  void print(const char *tag) const
  {
    printf("%s %s", tag, buffer);
  }

  bool append_line(const char *x)
  {
    const auto x_len = strlen(x);
    if (x_len + length + 2 > max_size)
      return false;
    std::strncpy(buffer + length, x, max_size - length);
    length += x_len;
    buffer[length++] = '\n';
    buffer[length] = 0;
    return true;
  }

private:
  size_t max_size;
  char *buffer;
  size_t length;
};

void foo(SimpleString x)
{
  x.append_line("This change is lost.");
}

int main()
{
  SimpleString a{20};
  foo(a);
  a.print("Still empty：");
}