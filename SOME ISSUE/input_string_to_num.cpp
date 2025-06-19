#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int temp;
	cin>>n;
	cin.ignore();
	
	while(n--){
		string a;
		vector<int> s(0);
		
		int num; //設定接收切割的字串
		getline(cin,a); //先接收整個含有空白的字串
		
		istringstream iss(a); // 字串流 (自動切割空白字串)
		
		while(iss>>num){
			s.push_back(num); // 將切割的字串放進vector裡
		}
		
		
		
	}

}
