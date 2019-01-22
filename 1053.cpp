#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<iomanip>
using namespace std;

int main(){
	int N,D;
	double e;
	cin >> N >> e >> D;
	int K;
	int i = 0;
	int sum_maybe = 0;
	int sum_must = 0;
	while(i<N){
		int t;
		cin >> t;
		int low_than_days = 0;
		int j = 0;
		while(j<t){
			double s;
			cin >> s;
			if(s<e){
				low_than_days ++;
			}
			j++;
		}
		if(low_than_days*2>t){
			//sum_maybe++;
			if(t>D)
				sum_must++;
			else
				sum_maybe++;
		}
		i++;
	}
	cout << fixed << setprecision(1) << sum_maybe*100.0/N << "% " <<  fixed << setprecision(1) << sum_must*100.0/N << "%"; 
	return 0;
}
