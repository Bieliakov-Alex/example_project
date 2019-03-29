#include "function.hpp"

int f1 ()
{
  return f2();
}

int f2 ()
{
  return 2 + 3;
}
