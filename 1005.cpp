#include<iostream>
#include<set>
#include<vector>
#include<iterator>
#include<map>
#include<algorithm>
using namespace std;

bool sortBysize( pair<int,vector<int> > &x,pair<int,vector<int> > &y){
	return x.second.size()>y.second.size();
}
bool cmp(int x,int y){
	return x>=y;
}
bool isSubVec(vector<int> &x, vector<int> &y,int &indexA,int &indexB){
	if(x.size()<=y.size()){
		int i = 0;
		while(i<x.size()){
			int j = 0;
			while(j<y.size()){
				if(x[i]==y[j]){
					indexA = i;
					indexB = j;
					return true;
				}
				j++;
			}
			i++;
		}
		return false;
	}
	return false;
}

int main(){
	int k = 0;
	cin >> k;
	vector<int> xn;
	map<int,vector<int> > xnmap;
	int i=0;
	while(i<k){
		int n=0;
		cin >> n;
		xn.push_back(n);
		i++;
	}
	i = 0;
	while(i<xn.size()){
		int n =xn[i];
		vector<int> tmp;
		tmp.push_back(n);
		while(n!=1){
			if(n%2==0)
				n /= 2;
			else
				n = (3*n+1)/2;
			tmp.push_back(n);
		}
		xnmap[xn[i]]=tmp;
		i++;
	}
	vector<pair<int,vector<int>>> xnv(xnmap.begin(), xnmap.end());
	sort(xnv.begin(),xnv.end(),sortBysize);	
	/*
	i = 0;
	while(i<xnv.size()){
		int j = 0;
		while(j<xnv[i].second.size()){
			cout << xnv[i].second[j] << " ";
			j++;
		}
		cout << endl;
		i++;
	}
	*/
	i = 1;
	set<int> resultindex;
	resultindex.insert(0);
	while(i<xnv.size()){
		set<int> result(resultindex);
		int indexa,indexb;
		set<int>::iterator xl = result.begin();
		bool isallsub = false;
		while(xl!=result.end()){
			indexa = indexb = -1;
			if(isSubVec(xnv[i].second,xnv[*xl].second,indexa,indexb)){
				if(indexa==0)
				{
					isallsub = true;
					break;
				}
			}
			xl++;
		}
		if(!isallsub){
			resultindex.insert(i);
		}
		i++;
	}
	set<int>::iterator xxl = resultindex.begin();
	vector<int> g;
	while(xxl!=resultindex.end()){
		g.push_back(xnv[*xxl].first);
		xxl ++;
	}		
	sort(g.begin(),g.end(),cmp);
	i = 0;
	while(i<g.size()-1){
		cout << g[i] << " ";
		i++;
	}	
	cout << g[i] << endl;
	return 0;
}
