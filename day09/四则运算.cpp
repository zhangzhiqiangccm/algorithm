//分数的四则运算
//加法
Fraction add(Fraction f1,Fraction f2){
	Fraction result;
	result.up = f1.up*f2.down + f1.down*f2.up;
	result.down = f1.down*f2.down;
	return reduction(result);
} 

//减法
Fraction minu(Fraction f1,Fraction f2){
	Fraction result;
	result.up = f1.up*f2.down-f1.down*f2.up;
	result.down = f1.down*f2.down;
	return reduction(result);
} 

//乘法
Fraction multi(Fraction f1,Fraction f2){
	Fraction result;
	result.down = f1.down*f2.down;
	result.up = f1.up*f2.up;
	return reduction(result);
} 

//除法
Fraction divide(Fraction f1,Fraction f2){
	Fraction result;
	result.up = f1.up*f2.down;
	result.down = f1.down*f2.up;
	return reduction(result); 
} 
