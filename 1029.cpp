#include<iostream>
#include<map>
#include<iterator>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<char> fullmap;
	set<char> notfull_map;
	string s;
	getline(cin, s);
	string givens;
	getline(cin, givens);
	int i = 0;
	while (i<s.size())
	{
		char c = s[i];
		if(s[i]>='a'&&s[i]<='z')
			c = s[i] - 'a'+'A';
		fullmap.insert(c);
		i++;
	}
	i = 0;
	while (i<givens.size())
	{
		char c= givens[i];
		if(givens[i]>='a'&&givens[i]<='z')
			c = givens[i] - 'a'+'A';
		notfull_map.insert(c);
		i++;
	}
	set<char>::iterator l = fullmap.begin();
	set<char> re;
	while (l != fullmap.end())
	{
		if (notfull_map.count(*l) == 0)
			re.insert(*l);
		l++;
	}
	i = 0;
	while(i<s.size())
	{
		char c = s[i];
		if(s[i] >= 'a'&&s[i] <= 'z') 
			c = s[i] - 'a' + 'A';
		if(re.count(c)!=0)
		{
			cout << c;
			re.erase(c);
		}
		i++;
	}
	return 0;
}
