#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	vector<int> v;
	int i = 0;
	int imax = 0;
	while(i<=N){
		v.push_back(0);
		i++;
	}
	i = 0;
	while(i<M){
		int j = 1;
		while(j<=N){
			int t;
			cin >> t;
			v[j] += t;
			if(v[j]>=imax)
				imax = v[j];
			j++;
		}
		i++;
	}
	i = 1;
	vector<int> c;
	cout << imax << endl;
	while(i<=N){
		if(v[i]==imax)
			c.push_back(i);
		i++;
	}
	i = 0;
	while(i<c.size()-1){
		cout << c[i] << " ";
		i++;
	}
	cout << c[i];
	return 0;
}
