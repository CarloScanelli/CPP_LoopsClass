#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#include "LoopsClass.hpp"

using namespace std;

Loops::Loops(vector <int> array){
  findFirstLoop(array);
}

vector<int> Loops::findRepeating(vector<int> array){ //[5, 3, 7, 9, 3, 1, 7, 4]
  vector <int> repeating; //[3, 7]
  int length = array.size();
  for (int i = 0; i < length; i++){
    for (int j = i + 1; j < length; j++){
      if (array.at(i) == array.at(j))
        repeating.push_back(array.at(i));
      }
    }
  return repeating;
}

vector <int> Loops::findFirstLoop(vector<int> array){
  vector <int> repeating = findRepeating(array);
  vector <int> loop;
  bool found = false;
  for (int i = 0; i < repeating.size(); i++){
    for (int j = 0; j < array.size(); j++){
      if (repeating.at(i) == array.at(j)){
        loop = addElementsToCycle(array, j);
        found = true;
        break;
      }
    }
    if (found) break;
  }
  for (int i = 0; i < loop.size(); i++){
    cout << loop.at(i) << endl;
  }
  return loop;
}

vector <int> Loops::addElementsToCycle(vector<int> array, int j){
  vector <int> loop;
  int loopStarts = j;
  if (array.at(j) == array.at(j+2)){  // Check if a loop has the form A - B - A.
    //cout << "Nope" << endl;
    array.erase(array.begin() + j);
    array.erase(array.begin()+ j + 2);
    findFirstLoop(array);
  }
  else{
    loop.push_back(array.at(loopStarts));
    while (array.at(j) != array.at(loopStarts + 1)){
      loop.push_back(array.at(loopStarts+1));
      loopStarts++;
      if (loopStarts + 1 >= array.size()){
        break;
      }
    }
  }
  return loop;
}
