#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

#include<assert.h>

void changeArr(int* a, int size)
{
	assert(a);
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		//从左往右找到第一个偶数
		while (a[left] % 2 != 0)
		{
			left++;
		}

		//从右往左找到第一个奇数
		while (a[right] % 2 == 0)
		{
			right--;
		}
		swap(a[left], a[right]);
	}
}


void TestchangeArr()
{
	int arr[] = { 2, 5, 1, 4, 6, 7, 8, 9, 0, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	changeArr(arr, len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
int main()
{
	TestchangeArr();
	system("pause");
	return 0;
}