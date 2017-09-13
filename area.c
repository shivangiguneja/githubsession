#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float s;
	float y,area;
	printf("enter the sides of triangle a,b,c\n");
	scanf("%d %d %d", &a,&b,&c);
	s=(a+b+c)/2;
	printf("%f", s);
	area=pow (s*(s-a)*(s-b)*(s-c), 0.5);
	//area=pow(y,0.5);
	printf("area of triangle is %f\n", area);
	return(0);
	
} 
