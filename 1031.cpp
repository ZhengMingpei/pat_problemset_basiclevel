#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int N;
	cin >> N;
	int i=0;
	char check[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int is_all_true = 0;
	vector<string> true_id;
	while(i<N){
		int sum=0;
		string s;
		cin >> s;
		int istrue = 1;
		int j = 0;
		while(j<17)
		{
			if(s[j]-'0'>=0&&s[j]-'0'<=9)
				sum += (s[j]-'0')*a[j];
			else 
			{
				istrue = 0;
				break;
			}
			j++;
		}
		if(istrue==1 && check[sum%11]==s[j])
			is_all_true ++;
		else
			true_id.push_back(s);
		i++;
	}
	if(is_all_true==N) cout << "All passed" << endl;
	else{
		i = 0;
		while(i<true_id.size())
		{
			cout << true_id[i] << endl;
			i++;
		}
	}
	return 0;
}
