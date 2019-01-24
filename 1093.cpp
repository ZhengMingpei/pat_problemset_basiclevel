#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

void createSet(string &a,set<char> &schar,vector<char> &vchar){
  int i = 0;
  while(i<a.size()){
    if(schar.count(a[i])==0){
      vchar.push_back(a[i]);
    }
    schar.insert(a[i]);
    i++;
  }
}

int main(){
  string x,y;
	getline(cin,x);
	getline(cin,y);
	set<char> sx,sy;
	vector<char> result;
	createSet(x,sx,result);
	createSet(y,sx,result);
	int i = 0;
	while(i<result.size()){
	  cout << result[i];
	  i++;
	}
	return 0;
}
