#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>// �����õ�


Debug    ���Ե��Ե� �ļ������˵�����Ϣ  ���Ҳ����κ��Ż�
Release   ���ܵ���  �������Ż� ʹ�ó����ڴ����С�������ٶȶ������� �����û�ʹ��
//F9 �л��ϵ�
int main() {

	int i = 0;
	for (i = 0; i < 100; i++) {

		printf("%d  ", i);
	}
	for (i = 0; i < 100; i++) {

		printf("%d  ", i);
	}
	system("pause");//��ͣ
	return 0;
}





//F5 ��������  ��F9���ʹ��
int main() {

	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++) {

		printf("hehe\n");//Debug  ��ѭ��  ��Ϊ����Խ����
		arr[i] = 0;//Release z���� 
	}

	return 0;
}




int main() {

	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {

		for (i = 0; i < 10; i++) {
			arr[i] = i;
		}
	}

	return 0;
}



��ջ
void rest2() {
	printf("hehe");
}
void rest1() {
	rest2();
}
void rest() {
	rest1();
}
int main() {
	rest();
	return 0;
}



int main() {
	int i = 0;
	int sum = 0;//�������ս��
	int n = 0;
	int ret = 1;//����N�Ľ׳�
	scanf("%d", &n);
	for (i = 1; i <=n; i++) {
		int j = 0;
		//ret = 1;
		for (j = 1; j <= i; j++) {
			ret *= j;
			
		}
		sum += ret;
	}
	printf("%d\n", sum);//3  ���Ϊ9   �������15   ����ԭ����retδ����  ����ret���������

	return 0;
}


#include<string.h>

void My_strcpy(char* arr, char* arr2) {/////////////////////////����ָ�봫��  ����Ҫ����     ����ָ����ղ�Ҫ����
	/*int left = 0;
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	while (left <= sz+1) {
		arr[left] = arr2[left];
		left++;
	}*/


	//while (*arr2!='\0') {
	//	*arr++ = *arr2++;// �Ż�  �Ż� 
	//	/**arr = *arr2;
	//	arr++;
	//	arr2++;*///////////// ָ���Ż���  ����ָ���ƶ�
	//}
	//*arr = *arr2;//����ڿ���'\0'

	if (arr != NULL && arr != NULL) {
		while (*arr++ = *arr2++) {/////�������Ż�    ���ж��ǿ�'\0'=0 Ȼ��Ϊ�� �ͷ���ѭ���� 
			;
		}
	}
}



char* My_strcpy(char* arr, const char* arr2) {// ����const  ���α������ɱ�  Ԥ�����߷ŷ���
	char* ret = arr;
	assert(arr !=NULL);//����  ����Ҫ����ͷ�ļ�  �����õ�
	assert(arr != NULL);
	while (*arr++ = *arr2++) {/////��4���Ż�    ���ж��ǿ�'\0'=0 Ȼ��Ϊ�� �ͷ���ѭ���� 
		;
	}
	return ret;
}

int main() {
	//STRCPY  �ַ�������
	char arr[] = "#######";
	char arr2[] = "Grace";

	//int sz = sizeof(arr2) / sizeof(arr2[0]);
	
	printf("%s\n", My_strcpy(arr, arr2));//Grace  ��ʽ����  ֱ�ӷ��ص�ַ��ӡ ����Ч
	
	return 0;
}



int main() {

	 int num = 10; //2022 �� ����ͨ�������� 2013����
	//const int* p = &num;
	//*p = 20;//const ����*��ߵ�ʱ�� ���ε���*p  Ҳ����˵����ͨ��*p�ı�num��ֵ
	 const int* p = &num;//����*�ұߵ�ʱ�� ���ε���ָ�����*p p���ܱ��ı�
	*p = 20;
	printf("%d\n", num);
	 return 0;
}


 int My_strlen(char* arr) {
	assert(arr != NULL);
	int count = 0;
	while (*arr++ != '\0') {
		count++;
	}
	return count;
}

int main() {

	char arr[] =  "Grace";
	int len = My_strlen(arr);
	printf("%d\n", len);

}



