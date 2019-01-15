#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int num_zero;
	cin >> num_zero;
	int k=1;
	vector<int> q;
	int start = 0;
	while(k<=9)
	{
		int i;
		cin >> i;
		if(i>0)
		{
			if(start==0)
			{
				cout << k;
				i--;
				start = 1;
				while(num_zero>0)
				{
					cout << 0;
					num_zero--;
				}
			}
			while(i>0)
			{
				cout << k;
				i--;
			}
		}
		k++;
	}

	return 0;
}
