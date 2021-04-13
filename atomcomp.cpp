#include <iostream>
#include <math.h>
using namespace std;

#define rep(i,n)	for(int i=0; i<n; i++)
#define ll long long

int count_num(int n){
	int ans=0;
	while(n!=0){
		ans++;
		n/=10;
	}
	return ans;
}
 
bool check_odd(int n){
	int num=0, ini = n;
	while(n!=0){
		int c = n/10;
		if(c%2!=0) num++;
		n/=10;
	}
	num++;
	if(num == count_num(ini) && ini%2!=0) return true;
	else return false;
}

int main(){
	
	ll n;
	cin>>n;
	ll max = n, low = n;
	while(check_odd(max) == false){
		max++;
	}
	while(check_odd(low) == false){
		low--;
	}
	int a1, a2;
	a1 = abs(low - n);
	a2 = abs(max - n);
	if(a1 > a2) cout<<a2;
	else cout<<a1;
	
return 0;
}
