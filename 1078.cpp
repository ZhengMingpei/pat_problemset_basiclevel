#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;
	cin.ignore();
	string text;
	getline(cin,text);
	int i ;
	if(s=="C"){
		i = 1;
		char x = text[0];
		int times = 1;
		while(i<text.size()){
			if(times>0){
				if(text[i]==x)
					times++;
				else{
					if(times>1)
						cout << times << x ;
					else
						cout << x;
					x = text[i]; times=1;
				}
			}

			i++;
		}
		if(times>1)
			cout << times << x ;
		else
			cout << x;
	}
	else{
		i = 0;
		int tag_left = 0;
		int tag_right = -1;
		while(i<text.size()){
			if(text[i]>='0'&&text[i]<='9'){
				tag_right = i;
			} else{
				if(tag_right>=tag_left){
					string tmp = text.substr(tag_left,tag_right-tag_left+1);
					int a = atoi(tmp.c_str());
					int j = 0;
					while(j<a){
						cout << text[i];
						j++; } 
				}
				else{
					cout << text[i];
				}
				tag_left = i+1; tag_right = i;
			}
			i++;
		}

	}
	return 0;
}
