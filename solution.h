
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol940
{

  class TimeMap
  {

  private:
    unordered_map<string, map<int, string>> store;

  public:
    void set(string key, string value, int ts);
    string get(string key, int ts);
  };

  class Solution
  {
  private:
  public:
  };
}
#endif