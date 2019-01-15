#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

void transArray(vector<int> &p,int n)
{
	int i=3;
	while(n>0)
	{
		p[i] = n - n/10*10;
		n /= 10;
		i--;
	}
	while(i>=0)
	{
		p[i] = 0;
		i--;
	}
}

bool cmp2_1(int &x,int &y)
{
	return x>y;
}
int main()
{
	int x;
	vector<int> a;
	a.push_back(0); a.push_back(0); a.push_back(0); a.push_back(0);
	int i = 0;
	cin >> x;
	int max,min;
	transArray(a,x);
	sort(a.begin(),a.end(),cmp2_1);
	max = 1000*a[0]+100*a[1]+10*a[2]+a[3];
	sort(a.begin(),a.end());
	min = 1000*a[0]+100*a[1]+10*a[2]+a[3];

	cout << setw(4) << right << setfill('0') << max << " - ";
	cout << setw(4) << right << setfill('0') << min << " = ";

	x = max - min;
	cout << setw(4) << right << setfill('0') << x << endl;

	while(x!=6174&&x!=0)
	{
		transArray(a,x);
		sort(a.begin(),a.end(),cmp2_1);
		max = 1000*a[0]+100*a[1]+10*a[2]+a[3];
		sort(a.begin(),a.end());
		min = 1000*a[0]+100*a[1]+10*a[2]+a[3];
		cout << setw(4) << right << setfill('0') << max << " - ";
		cout << setw(4) << right << setfill('0') << min << " = ";
		x = max - min;
		cout << setw(4) << right << setfill('0') << x << endl;
	}

	return 0;
}
