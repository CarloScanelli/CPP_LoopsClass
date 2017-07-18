#ifndef _LOOPS_CLASS_
#define _LOOPS_CLASS_

#include <vector>
#include <string>

class Loops {
  private:
    std::vector<int> findRepeating(std::vector<int> array);
    std::vector <int> addElementsToCycle(std::vector<int> array, int j);
    std::vector <int> findFirstLoop(std::vector<int> array);
    std::vector<int> foundLoop;
  public:
    Loops(std::vector<int> array);
  };

#endif
