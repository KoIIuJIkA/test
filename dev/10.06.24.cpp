#include "10.06.24.hpp"

#include <array>
#include <iostream>
#include <string>
#include <utility>

const std::array<std::pair<int, char>, 5> arr{
    std::make_pair(2, '+'), std::make_pair(2, '-'), std::make_pair(1, '+'),
    std::make_pair(2, '-'), std::make_pair(1, '-')};

std::string solution(const char* ss) {
  auto s = std::string(ss);
  std::string ans = "";
  int pos = 0;

  for (const auto& i : arr) {
    ans += s.substr(pos, i.first) + i.second;
    pos += i.first;
  }
  ans += s.substr(pos);

  return ans;
}
