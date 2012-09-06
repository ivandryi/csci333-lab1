/* Find the sum of all the multiples of 3 and 5 below 1000 (not inclusive) */

#include <iostream>

using std::cout;
using std::endl;

int main(){
  int sum = 0;
  for (int i = 1; i < 1000; ++i){
    if (i % 3 == 0 || i % 5 == 0) {
      sum = sum + i;
    }
  }
  cout << "The sum is " << sum << endl;
  return 0;
}
