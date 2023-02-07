#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void swap1(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void swap2(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void BubbleSort(int* arr,int size)
{
	for (int i = 0; i < size-1; i++) // 外层循环，次数-1
	{
		for (int j = 0; j < size - i - 1; j++)//内层循环，逐渐减少
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	/*int a = 5;
	int b = 6;
	int sum = add(a, b);
	cout << sum << endl;*/

	/*int* p = NULL;
	*p = 100;*/

	/*int* p = (int*)0x1110;
	*p = 20;
*/

	//int a = 20;
	//int b = 10;
	//const int* p = &a;
	////p = &b;
	////*p = 100;

	//p = &b;    // 不行
	//*p = 100;  // 不行

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout << arr[0] << endl;

	//int* p = arr;       // 数组名即表示首地址
	//cout << *p << endl; // 解引用，打印首地址的数据
	//p++;				// 地址向后移动4个字节，即到第二个数据

	//int num1 = 10;
	//int num2 = 20;
	//swap1(num1, num2);
	//swap2(&num1, &num2);

	int arr[10] = { 4, 3, 6, 9, 1, 2, 10 , 8, 7, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << endl;
	BubbleSort(arr,size);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";

	return 0;
}

//int add(int num1, int num2)
//{
//	return num1 + num2;
//}
