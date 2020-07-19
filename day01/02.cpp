/*
问题描述：组织一场大赛，根据比赛结果统计出某最强学校代表队。 
输入格式：在第一行给出不超过100000的正整数N，即参赛人数。
          随后的N行，每行是一位参赛者的信息和成绩，信息为学校编号（从1开始），比赛成绩百分制，空格分隔。
输出格式：给出总得分最高的学校编号及总分，中间空格分隔。答案唯一，没有并列。   
*/ 
/*思路：1.令数组school[maxn]记录每个学校的总分，初值为0，对每一个读入的学校achID与其对应的分数score。令school[schID]+=score.
        2.变量MAX记录最高总分，变量k记录最高总分的学校编号，不断更新这两个参数。 
*/ 
# include<stdio.h>
const int maxn = 100000;
int school[maxn] = {0};
int main(){
	int n ,schID,score;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&schID,&score);
		school[schID] = school[schID] +score;
	}
	int k =1,MAX = -1;
	for(int i = 0;i<n;i++){
		if(school[i] > MAX){
			MAX = school[i];
			k = i;
		}
	}
	printf("%d %d",k,MAX);
	return 0;
} 
