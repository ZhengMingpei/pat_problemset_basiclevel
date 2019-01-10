#include<iostream>
#include <vector>
using namespace std;

int main()
{
	int t,k;
	cin >> t >> k;
	vector<int> x;
	int n1,b,t1,n2;
	int i = 0;
	while(i<k){
		cin  >> n1 >> b >> t1 >> n2;
		x.push_back(n1); x.push_back(b);x.push_back(t1);x.push_back(n2);
		i++;
	}
	i = 0;
	while(i<k){
		if(t<=0)
		{
			cout << "Game Over." << endl;
			break;
		}
		n1 = x[i*4]; b = x[i*4+1]; t1 = x[i*4+2]; n2 = x[i*4+3];
		if(t1>t)
		{
			cout << "Not enough tokens.  Total = " << t << "."<<endl;
			i++;
			continue;
		}
		if(b==0){
			if(n1>n2)
			{
				t += t1;
				cout << "Win " << t1 << "!  Total = " <<  t << "." << endl;
			}
			else
			{
				t -= t1;
				if(t>=0)
					cout << "Lose " << t1 << ".  Total = " <<  t << "." << endl;
				else
					cout << "Lose " << t+t1 << ".  Total = " <<  0 << "." << endl;
			}
		}
		else{
			if(n1<n2)
			{
				t += t1;
				cout << "Win " << t1 << "!  Total = " <<  t << "." << endl;
			}
			else
			{
				t -= t1;
				if(t>=0)
					cout << "Lose " << t1 << ".  Total = " <<  t << "." << endl;
				else
					cout << "Lose " << t+t1 << ".  Total = " <<  0 << "." << endl;
			}
		}
		i++;
	}
	return 0;
}
