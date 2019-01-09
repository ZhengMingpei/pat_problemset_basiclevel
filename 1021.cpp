#include<iostream>
using namespace std;
int main()
{
	string a;
	int i=0;
	int j=0;
	cin >> a;
	j = a.size();
	int n[10]={0};
	while(i<j)
	{
		n[a[i]-'0']++;
		i++;
	}
	i=0;
	while(i<10)
	{
		if(n[i]>0) cout << i << ":"<<n[i]<<endl;
		i++;
	}
	return 0;
}
