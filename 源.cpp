#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int add(int a, int b);

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

	//p = &b;    // ����
	//*p = 100;  // ����

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << arr[0] << endl;

	int* p = arr;       // ����������ʾ�׵�ַ
	cout << *p << endl; // �����ã���ӡ�׵�ַ������




































	return 0;
}

//int add(int num1, int num2)
//{
//	return num1 + num2;
//}
