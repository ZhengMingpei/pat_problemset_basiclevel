#include<iostream>
#include<string>
#include<vector>
//#include<algorithm>
//#include<pair>
using namespace std;

int main(){
  int N;
  cin >> N;
  int i = 0;
  string smax;
  long imax = -1;
  string smin;
  long imin = 10000000;
  while(i<N){
    string s;
    int x,y;
    cin >> s >> x >> y;
    if(x*x+y*y>imax){
      smax = s;
      imax = x*x+y*y;
    }
    if(x*x+y*y<imin){
      smin = s;
      imin = x*x+y*y;
    }
    i++;
  }
  cout << smax << " " << smin;
  return 0;
}
