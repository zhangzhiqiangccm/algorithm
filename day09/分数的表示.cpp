//分数的表示和化简
struct Fraction{
	int up;
	int down;
}; 

Fraction reduction(Fraction result){
	if(result.down<0){
		result.down = -result.down;
		result.up = -result.up;
	}
	if (result.up==0){
		result.down = 1;
	}else{
		int d = gcd(abs(result.up),abs(result.down));
		result.up = result.up/d;
		result.down = result.down/d;
	}
	return result;
}

