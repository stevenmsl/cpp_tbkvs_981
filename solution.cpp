#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol940;
using namespace std;

/*takeaways
  - define a nested map to tackle the problem
    - note than the inner map is an ordered map
  - good exercise to get familiar with find,
    upper_bound, and prev methods in map

*/

void TimeMap::set(string key, string value, int ts)
{
  /* insertion will happen if ts doesn't exist as
     a key in store[key] which itself is a map
  */
  store[key].emplace(ts, value);
}
string TimeMap::get(string key, int ts)
{
  auto v = store.find(key);

  /* can't find the key */
  if (v == store.end())
    return "";
  /* find the very first element that goes after ts
     - v->second is a map with timestamp being the key
     - we try to find the one that is greater than ts
       and is immediately after it
     - it will reach end() if all the timestamp keys
       are smaller than ts
  */

  auto it = v->second.upper_bound(ts);

  /* every one is greater than ts */
  if (it == begin(v->second))
    return "";

  if (it == end(v->second))
  {
    auto i = 10;
  }

  /* have to move one back to find the answer */
  return prev(it)->second;
}