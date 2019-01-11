#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> s >> n;
	vector<int> x;
	int i = 0;
	int k = s.size();
	int last = 0;
	int tmp;
	while(i<k)
	{
		tmp = (last*10 +s[i]-'0');
		if(i>1||tmp/n>0)
			x.push_back(tmp/n);
		last = tmp%n;
		i++;
	}
	tmp = x.size();
	if(tmp==0)
		cout << 0;
	i = 0;
	while(i<tmp)
	{
		cout << x[i];
		i++;
	}
	cout << " " << last;
	return 0;
}
