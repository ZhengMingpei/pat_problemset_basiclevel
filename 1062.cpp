#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

void trans(string &a, int &x, int &y)
{
	int i = 0; int t = a.size();
	int lastindex = 0;
	while(i<t){
		if(a[i]=='/')
		{
			string s = a.substr(lastindex,i-lastindex);
			x = atoi(s.c_str());
			lastindex = i+1;
			break;
		}
		i++;
	}
	string s = a.substr(lastindex,t-lastindex);
	y = atoi(s.c_str());
}
bool check(int x,int y)
{
	int M,m;
	if(x>y){
		M = x; m = y;
	}
	else{
		M = y; m = x;
	}	
	while(m!=M){
		int t = M -m;
		if(t>m){
			M = t; 
		}
		else{
			int g = m;m = t; M = g;
		}
	}
	if(m==1) return true;
	else return false;
}
int main(){
	int n1,m1,n2,m2;
	string s;
	cin >> s;
	trans(s,n1,m1);
	cin >> s;
	trans(s,n2,m2);
	int k;
	cin >> k;
	int lef = (int)(n1*k*1.0/m1)+1;
	int rig = (int)(n2*k*1.0/m2);
	int i = lef;
	vector<string> x;
	while(i<=rig){
		if(check(i,k))
		{
			string n="";
			stringstream p;
			p << i; string y; p >> y; n += y; n += "/";
			p.clear(); p.str(""); p << k; p >> y; n += y;
			x.push_back(n);
		}
		i++;
	}
	k = x.size(); i = 0;
	if(k==1) cout << x[i];
	else{
		while(i<k-1){
			cout << x[i] << " ";
			i++;
		}
		cout << x[i];
	}
	return 0;
}
