#include<iostream>
#include<algorithm>
using namespace std;
 
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x,y;
		cin >> y >> x;
		ll layer = max(x,y);
		ll startNum = 1;
		if(layer>1){
			startNum = 1+(layer-1)*(layer-1);
		}
		ll currentIndex;
		if(layer % 2 == 0){
			if(x >= y){
				currentIndex = y;
			}else{
				currentIndex = 2*layer-x;
			}
		}else{
			if(x <= y){
				currentIndex = x;
			}else{
				currentIndex = 2*layer-y;
			}
		}
		ll res = startNum+currentIndex-1;
		cout << res << endl;
	}
}