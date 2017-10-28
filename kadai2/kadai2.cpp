#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
  int num;
  cout<<"Please input the number of students:"<<endl;
  cin>>num;

  map<string, double> gp;
  string name;
  double score;
  cout<<"Please input student information"<<endl;
  for(int i; i < num; i++){
    cin>>name>>score;
    gp[name]=score;
  }

  cout<<"The answer is:"<<endl;
  for(pair<string, double>e:gp){
    cout<<e.first<<" "<<e.second<<endl;
  }
}
