#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{
	char a[80];
	fgets(a,80,stdin);
	//gets(a);
	vector<string> all;
	int i=0;
	int last_start = 0;
	while(a[i]!='\0')
	{
		if(a[i]==' '||a[i]=='\n')
		{
			char x[80];
			int z = 0;
			int j = last_start;
			while(j<=i-1)
			{
				x[z] = a[j];
				j++;z++;
			}
			x[z]='\0';
			string g(x);
			all.push_back(g);
			last_start = i+1;
		}
		i++;
	}
	/*
	char x[80];
	int z = 0;
	int j = last_start;
	while(j<=i-1)
	{
		x[z] = a[j];
		j++;z++;
	}
	x[z]='\0';
	string g(x);
	all.push_back(g);
	*/
	i=all.size()-1;
	while(i>0)
	{
		cout << all[i] << " ";
		i--;
	}
	cout << all[i] << endl;	

	return 0;
}
