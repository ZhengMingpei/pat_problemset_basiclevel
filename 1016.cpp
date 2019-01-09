#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string a;
	int d;
	int i=0;
	int j=0;
	int k=0;
	int sum = 0;
	while(i<2)
	{
		cin >> a >> d;
		j = a.size();
		k = 0;
		int q=1;
		while(k<j)
		{
			if(a[k]-'0'==d)
			{
				sum += d*q;
				q *= 10;
			}
			k++;
		}
		i++;
	}
	cout << sum ;
	return 0;
}
