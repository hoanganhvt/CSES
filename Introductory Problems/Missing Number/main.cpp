#include<iostream>
using namespace std;
 
bool marker[200001];
int main(){
	int n;
	cin >> n;
	for(int i = 1; i < n;i++){
		int tmp;
		cin >> tmp;
		marker[tmp] = 1;
	}
	int res;
	for(int i = 1;i <= n;i++){
		if(!marker[i]){
			res = i;
			break;
		}
	}
	cout << res << endl;
}