#include <iostream>
#include <vector>
/* try to fix the previous one.
   but have seg fault.
   use (gdb) bt and (gdb) up to find out why

*/
using namespace std;

int main() {
  vector<int> v;
  int i = 0;
  for (i = 0; i < 13; i++)
    v.push_back(i);

  int n = v.size();
  for (i = 0; i < n; i++) {
    v.erase(v.begin() + i);
  }
  cout << "size is " << v.size() << endl;
  return 0;
}
