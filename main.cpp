#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol940;

/*
Input: inputs = ["TimeMap","set","get","get","set","get","get"], inputs = [[],["foo","bar",1],["foo",1],["foo",3],["foo","bar2",4],["foo",4],["foo",5]]
Output: [null,null,"bar","bar",null,"bar2","bar2"]
Explanation:
TimeMap kv;
kv.set("foo", "bar", 1); // store the key "foo" and value "bar" along with timestamp = 1
kv.get("foo", 1);  // output "bar"
kv.get("foo", 3); // output "bar" since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 ie "bar"
kv.set("foo", "bar2", 4);
kv.get("foo", 4); // output "bar2"
kv.get("foo", 5); //output "bar2"
*/

void test1()
{
  TimeMap kv;
  kv.set("foo", "bar", 1);
  cout << "Expect to see bar: " << kv.get("foo", 1) << endl; // output "bar"
  cout << "Expect to see bar: " << kv.get("foo", 3)
       << endl; // output "bar" since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 ie "bar"
  kv.set("foo", "bar2", 4);
  cout << "Expect to see bar2: " << kv.get("foo", 4) << endl;
  cout << "Expect to see bar2: " << kv.get("foo", 5) << endl;
}

main()
{
  test1();

  return 0;
}