#include <iostream>

#include "bmp.hpp"
#include "color.hpp"
#include "function.hpp"
#include "structer.hpp"
#include "gen_rand_data.hpp"

int main() {
  Image<rgb> a(10, 10, Color<rgb>(123, 124, 5));
  std::cout << a(9, 4);

  return 0;
}