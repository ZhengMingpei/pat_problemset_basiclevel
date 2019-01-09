#include<iostream>
#include<vector>
using namespace std;
#define G 1000000
int main()
{
	int M,N;
	cin >> M >> N;
	int tag[G]={0};//all is sushu
	vector<int> sushu;
	int i=2;
	int nums_sushu=0;
	while(1){
		if(tag[i]==0)
		{
			nums_sushu++;
			if(nums_sushu>N) break;
			if(nums_sushu>=M)
				sushu.push_back(i); 
			int j=i*2;
			while(j<=G)
			{
				tag[j]=1;
				j += i;
			}
		}
		i++;
	}
	int j = sushu.size();
	i = 0;
	while(i<j-1)
	{
		cout << sushu[i];
		if(i%10==9) cout << endl;
		else cout << " ";
		i++;
	}
	if(i%10==9) cout << sushu[i] << endl;
	else cout << sushu[i];
	return 0;
}
