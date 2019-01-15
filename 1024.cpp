#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if(s[0]=='-')
		cout << s[0];
	int j = 1;

	vector<char> q;
	while (s[j] != 'E') {
		q.push_back(s[j]);
		j++;
	}
	int p = 0;
	int tag = 0;
	j++;//E
	if (s[j] == '+')tag = 1;
	j++;//+-
	while (s[j] == '0') {
		j++;
	}
	while (s[j] != '\0')
	{
		p = p * 10 + (s[j] - '0');
		j++;
	}
	if (tag == 1) {
		cout << q[0];
		int i = 0; int k = 2;
		while (i<p)
		{
			if (k<q.size())
				cout << q[k];
			else
				cout << 0;
			i++;k++;
		}
		if (k<q.size()) cout << '.';
		while (k<q.size()) {
			cout << q[k];
			k++;
		}
	}
	else {
		int i = 0; //int k = 2;
		if (p > 0)
			cout << "0.";
		while (i<p-1)
		{
			cout << 0;
			i++;
		}
		cout << q[0];
		i = 2;
		while (i < q.size())
		{
			cout << q[i];
			i++;
		}
	}
	return 0;
}
