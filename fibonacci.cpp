/* 
   By considering the terms in the Fibonacci sequence
   whose values do not exceed four million find the sum 
   of the even-valued terms 
*/

#include <iostream>

using std::cout;
using std::endl;

int main(){
  int sum = 0;
  int end = 1;
  int start = 0;
  while (end <= 4000000){
    if (end % 2 == 0){
      sum = sum + end;
    }
    end = end + start;
    start = end - start;
  }
  cout << "The sum is " << sum << endl;
  return 0;
}
