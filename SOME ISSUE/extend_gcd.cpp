void gcd_ext(long long int a, long long int b ,long long int &x, long long int &y){
	if(b==0){ /*base case: gcd(a,0) = a => x=1 y=0 */
		x=1;
		y=0;
		return;
	}
	long long int x1, y1;
	gcd_ext(b,a%b,x1,y1);
	x = y1;
	y = x1 - (a/b)*y1;

}

/*計算 ax+by = gcd(a,b) 時 求出x跟y*/
