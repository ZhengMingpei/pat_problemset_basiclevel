#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N;
	int i = 0;
	string s;
	vector<char> x;
	cin >> N;
	int j = 0;
	while(i<N*4){
		cin >> s;
		if(s[2]=='T'){
			j = s[0] - 'A' + 1;
			x.push_back(j+'0');
		}
		i++;
	}
	i = 0;
	while(i<x.size()){
		cout << x[i];
		i++;
	}
	return 0;
}
