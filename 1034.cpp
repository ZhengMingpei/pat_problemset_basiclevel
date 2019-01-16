#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;

int cal(int x,int y)
{
	int z;
	int tmp;
	if(x<y)
    {
		tmp = x;
		x = y;
		y = tmp;
	}
	else if(x==y)
	{
		return x;
	}
	else;
	z = x - y;
	while(z!=y)
	{
		x = y;
		y = z;
		if(x<y)
		{
			tmp = x;
			x = y;
			y = tmp;
		}
		z = x - y;
	}
	return z;
}

int main()
{
	string a,b;
	cin >> a >> b;
	int i = 0;
	while(i<a.size())
	{
		if(a[i]=='/')
			break;
		i++;
	}
	string t =  a.substr(0,i);
	string u = a.substr(i+1,a.size()-i-1) ;
	int p = atoi(t.c_str());
	int q = atoi(u.c_str());
	int z = cal(p,q);
	p = p/z; q = q/z;
	i = 0;
	while(i<b.size())
	{ 
		if(b[i]=='/')
			break;
		i++;
	}
	t = b.substr(0,i);
    u = b.substr(i+1,b.size()-i-1);
	int x = atoi(t.c_str());
	int y = atoi(u.c_str());
	int r = cal(x,y);
	x = x/r;
	y = y/r;
	// p/q x/y
	int w = q*y/(cal(q,y));
	int ca = p * w/q;
	int cb = w;
	int da = x * w/y;
	int db = w;
	// ca/cb da/db
	int ec,ea,eb,fc,fa,fb;
	if(ca>cb)
	{
		ec = ca/cb; eb = w; ea = ca - ec*cb;	
	}
	else if(ca<cb)
	{
		if(ca==0){
		}
	}else
	{
		ec = 1;eb=ea=0;
	}
		cout << ca + da << "/" << w << endl;
		cout << ca - da << "/" << w << endl;
		cout << ca * da << "/" << w*w << endl;
		cout << ca/da << endl;

	return 0;
}
