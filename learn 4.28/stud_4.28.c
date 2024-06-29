#define _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	/*for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//
//	return 0;
//}
//
//
//
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//
//第一个void 表示函数不会返回值
//第二个void 表示函数不需要传任何参数
//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//void* q;
//int* p;
//
//数值有不同表示形式
//2进制
//8进制
//10进制
//16进制
//十进制的21
//0b10101
// 
//025
// 
//21
// 
//0x15
//
//
//
//整数的2进制表示也有三种表示形式：
// 1. 正的整数，原码、反码、补码相同
// 2. 负的整数，原码、反码、补码是需要计算的
//原码：直接通过正负的形式写出的二进制序列就是原码
//反码：原码的符号位不变，其他位按位取反得到的就是反码
//补码：反码+1就是补码
//整数内存中存放是补码的二进制序列
//
//
//int main()
//{
//	int a = 20;
//	20
//	00000000000000000000000000010100
//	0x00 00 00 14
//	00000000000000000000000000010100
//	00000000000000000000000000010100
//	
//	int b = -10;
//	10000000000000000000000000001010--原码
//	0x80 00 00 0a
//	11111111111111111111111111110101--反码
//	0xfffffff5
//	11111111111111111111111111110110--补码
//	0xfffffff6
//	
//	return 0;
//}
//
//
//
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	printf("小端\n");//err
//
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	char -128~127
//	char a = -128;
//
//	10000000000000000000000010000000
//	11111111111111111111111101111111
//	11111111111111111111111110000000 - 截断
//	10000000 - a
//	11111111111111111111111110000000 - 提升
//	
//	printf("%u\n", a);
//	printf("%d\n", a);
//	11111111111111111111111110000000
//	10000000000000000000000001111111
//	10000000000000000000000010000000
//	-128
//
//	
//	
//	%u - 打印无符号整数
//	
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	-128~127
//	char a = 128;
//	00000000000000000000000010000000
//	10000000 - a
//	printf("%u\n", a);
//	printf("%d\n", a);//-128
//
//	10000000
//	11111111111111111111111110000000
//	10000000000000000000000001111111
//	10000000000000000000000010000000
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int i = -20;
//	10000000000000000000000000010100
//	11111111111111111111111111101011
//	11111111111111111111111111101100 - -20的补码
//	
//	unsigned int j = 10;
//	00000000000000000000000000001010
//	printf("%d\n", i + j);
//	11111111111111111111111111101100
//	00000000000000000000000000001010
//	11111111111111111111111111110110 - 补码
//	10000000000000000000000000001001
//	10000000000000000000000000001010 -> -10
//	
//	return 0;
//}


#include <stdio.h>
#include <windows.h>


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//休眠1000毫秒
//	}
//
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//
//	//arr[i] --> char   -128~127
//	//-1 -2 -3 -4 ... -1000
//	//-1 -2 ... -128 127 126 125 .. 3 2 1 0 -1 ...
//	//128+127 = 255
//	printf("%d", strlen(a));//255
//	//strlen 是求字符串的长度，关注的是字符串中'\0'（数字0）之前出现多少字符
//
//	return 0;
//}

#include <stdio.h>
unsigned char i = 0;
//unsigned char 类型的取值范围是0~255
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//
#include <assert.h>
#include <string.h>
//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	//size_t -> unsigned int
//	//
//	if ((int)strlen("abc") - (int)strlen("abcdef")>0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}


//
//int main()
//{
//	int n = 9;
//	//[00000000000000000000000000001001]
//	//0 00000000 00000000000000000001001
//	//E=-126
//	//M=0.00000000000000000001001
//	//+ 0.00000000000000000001001* 2^-126
//	//
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//
//	//1001.0
//	//1.001*2^3
//	//S=0 E=3 M=1.001
//	//[01000001000100000000000000000000]
//	//
//	printf("num的值为：%d\n", n);//
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//	return 0;
//}
//



//int main()
//{
//	float f = 5.5f;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2
//	//0 10000001 01100000000000000000000
// //(-1)^0 * 1.01100000000000000000000 * 2^2
//	//0x40 b0 00 00
//	//2+127 =129
//	return 0;
//}

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		//从左向右找一个偶数，停下来
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右向左找一个奇数，停下来
		while (((left < right)) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//交换奇数和偶数
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	//输入
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		//scanf("%d", &arr[i]);
		scanf("%d", arr+i);
	}
	//1 2 3 4 5 6 7 8 9 10
	//调整
	move_odd_even(arr, sz);

	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



#include <stdio.h>
/*
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];//c99 - 变长数组
    int arr2[m];
    输入n个整数
    int i= 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    输入m个整数
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    合并打印
    int j = 0;
    int k = 0;
    while(j<n && k<m)
    {
        if(arr1[j] < arr2[k])
        {
            printf("%d ", arr1[j]);
            j++;
        }
        else
        {
            printf("%d ", arr2[k]);
            k++;
        }
    }
    if(j<n)
    {
        for(; j<n; j++)
        {
            printf("%d ", arr1[j]);
        }
    }
    else
    {
        for(; k<m; k++)
        {
            printf("%d ", arr2[k]);
        }
    }

    return 0;
}
*/



#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n];//c99 - 变长数组
//    int arr2[m];
//    int arr3[m + n];
//    //输入n个整数
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //输入m个整数
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    合并打印
//    int j = 0;
//    int k = 0;
//    int r = 0;
//    while (j < n && k < m)
//    {
//        if (arr1[j] < arr2[k])
//        {
//            arr3[r++] = arr1[j];
//            j++;
//        }
//        else
//        {
//            arr3[r++] = arr2[k];
//            k++;
//        }
//    }
//    if (j < n)
//    {
//        for (; j < n; j++)
//        {
//            arr3[r++] = arr1[j];
//        }
//    }
//    else
//    {
//        for (; k < m; k++)
//        {
//            arr3[r++] = arr2[k];
//        }
//    }
//    //打印
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}
//
