#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<char,int> x;
	string s;
	getline(cin,s);
	//cin >> s;
	int i = 0;
	while(i<s.size())
	{
		x[s[i]]=1;
		if(s[i]>='a'&&s[i]<='z') x[s[i]-('a'-'A')] = 1;
		else if(s[i]>='A'&&s[i]<='Z') x[s[i]+'a'-'A'] = 1;
		else ;
		i++;
	}
	string givens;
	cin >> givens;
	int iCap=x.count('+');
	i = 0;
	while(i<givens.size())
	{
		if(iCap==0)
		{
			if(x.count(givens[i])==0)
				cout << givens[i];
		}
		else if(iCap!=0)
		{
			if((!(givens[i]>='A'&&givens[i]<='Z'))&&x.count(givens[i])==0)
				cout << givens[i];

		}
		i++;
	}
	cout << endl;
	return 0;
}
