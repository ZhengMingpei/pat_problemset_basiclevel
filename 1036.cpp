#include<iostream>
using namespace std;
int main()
{
	int n;
	char x;
	cin >> n >> x;
	int i=0;
	while(i<n)
	{
		cout << x; i++;
	}
	cout << endl;
	int n2;
	double m = n/2.0;
	if(m*10-(int)(n/2)*10>=5) n2 = n/2+1;
	else n2 = n/2;
	n2 -= 2;
	while(n2>=1)
	{
		cout << x;
		int k=0;
		while(k<n-2)
		{
			cout << ' ';
			k++;
		}
		cout << x << endl;
		n2--;
	}
	i=0;
	while(i<n)
	{
		cout << x; i++;
	}
	return 0;
}
