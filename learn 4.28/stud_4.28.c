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
//��һ��void ��ʾ�������᷵��ֵ
//�ڶ���void ��ʾ��������Ҫ���κβ���
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
//��ֵ�в�ͬ��ʾ��ʽ
//2����
//8����
//10����
//16����
//ʮ���Ƶ�21
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
//������2���Ʊ�ʾҲ�����ֱ�ʾ��ʽ��
// 1. ����������ԭ�롢���롢������ͬ
// 2. ����������ԭ�롢���롢��������Ҫ�����
//ԭ�룺ֱ��ͨ����������ʽд���Ķ��������о���ԭ��
//���룺ԭ��ķ���λ���䣬����λ��λȡ���õ��ľ��Ƿ���
//���룺����+1���ǲ���
//�����ڴ��д���ǲ���Ķ���������
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
//	10000000000000000000000000001010--ԭ��
//	0x80 00 00 0a
//	11111111111111111111111111110101--����
//	0xfffffff5
//	11111111111111111111111111110110--����
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
//		return 1;//С��
//	}
//	else
//	{
//		return 0;//���
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
//	printf("С��\n");//err
//
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
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
//	11111111111111111111111110000000 - �ض�
//	10000000 - a
//	11111111111111111111111110000000 - ����
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
//	%u - ��ӡ�޷�������
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
//	11111111111111111111111111101100 - -20�Ĳ���
//	
//	unsigned int j = 10;
//	00000000000000000000000000001010
//	printf("%d\n", i + j);
//	11111111111111111111111111101100
//	00000000000000000000000000001010
//	11111111111111111111111111110110 - ����
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
//		Sleep(1000);//����1000����
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
//	//strlen �����ַ����ĳ��ȣ���ע�����ַ�����'\0'������0��֮ǰ���ֶ����ַ�
//
//	return 0;
//}

#include <stdio.h>
unsigned char i = 0;
//unsigned char ���͵�ȡֵ��Χ��0~255
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
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//
//	//1001.0
//	//1.001*2^3
//	//S=0 E=3 M=1.001
//	//[01000001000100000000000000000000]
//	//
//	printf("num��ֵΪ��%d\n", n);//
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.0
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

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		//����������һ��ż����ͣ����
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//����������һ��������ͣ����
		while (((left < right)) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//����������ż��
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
	//����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		//scanf("%d", &arr[i]);
		scanf("%d", arr+i);
	}
	//1 2 3 4 5 6 7 8 9 10
	//����
	move_odd_even(arr, sz);

	//���
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
    int arr1[n];//c99 - �䳤����
    int arr2[m];
    ����n������
    int i= 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    ����m������
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    �ϲ���ӡ
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
//    int arr1[n];//c99 - �䳤����
//    int arr2[m];
//    int arr3[m + n];
//    //����n������
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //����m������
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    �ϲ���ӡ
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
//    //��ӡ
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}
//
