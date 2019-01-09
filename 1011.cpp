#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int i=1;
	long x,y,z;
	while(i<=N)
	{
		cin >> x >> y >> z;
		cout << "Case #" << i << ": ";
		if(x+y>z) cout << "true" << endl;
		else cout << "false" << endl;
		i++;
	}
	return 0;
}
