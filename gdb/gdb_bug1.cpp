#include <iostream>
#include <vector>
/* creates a vector of 13 integers,
   erase items one by one.
   what's wrong with this code?
   find out using gdb!!!
*/
using namespace std;

int main() {
  vector<int> vec;
  int i;
  for (i = 0; i < 13; i++)
    vec.push_back(i);

  int n = vec.size();
  for (i = 0; i < n; i++) {
    vec.erase(vec.begin() + i);
  }
  vec.clear();
  cout << "size is " << vec.size() << endl;
  return 0;
}
