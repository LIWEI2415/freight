#include<stdio.h>
#include<math.h>
double up(double a,double b);
double down(double a,double b);
int main()
{
	double I1[31]={0};
	double I2[31]={0};
	I1[0]=log(1.2);
	I2[30]=((1.0/186.0)+(1.0/155.0))/2.0;
	printf("算法A\n");
	for(int i=1;i<=30;i++)
	{
		double j=i;
		I1[i]=up(I1[i-1],j);
		printf("第%d个值为：%f\n",i,I1[i]);
	}
	printf("算法B\n");
	for(int i=29;i>=0;i--)
	{
		double j=i;
		I2[i]=down(I2[i+1],j+1);
		printf("第%d个值为：%f\n",i,I2[i]);
	}
}
double up(double a,double b)
{
	return(-5.0*a+(1.0/b));
}
double down(double a,double b)
{
	return(-a/5.0+1.0/(5.0*b));
}