#include <stdio.h>
#include <stdlib.h>
int IsLeapYear(int year){
	//先分成来拿两种情况
	//普通闰年
	//世纪闰年
	if (year % 100 != 0){
		//普通闰年
		if (year % 4 == 0){
			return 1;//是闰年
		}
		return 0;//不是闰年
	}
	else{
		//世纪闰年
		if (year % 400 == 0){
			return 1;//是闰年
		}
		return 0;//不是闰年
	}
}
int main() {
	int count = 0;
	int i = 1000;
	for (; i <= 2000; i++){
		IsLeapYear(i);
		if (IsLeapYear(i) == 1){
			printf("%d是闰年\n",i);
			count++;
		}
		else{
			printf("%d不是闰年\n",i);
		}
	}
	printf("1000-2000里共有%d个闰年\n", count);
	system("pause");
	return 0;
}