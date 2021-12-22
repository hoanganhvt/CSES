#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string seq;
	cin >> seq;
	int cnt = 1;
	int maxL = 1;
	for(int i = 1; i < seq.length();i++){
		if(seq[i] == seq[i-1]){
			cnt++;
		}else{
			cnt = 1;
		}
		maxL = max(maxL,cnt);
	}
	cout << maxL << endl;
}