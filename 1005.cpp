#include<iostream>
#include<vector>
#include<set>
#include<iterator>
using namespace std;

int main()
{
	int m;
	cin >> m;
	int i=0;
	int n;
	set<int> li;
	vector< vector<int> > value;
	while(i<m)
	{
		cin >> n;
		li.insert(n);
		i++;
	}
	cout << li.size() << "------------" << endl;
	set<int>::iterator si = li.begin();	
	while(si!=li.end())
	{
		n = *si;
		vector<int> x;
		x.push_back(n);
		cout << n << " ";
		while(n!=1)
		{
			if(n%2==0)
				n /= 2;
			else
				n = (3*n+1)/2;
			if(li.count(n)!=0)
			{
				x.push_back(n);
				cout << n << " ";
			}
			else
				cout << " no ";
		}
		value.push_back(x);
		cout << endl;
		si++;
	}
	return 0;
}
