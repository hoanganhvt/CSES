#include<iostream>
using namespace std;
int main(){
	long long cnt = 0;
	int n;
	cin >> n;
	long long arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}
	for(int i = 1; i <  n;i++){
		if(arr[i] < arr[i-1]){
			cnt += (arr[i-1]-arr[i]);
			arr[i] = arr[i-1];
		}
	}
	cout << cnt << endl;
}