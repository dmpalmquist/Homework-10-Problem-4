#include <iostream>

using namespace std;


int main() {
  const int nums = 5;

  int Nums[nums] = {16, 54, 7, 43, -5};
  int total = 0, *nPt; 

  nPt = Nums;
  //while (nPt < Nums + nums)
    //total += *nPt++;
  for (int i = 0; i < nums; i++)
    total += *nPt++;

  cout << "The total of the array elements is " << total << endl;
}