#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	bool operator==(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
			return true;
		return false;
	}

	{
		if (this->m_Name != p.m_Name && this->m_Age != p.m_Age)
			return true;
		return false;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("孙悟空", 250);
	Person p2("孙悟空", 250);
	Person p3("猪八戒", 250);
	Person p4("孙悟空", 240);

	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}

	if (p1 != p4)
	{
		cout << "p1和p4相等" << endl;
	}
	else
	{
		cout << "p1和p4不相等" << endl;
	}
}

int main()
{
	test01();
	return 0;
}