#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int x;
	char c;
	cin >> x >> c;
	int i = 1;
	int sum = 2 * i * i - 1;
	while (sum<=x) {
		i++;
		sum = 2 * i * i - 1;
	}
	int j;
	if(i>1) j = 2 * (i - 1) - 1;
	else j = 1;
	sum = 2 * (i-1)*(i-1) - 1;
	i = 0;
	int tmp = j;
	while (j >= 0)
	{
		int t = j;
		int spaces = (tmp - j) / 2;
		int p, q;
		p = spaces;q = spaces;
		while (p>0) {
			cout << " ";
			p--;
		}
		while (t>0) {
			cout << c; t--;
		}
		/*
		 * 		while (q>0) {
		 * 					cout << " ";
		 * 								q--;
		 * 										}*/
		cout << endl;
		j -= 2;
	}
	j += 4;
	while (j <= tmp)
	{
		int t = j;
		int spaces = (tmp - j) / 2;
		int p, q;
		p = spaces;q = spaces;
		while (p>0) {
			cout << " ";
			p--;
		}
		while (t>0) {
			cout << c; t--;
		}
		/*
		 * 		while (q>0) {
		 * 					cout << " ";
		 * 								q--;
		 * 										}*/
		cout << endl;
		j += 2;
	}
	cout << x - sum << endl;
	return 0;
}

