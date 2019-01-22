#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
  int N;
  cin >> N;
  int i = 0;
  set<int> s;
  while(i<N){
    int sum = 0;
    //int j = 1;
    int t;
    cin >> t;
    while(t>0){
      sum += t - t/10*10;
      t /= 10;
      //j *= 10;
    }
    s.insert(sum);
    i++;
  }
  int t = s.size(); i =0;
  cout << t << endl;
  set<int>::iterator l = s.begin();
  while(i<t-1){
    cout << *l << " ";
    i++; l++;
  }
  cout << *l;
  return 0;
}
