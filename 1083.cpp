#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<iterator>
//#include<pair>
using namespace std;

int main(){
	int N;
	cin >> N;
	int i = 1;
	map<int,int> xmap;
	while(i<=N){
		int t;
		cin >> t;
		if(t>i) xmap[t-i]++;
		else  xmap[i-t]++;
		i++;
	}
	map<int,int>::reverse_iterator l = xmap.rbegin();
	while(l!=xmap.rend()){
		if(l->second>1)
			cout << l->first << " " << l->second << endl;
		l++;
	}
	return 0;
}
