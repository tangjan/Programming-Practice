// https://cplusplus.com/reference/algorithm/count_if/
// https://en.cppreference.com/w/cpp/algorithm/count

#include <iostream>
#include <algorithm>
#include <vector>

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
  std::vector<int> myvector;
  for (int i=1; i<10; i++) myvector.push_back(i); // myvector: 1 2 3 4 5 6 7 8 9

  int mycount = count_if (myvector.begin(), myvector.end(), IsOdd);
  std::cout << "myvector contains " << mycount  << " odd values.\n";

  return 0;
}