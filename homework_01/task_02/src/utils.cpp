#include "utils.hpp"
#include <iostream>
#include <stack>

int Calculate(const std::string& data) {
  char a = data[0];
  int int_a = int(a)-48;
  char action = data[1];
  char b = data[2];
  int int_b = int(b)-48;

  if (action=='+'){
    return int_a + int_b;
  }
  if (action=='-'){
    return int_a - int_b;
  }
  if (action=='*'){
    return int_a * int_b;
  }
};
