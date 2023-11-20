#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	float heigt;
	printf("请输入您的身高(英寸)：");
	scanf("%f",&heigt);
	printf("您的身高是%.2f厘米",heigt*2.54); 
	double a=2.34E07;
	printf("%f",a);
	return 0;
	
}
