#include<stdio.h>
int firstNumber,secondNumber,sum;
int tinhsum(){
	printf("\nnhap so thu nhat: ");
	scanf("%d",&firstNumber);
	printf("\nnhap so thu hai: ");
	scanf("%d",&secondNumber);
	sum=firstNumber+secondNumber;
	return sum;
}
int main(){
	tinhsum();
	printf("tojng 2 so la: %d",sum);
	return 0;
}
