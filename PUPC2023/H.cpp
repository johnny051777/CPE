//記得要long long int否則測資無法通過
//擴張歐肌理得法(extended gcd method)
#include<bits/stdc++.h>

using namespace std;

int gcd(long long int a, long long int b){
	if(a%b==0){
		return b;
	}else{
		return gcd(b,a%b);
	}

}

void gcd_ext(long long int a, long long int b ,long long int &x, long long int &y){
	if(b==0){/*base case: gcd(a,0) = a => x=1 y=0 */
		x=1;
		y=0;
		return ;
	}
	long long int x1, y1;
	gcd_ext(b,a%b,x1,y1);
	x = y1;
	y = x1 - (a/b)*y1;

}
//6 4 x=1 y=-1 --> 4 2
//x a + b y = g --> x=0 y=1
// 

int main(){
	int T;
	long long int a,b;
	long long int x,y;
	cin>>T;
	
	while(T--){
		cin>>a>>b;
		gcd_ext(a,b,x,y);

		cout<<x<<" "<<y<<" "<<gcd(a,b)<<'\n';
	}
	
}
