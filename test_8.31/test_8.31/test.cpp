#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;


//����ĳ�ʼ��������
//class Person
//{
//public:
//	int age;
//public:
//	//1.���캯�������г�ʼ������
//	Person()//û�з���ֵ������дvoid����������������ͬ�������в��������Է������أ���������ʱ�����캯�����Զ����ã���ֻ����һ��
//	{
//		cout << "�޲ι��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//	Person(const Person &p)//����������:const,&����
//	{
//		age = p.age;//������������ϵ��������ԣ�������������
//		cout << "�������캯���ĵ���" << endl;
//	}
//	//2.���������������������
//	~Person()//û�з���ֵ������дvoid����������������ͬ��������ǰ��~���������в����������Է������أ�����������ǰ�����Զ�����������������ֻ����һ��
//	{
//		cout << "���������ĵ���" << endl;
//	}
//};
//
////������������Ǳ����е�ʵ�֣�������ǲ��ṩ�����������ṩһ����ʵ�ֵĹ��������
//void test01()
//{
//	//Person p1;//���ŷ���Ĭ�Ϲ��캯���ĵ���
//	//Person p2(10);//���ŷ��������вι��캯��
//	//Person p3(p2);//���ŷ������ÿ������캯��
//	//cout << "p2�����䣺" << p2.age << endl;//10
//	//cout << "p3�����䣺" << p3.age << endl;//10
//	//ע��1������Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()����Person p1();������������Ϊ����һ��������������������Ϊ�ڴ�������
//
//	//Person p1;
//	//Person p2 = Person(10);//��ʾ���������вι��캯��
//	//Person p3 = Person(p2);//��ʾ�������ÿ������캯��
//	//Person(10);//���������ص㣺��ǰִ�н�����ϵͳ���������յ���������
//	//cout << "aaaaa" << endl;//���δ�ӡ���вι��캯���ĵ��á����������ĵ��á�aaaaa��
//	//ע��2����Ҫ���ÿ������캯������ʼ���������󡣱���������ΪPerson(p3)�ȼ���Person p3;���������������ض���
//	//Person(p3);
//
//
//	Person p4 = 10;//��ʽת�������൱�� Person p4=Person(10);
//	Person p5 = p4;//������������
//}
//int main()
//{
//	test01();//��������캯���ĵ��ã����������ĵ���
//	//Person p;//����������캯���ĵ���
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	int m_age;
//public:
//	Person()
//	{
//		cout << "�޲ι��캯���ĵ���" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "�������캯���ĵ���" << endl;
//	}
//
//	~Person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//}
//void doWork1(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork1(p);//2.ֵ���ݵķ�ʽ������������ֵ
//}
//Person doWork2()
//{
//	Person p1;
//	return Person(p1);
//}
//void test03()
//{
//	Person p = doWork2();//3.ֵ��ʽ���ؾֲ�����
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	int m_age;
//public:
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//	//Person(const Person& p)
//	//{
//	//	m_age = p.m_age;
//	//	cout << "�������캯���ĵ���" << endl;
//	//}
//
//	~Person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//};
//void test01()
//{
//	Person p;
//	p.m_age = 18;
//	Person p2(p);
//	cout << "p2�����䣺" << p2.m_age << endl;
//}
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);//������������
//		cout << "Person���вι��캯������" << endl;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person�Ŀ������캯������" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;������Ĭ��ʵ��
//		m_height = new int(*p.m_height);//���
//	}
//	~Person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;//�������룬�����������������ͷŲ���
//			m_height = NULL;
//		}
//		cout << "Person���������캯������" << endl;
//	}
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1�����䣺" << p1.m_age << "���Ϊ��" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2�����䣺" << p2.m_age << "���Ϊ��" << *p2.m_height << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

class Person
{
public:
	//Person(int a, int b, int c)//Person p(10, 20, 30);
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	int m_A;
	int m_B;
	int m_C;
	//Person() :m_A(10), m_B(20), m_C(30)//��ʼ���б��ʼ������ //Person p;
	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}
};
void test01()
{
	//Person p(10, 20, 30);
	//Person p;
	Person p(30,20,10);
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	cout << "m_C=" << p.m_C << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}