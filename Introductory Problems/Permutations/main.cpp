#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 1 << endl;
	}else if(n <= 3){
		cout << "NO SOLUTION\n";
	}else{
		string base = "3 1 4 2";
		if(n == 4){
			cout << base << endl;
		}else{
			for(int i = (n%2 == 0) ? n : n-1; i > 4;i-=2){
				cout << i << " ";
			}
			cout << base << " ";
			for(int i = (n%2 != 0) ? n : n-1;i > 3;i -= 2){
				cout << i << " ";
			}
			cout << endl;
		}
	}
}