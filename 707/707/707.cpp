#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>// 断言用的


Debug    可以调试的 文件包含了调试信息  并且不做任何优化
Release   不能调试  进行了优化 使得程序在代码大小和运行速度都是最优 便于用户使用
//F9 切换断点
int main() {

	int i = 0;
	for (i = 0; i < 100; i++) {

		printf("%d  ", i);
	}
	for (i = 0; i < 100; i++) {

		printf("%d  ", i);
	}
	system("pause");//暂停
	return 0;
}





//F5 启动调试  和F9配合使用
int main() {

	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++) {

		printf("hehe\n");//Debug  死循环  因为数组越界了
		arr[i] = 0;//Release z正常 
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



堆栈
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
	int sum = 0;//保存最终结果
	int n = 0;
	int ret = 1;//保存N的阶乘
	scanf("%d", &n);
	for (i = 1; i <=n; i++) {
		int j = 0;
		//ret = 1;
		for (j = 1; j <= i; j++) {
			ret *= j;
			
		}
		sum += ret;
	}
	printf("%d\n", sum);//3  结果为9   但输出是15   错误原因是ret未重置  导致ret结果保存了

	return 0;
}


#include<string.h>

void My_strcpy(char* arr, char* arr2) {/////////////////////////数组指针传参  不需要【】     不是指针接收才要【】
	/*int left = 0;
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	while (left <= sz+1) {
		arr[left] = arr2[left];
		left++;
	}*/


	//while (*arr2!='\0') {
	//	*arr++ = *arr2++;// 优化  优化 
	//	/**arr = *arr2;
	//	arr++;
	//	arr2++;*///////////// 指针优化版  利用指针移动
	//}
	//*arr = *arr2;//最后在拷贝'\0'

	if (arr != NULL && arr != NULL) {
		while (*arr++ = *arr2++) {/////第三次优化    这判断是靠'\0'=0 然后为假 就放弃循环的 
			;
		}
	}
}



char* My_strcpy(char* arr, const char* arr2) {// 加上const  修饰变量不可变  预防两者放反了
	char* ret = arr;
	assert(arr !=NULL);//断言  引用要包括头文件  报错用的
	assert(arr != NULL);
	while (*arr++ = *arr2++) {/////第4次优化    这判断是靠'\0'=0 然后为假 就放弃循环的 
		;
	}
	return ret;
}

int main() {
	//STRCPY  字符串拷贝
	char arr[] = "#######";
	char arr2[] = "Grace";

	//int sz = sizeof(arr2) / sizeof(arr2[0]);
	
	printf("%s\n", My_strcpy(arr, arr2));//Grace  链式访问  直接返回地址打印 更高效
	
	return 0;
}



int main() {

	 int num = 10; //2022 版 不能通过编译了 2013可以
	//const int* p = &num;
	//*p = 20;//const 放在*左边的时候 修饰的是*p  也就是说不能通过*p改变num的值
	 const int* p = &num;//放在*右边的时候 修饰的是指针变量*p p不能被改变
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



