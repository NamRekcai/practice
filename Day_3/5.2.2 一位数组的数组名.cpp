#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main05020201()
{
	//1、可以获取整个数组占用内存空间的大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组所占内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素所占内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组的元素个数为：" << sizeof(arr)/sizeof(arr[0]) << endl;

	//2、可以通过数组名获取到数组首地址
	cout << "数组首地址为：" << (int)arr << endl;
	cout << "数组第一个元素地址为：" << (int) & arr[0] << endl;
	cout << "数组第二个元素地址为：" << (int) & arr[1] << endl;

	//arr = 100;
	return 0;
}