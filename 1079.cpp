#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void rever(string &a, string &b)
{
	b = a;
	int i = 0;
	int t = b.size()-1;
	while(i<b.size()/2){
		int tmp = b[i];
		b[i] = b[t-i];
		b[t-i] = tmp;
		i++;
	}
}

void add(string &a, string &b, string &c)
{	
	string ra;
	string rb;
	rever(a,ra);
	rever(b,rb);
	string rc = "";
	char jinwei ='0' ;
	if(ra.size()>rb.size()){
		int t = ra.size() - rb.size();
		int j = 0;
		while(j<t){
			rb += "0";
			j++;
		}
	}
	else{
		int t = rb.size() - ra.size();
		int j = 0;
		while(j<t){
			ra += "0";
			j++;
		}
	}
	int i = 0;
	while(i<ra.size()){
		rc += (ra[i]-'0'+rb[i]-'0'+jinwei-'0')%10 +'0';
		jinwei = (ra[i]-'0'+rb[i]-'0'+jinwei-'0')/10+'0';
		i ++;
	}
	if(jinwei!='0')
		rc += jinwei;
	rever(rc,c);
}

bool check(string &a)
{
	int i = 0;
	int t = a.size()-1;
	while(i<a.size()/2){
		if(a[i] != a[t-i])
			return false;
		i++;
	}
	return true;
}

int main(){
	string sx,sy;
	cin >> sx;
	if(check(sx)) {
		cout << sx <<  " is a palindromic number."   << endl;
		return 0;
	}
	int i = 0;
	while(i<10){
		string sum;
		rever(sx,sy);
		add(sx,sy,sum);
		cout << sx << " + " << sy << " = " << sum << endl;
		if(check(sum))
		{
			cout << sum << " is a palindromic number." << endl;
			return 0;
		}
		else{
			sx = sum;
		}
		i++;
	}
	cout << "Not found in 10 iterations." << endl;
	return 0;
}
