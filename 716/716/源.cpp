#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

////size  -t  就是nusigned int
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "Grace";
//	//strcpy   拷贝
//	strcpy(arr1, arr2);
//	//   目的地  拷贝位置
//
//	return 0;
//}


////strcat  追加
//char* My_strcat(char* dest, const char* src) {//自定义实现strcat
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
//	//strcat(a, b);//目的地的位置必须足够大 能够放下被增加的内容  源头必须要有\0
//	//目的地 添加内容
//	My_strcat(a, b);//自定义实现
//	printf("%s\n", a);
//	strncat(a, a,5);
//
//	return 0;
//}



////strcmp  比较
//int My_strcmp(const char* a1, const char* b2) {//自定义实现
//	assert(a1 && b2);
//	//比较
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
//	//int ret = strcmp(a1, b2);//按阿什玛克值比较
//	int ret = My_strcmp(a1, b2);
//	printf("%d\n", ret);
//	return 0;
//}


//strncpy    strncat  strncmp     字符限制的函数  str(char a,char b, （size t 无符号数 )  
//int main() {
//
//	char arr[10] = "abcdefg";
//	char arr1[] = "Grace";
//	return 0;
//}


//NULL  空指针  ////   Nul  Null  '\0' 
//strstr  查找字符串  
char* My_strstr(const char* p, const char* p1) {//模拟实现strstr
	//assert(p && p1);
	assert(p != NULL);
	assert(p1 != NULL);
	char* s1 =(char*) p;
	char* s2 = (char*)p1;
	char* cur = (char*)p;//防止第一次找不到就退出
	if (*p1 == '\0') {
		return (char*)p1;
	}
	while (*cur) {//进入循环

		s1 = cur;
		s2 = (char*)p1;

		//while (*s1!='\0'&&*s2!='\0'&& *s1 == *s2) {
			while (*s1 && *s2 && !(*s1 - *s2)) {//!逻辑反操作 结果为0 为假 ！号强转为真
			s1++;
			s2++;
		}
			if (!*s2 ) {//逻辑反操作
		//if (*s2 == '\0') {
			return cur;//第一次对比没有第二循环
		}
		cur++;
	}
	return NULL;//找不到的情况
}

int main() {

	const char* p = "abcdefgh";
	const char* p1 = "df";
	//const char* ret = strstr(p, p1);
	const char* ret = My_strstr(p, p1);
	if (ret == NULL) {
		printf("子串不存在");
	}
	else {
		printf("位置是%s\n", ret);
	}

	return 0;
}