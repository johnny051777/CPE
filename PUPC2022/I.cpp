//
//
//   題目以紙本為準，系統內題目若有跑版或亂碼，應參酌紙本題目。
//
//
//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
/*
1 2 3 4 5 6 7 8 9
S   L

C o m p u t e r --> Comper
S L S L

1 3 5 7 2 4 6 8 --->
S L     S L 

2 3 3 2 3 4 5 6 10 50 15 42
S L   S L       S  L  S  L   
50 S
51 L
51 L
50 S
51 L
52 L
53 L
54 L
65 L
115 L
73 S
97 L 

987654321


*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	string a;
	int count=0;
	int count2=0;
	int haha=0;
	
	while(cin>>a){
		for(int i=0 ; i<a.length()-1 ; i++){
			if(a[i]>a[i+1] && haha==0){
				haha=1;
				count++;
			}else if(a[i]<a[i+1] && haha==1){
				haha=0;
				count++;
			}
		}
		haha=1;
		for(int i=0 ; i<a.length()-1 ; i++){
			if(a[i]>a[i+1] && haha==0){
				haha=1;
				count2++;
			}else if(a[i]<a[i+1] && haha==1){
				haha=0;
				count2++;
			}
		}
		int max;
		if(count>count2){
			max = count;
		}else{
			max = count2;
		}
		cout<<max+1<<endl;
		count=0;
		count2=0;
		haha=0;
	}

/*
	string a= "ohkaigiW4ziey3";
	int i;
	for(i=0 ; i<a.length() ; i++){
		printf("%d\n",a[i]);
	}
*/
}
