#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

////size  -t  ����nusigned int
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "Grace";
//	//strcpy   ����
//	strcpy(arr1, arr2);
//	//   Ŀ�ĵ�  ����λ��
//
//	return 0;
//}


////strcat  ׷��
//char* My_strcat(char* dest, const char* src) {//�Զ���ʵ��strcat
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0') {
//		dest++;
//	}
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//
//int main() {
//	char a[30] = "abcde";
//	char b[] = "Grace";
//	//strcat(a, b);//Ŀ�ĵص�λ�ñ����㹻�� �ܹ����±����ӵ�����  Դͷ����Ҫ��\0
//	//Ŀ�ĵ� �������
//	My_strcat(a, b);//�Զ���ʵ��
//	printf("%s\n", a);
//	strncat(a, a,5);
//
//	return 0;
//}



////strcmp  �Ƚ�
//int My_strcmp(const char* a1, const char* b2) {//�Զ���ʵ��
//	assert(a1 && b2);
//	//�Ƚ�
//	while (*a1 == *b2) {
//		if (a1 == '\0') {
//			return 0;
//	}
//		a1++;
//		b2++;
//	}
//	if (*a1 > *b2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//	}
//
//int main() {
//	
//	const char* a1 = "abcdef";
//	const char* b2 = "abcdef";
//	//int ret = strcmp(a1, b2);//����ʲ���ֵ�Ƚ�
//	int ret = My_strcmp(a1, b2);
//	printf("%d\n", ret);
//	return 0;
//}


//strncpy    strncat  strncmp     �ַ����Ƶĺ���  str(char a,char b, ��size t �޷����� )  
//int main() {
//
//	char arr[10] = "abcdefg";
//	char arr1[] = "Grace";
//	return 0;
//}


//NULL  ��ָ��  ////   Nul  Null  '\0' 
//strstr  �����ַ���  
char* My_strstr(const char* p, const char* p1) {//ģ��ʵ��strstr
	//assert(p && p1);
	assert(p != NULL);
	assert(p1 != NULL);
	char* s1 =(char*) p;
	char* s2 = (char*)p1;
	char* cur = (char*)p;//��ֹ��һ���Ҳ������˳�
	if (*p1 == '\0') {
		return (char*)p1;
	}
	while (*cur) {//����ѭ��

		s1 = cur;
		s2 = (char*)p1;

		//while (*s1!='\0'&&*s2!='\0'&& *s1 == *s2) {
			while (*s1 && *s2 && !(*s1 - *s2)) {//!�߼������� ���Ϊ0 Ϊ�� ����ǿתΪ��
			s1++;
			s2++;
		}
			if (!*s2 ) {//�߼�������
		//if (*s2 == '\0') {
			return cur;//��һ�ζԱ�û�еڶ�ѭ��
		}
		cur++;
	}
	return NULL;//�Ҳ��������
}

int main() {

	const char* p = "abcdefgh";
	const char* p1 = "df";
	//const char* ret = strstr(p, p1);
	const char* ret = My_strstr(p, p1);
	if (ret == NULL) {
		printf("�Ӵ�������");
	}
	else {
		printf("λ����%s\n", ret);
	}

	return 0;
}