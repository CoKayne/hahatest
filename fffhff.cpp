#include <iostream>
#include <algorithm>
using namespace std;

#define rep(i,n)	for(int i=0; i<n; i++)

struct words{
	string name;
	int val;
};

bool cmp(words a, words b){
	return a.val>b.val;
}

int main (){

	int n;
	cin>>n;
	words w[n];
	rep(u,n){
		cin>>w[u].name;
		string gg = w[u].name;
		int num[26]={0}, ans = 0, l = gg.size();
		rep(i,l) num[(int)(w[u].name)[i] - 65] ++;
		rep(i,26){
			if(num[i] > 1) num[i] = 1;
		}
		rep(i,26) ans+=num[i];
		w[u].val = ans;
	}
	sort(w, w+n, cmp);
	cout<<w[n-1].name;
	
return 0;
}

