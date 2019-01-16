#include<iostream>
#include<string>

using namespace std;

typedef struct DATA {
	string name;
	int year;
	int m;
	int d;
}Data;
bool OldderThan( Data &a, Data &b) {// old,new
	if (a.year<b.year) return true;
	else if (a.year == b.year) {
		if (a.m<b.m) return true;
		else if (a.m == b.m) return a.d < b.d;
		else return false;
	}
	else return false;
}
int main()
{
	int N;
	cin >> N;
	int i = 0;
	//vector<pair<string, Data>> v;
	Data olddest = { "xx",2015,1,1 };
	Data youngest = { "zz",0,0,0 };
	int ok = 0;
	while (i<N)
	{
		string s;
		cin >> s;
		string x;
		cin >> x;
		int y = (x[0] - '0') * 1000 + (x[1] - '0') * 100 + (x[2] - '0') * 10 + x[3] - '0';
		int m = (x[5] - '0') * 10 + x[6] - '0';
		int d = (x[8] - '0') * 10 + x[9] - '0';

		if ((y < 2014 && y>1814) || ((y == 2014) && ((m < 9) || (m == 9 && d <= 6))) || ((y == 1814) && ((m > 9) || (m == 9 && d >= 6))))
		{
			Data da = { s,y,m,d };
			if (OldderThan(da, olddest)) {
				olddest = da;
			}
			if (!OldderThan(da, youngest)) youngest = da;
			ok++;
		}
		i++;
	}

	if(ok>0)
	{
		cout << ok << " ";
		cout << olddest.name << " ";
		cout << youngest.name;
	}
	else
		cout << ok;
	return 0;
}
