#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef pair<int,int> CODES;

void str2codes(vector< CODES > &np,string &s){
	int i = 0;
	char last = s[0];
	if(s.size()==1) {
		CODES x =  make_pair(1,s[0]-'0');
		np.push_back(x);
	}
	else{
		i = 1;
		int times = 1;
		while(i<s.size()){
			if(s[i]==last){
				times ++;
			}else{
				CODES x =  make_pair(times,last-'0');
				np.push_back(x);
				last = s[i];
				times = 1;
			}
			i++;
		}
		CODES x =  make_pair(times,last-'0');
		np.push_back(x);

	}
}

void codes2str(vector< CODES > &np,string &s){
	s ="";
	int t = np.size();
	int i = 0;
	while(i<t){
		s += np[i].second +'0';
		s += np[i].first +'0';
		i++;
	}
}

int main(){
	string d;
	int N;
	cin >>d >> N;

	int i = 1;
	while(i<=N-1){
		vector< CODES > num;
		str2codes(num,d);
		codes2str(num,d);
		i++;
	}
	cout << d << endl;
	return 0;
}

