//分数的输出
void showResult(Fraction r){
	r = reduction(r);
	if(r.down ==1) printf("%lld",r.up);
	else if(abs(r.up) >r.down){
		printf("%d %d/%d",r.up/r.down,abs(r.up)%r,down,r.down);
	
	}else{
		printf("%d/%d",r.up,r.down);
	}
} 
