#include "utils.hpp"

#include <iostream>
#include <stack>

std::vector<std::string> SplitString(const std::string& data) {
  std::vector<std::string> elems;
  std::string elem = "";
  int flag = 0;
  for (char const& letter : data) {
    if (flag == 0) {
      if (letter == '(') {
        flag = 1;
      } else if (letter != ' ' and letter != '\t') {
        elem.push_back(letter);
      } else if (letter == ' ' or letter == '\t') {
        if (!elem.empty()) {
          elems.push_back(elem);
          elem.clear();
        }
      };
    };
    if (flag == 1) {
      if (letter != ')') {
        elem.push_back(letter);
      } else if (letter == ')') {
        elem.push_back(letter);
        if (!elem.empty()) {
          elems.push_back(elem);
          elem.clear();
        }
        flag = 0;
      };
    };
  };
  if (!elem.empty()) {
    elems.push_back(elem);
    elem.clear();
  }
  return {elems};
};
