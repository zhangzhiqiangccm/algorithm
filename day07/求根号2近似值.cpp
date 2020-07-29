/*���ַ��ı��塪���������2�Ľ���ֵ*/
const double eps = 1e-5;
double f(double x){
	return x*x;
}
double calsqrt(){
	double left = 1;
	double right =2 ;
	double mid;
	while(right -left>eps){
		mid = (left+right)/2;
		if(f(mid) > 2){
			right = mid;
		} else{
			left = mid;
		}
	}
	return mid;
}
