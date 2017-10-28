#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int num;
  cout<<"Please input number:"<<endl;
  cin>>num;

  cout<<"Please input numbers:"<<endl;
  vector<int> nums(num);
  int i;
  for(i = 0; i < num; i++) {
    cin>>nums[i];
  }

  sort(nums.begin(), nums.end());
  cout<<"The answer is:"<<endl;
  for(int e:nums) {
    cout<<e<<" ";
  }
  cout<<endl;
}
