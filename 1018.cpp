#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool cmp(const pair<char,int> &a,const pair<char,int> &b)
{
	if(a.second>b.second)
		return true;
	else if(a.second<b.second)
		return false;
	else{
		return a.first < b.first;
	}
}	

int main()
{
	int N;
	int a[3]={0};
	int b[3]={0};
	map<char,char> xmap;
	map<char,int> atimes;
	map<char,int> btimes;
	xmap['C']='B';
	xmap['B']='J';
	xmap['J']='C';
	cin >> N;
	int i = 0;
	while(i<N)
	{
		char x,y;
		cin >> x >> y;
		if(x==y){
			a[1]++;b[1]++;
		}
		else if(xmap[x]==y)
		{
			a[2]++;b[0]++;
			if(btimes.count(y)==0)
				btimes[y]=1;
			else
				btimes[y]++;
		}
		else
		{
			a[0]++;b[2]++;
			if(atimes.count(x)==0)
				atimes[x]=1;
			else
				atimes[x]++;
		}
		i++;
	}
	cout << a[0] << " " << a[1] << " " << a[2] << endl;
	cout << b[0] << " " << b[1] << " " << b[2] << endl;
	if(atimes.size()>0)
	{
		vector< pair<char,int> > p(atimes.begin(),atimes.end());
		sort(p.begin(),p.end(),cmp);
		/*
		int k = p.size();
		i = 0;
		while(i<k)
		{
			cout << p[i].first << " " << p[i].second << endl;
			i++;
		}
		*/
		cout << p.begin()->first << " ";
	}

    if(btimes.size()>0)
	{
		vector< pair<char,int> > p(atimes.begin(),atimes.end());
		sort(p.begin(),p.end(),cmp);
		cout << p.begin()->first ;
	}
	return 0;
}
