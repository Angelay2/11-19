#include <stdio.h>
#include <stdlib.h>
int IsLeapYear(int year){
	//�ȷֳ������������
	//��ͨ����
	//��������
	if (year % 100 != 0){
		//��ͨ����
		if (year % 4 == 0){
			return 1;//������
		}
		return 0;//��������
	}
	else{
		//��������
		if (year % 400 == 0){
			return 1;//������
		}
		return 0;//��������
	}
}
int main() {
	int count = 0;
	int i = 1000;
	for (; i <= 2000; i++){
		IsLeapYear(i);
		if (IsLeapYear(i) == 1){
			printf("%d������\n",i);
			count++;
		}
		else{
			printf("%d��������\n",i);
		}
	}
	printf("1000-2000�ﹲ��%d������\n", count);
	system("pause");
	return 0;
}