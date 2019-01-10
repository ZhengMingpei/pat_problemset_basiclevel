#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

/*
 * 下列注释内容摘自https://blog.csdn.net/Oliver__Lew/article/details/72512567
 * 题目叙述容易歧义，主要是小时的确定。
 * 确定星期：前两个字符串中位置相同且字符相同的第一个大写字母，并且应处于[A-G]
 * 确定小时：接星期的字符向后查找，位置相同的下一个相同的字符，并且处于[0-9A-N]
 * 确定分钟：后两个字符串中位于相同位置且相同的第一个字母
 *
 */


int main()
{
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	string s,b;
	int q = 0;
	int p = 0;
	cin>>s>>b;
	int i = 0;
	int k = s.size()<b.size()?s.size():b.size();
	while(i<k){
		if(s[i]==b[i]&& s[i]>='A'&&s[i]<='G') 
		{
			cout << week[s[i]-'A'] << " ";
			break;
		}
		i++;
	}
	while(i<k){
		if(s[i]==b[i]&& (s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='N') ) {
			if(q==1)
			{
				if(s[i]>='0'&&s[i]<='9')
					cout << setw(2) << right << setfill('0') << s[i] - '0';
				else// if(s[i]>='A'&&s[i]<='N')
					cout << setw(2) << right << setfill('0') << s[i] - 'A' + 10 ;
				break;
			}
			q++;
		}
		i++;
	}
	i=0;
	string x,y;
	cin>>x>>y;
	k = x.size()<y.size()?x.size():y.size();
	while(i<k){
		if(x[i]==y[i]&&((x[i]>='a'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z')))
		{
			cout << ":" << setw(2) << right << setfill('0') << i << endl;
			//cout << setw(2) << right << setfill('0') << x[q] << endl;
			break;
		}
		i++;
	}
	return 0;
}

