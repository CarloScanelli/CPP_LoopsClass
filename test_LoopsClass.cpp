#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#include "LoopsClass.hpp"

using namespace std;

int main() {

  vector<int> array;

  array.push_back(5);
  array.push_back(3);
  array.push_back(7);
  array.push_back(3);
  array.push_back(3);
  array.push_back(1);
  array.push_back(7);
  array.push_back(4);
  array.push_back(1);
  //array.push_back(5);
  Loops lp(array);
  return 0;
}
