#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

void trans(vector<string> &c, string &s){
	int i=0;
	int isin = 0; //false
	int lastindex = 0;
	while(i<s.size()){
		if(s[i]=='['&&isin==0){
			isin = 1;
			lastindex = i+1;
		}
		if(isin==1&&s[i]==']'){
			string tmp = s.substr(lastindex,i-lastindex);
			c.push_back(tmp);
			isin = 0;
		}
		i++;
	}
}

int main(){
	string s;
	int N;
	int i = 0;
	vector<string> hand;
	vector<string> eye;
	vector<string> mouth;
	getline(cin,s);
	trans(hand,s);
	getline(cin,s);
	trans(eye,s);
	getline(cin,s);
	trans(mouth,s);
	//cin.ignore();
	cin >> N;
	i = 0;
	vector<string> g;
	while(i< N){
		int a,b,c,d,e;
		cin >> a >> b >> c >> d >> e; 
		string gg="";
		if(a-1>=0&&a-1<hand.size()&&e-1>=0&&e-1<hand.size()&&b-1>=0&&b-1<eye.size()&&d-1>=0&&d-1<eye.size()&&c-1>=0&&c-1<mouth.size())
		{
			gg +=hand[a-1];
			gg +="(";
			gg +=eye[b-1];
			gg +=mouth[c-1];
			gg +=eye[d-1];
			gg +=")";
			gg +=hand[e-1];
		}
		else
		{
			gg = "Are you kidding me? @\\/@";
		}
		g.push_back(gg);
		i++;
	}
	i = 0;
	while(i<g.size()){
		cout << g[i] << endl;
		i++;
	}
	return 0;
}
