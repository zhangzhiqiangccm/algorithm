/*ËØÊıµÄÅĞ¶Ï*/
bool isPrime(int n){
	if(n <=1 )  return false;
	int sqr = (int)sqrt(1.0*n);
	for(int i=2;i<= sqrt;i++){
		if(n%i ==0) return false;
	}
	return true;
} 
