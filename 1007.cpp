#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int tag[100000]={0};//all is sushu
	vector<int> sushu;
	int i=2;
	while(i<=N){
		if(tag[i]==0)
		{
			sushu.push_back(i);
			//cout << i << endl;
			int j=i*2;
			while(j<=N)
			{
				tag[j]=1;
				j += i;
			}
		}
		i++;
	}
	int j = sushu.size();
	int sum =0;
	i = 1;
	while(i<j)
	{
		if(sushu[i]-sushu[i-1]==2)
			sum++;
		i++;
	}
	cout << sum;
	return 0;
}
