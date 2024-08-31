#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;


//对象的初始化和清理
//class Person
//{
//public:
//	int age;
//public:
//	//1.构造函数：进行初始化操作
//	Person()//没有返回值，不用写void；函数名与类名相同；可以有参数，可以发生重载；创建对象时，构造函数会自动调用，且只调用一次
//	{
//		cout << "无参构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "有参构造函数的调用" << endl;
//	}
//	Person(const Person &p)//拷贝即复制:const,&引用
//	{
//		age = p.age;//将传入的人身上的所有属性，拷贝到我身上
//		cout << "拷贝构造函数的调用" << endl;
//	}
//	//2.析构函数：进行清理操作
//	~Person()//没有返回值，不用写void；函数名与类名相同，在名称前加~；不可以有参数，不可以发生重载；对象在销毁前，会自动调用析构函数，且只调用一次
//	{
//		cout << "析构函数的调用" << endl;
//	}
//};
//
////构造和析构都是必须有的实现，如果我们不提供，编译器会提供一个空实现的构造和析构
//void test01()
//{
//	//Person p1;//括号法，默认构造函数的调用
//	//Person p2(10);//括号法，调用有参构造函数
//	//Person p3(p2);//括号法，调用拷贝构造函数
//	//cout << "p2的年龄：" << p2.age << endl;//10
//	//cout << "p3的年龄：" << p3.age << endl;//10
//	//注意1：调用默认构造函数的时候，不要加()。即Person p1();，编译器会认为这是一个函数的声明，不会认为在创建对象
//
//	//Person p1;
//	//Person p2 = Person(10);//显示法，调用有参构造函数
//	//Person p3 = Person(p2);//显示法，调用拷贝构造函数
//	//Person(10);//匿名对象，特点：当前执行结束后，系统会立即回收掉匿名对象
//	//cout << "aaaaa" << endl;//依次打印：有参构造函数的调用。析构函数的调用。aaaaa。
//	//注意2：不要利用拷贝构造函数，初始化匿名对象。编译器会认为Person(p3)等价于Person p3;对象声明，出现重定义
//	//Person(p3);
//
//
//	Person p4 = 10;//隐式转换法：相当于 Person p4=Person(10);
//	Person p5 = p4;//拷贝函数调用
//}
//int main()
//{
//	test01();//输出：构造函数的调用，析构函数的调用
//	//Person p;//输出：仅构造函数的调用
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
//		cout << "无参构造函数的调用" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "有参构造函数的调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "拷贝构造函数的调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);//1.使用一个已经创建完毕的对象来初始化一个新对象
//}
//void doWork1(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork1(p);//2.值传递的方式给函数参数传值
//}
//Person doWork2()
//{
//	Person p1;
//	return Person(p1);
//}
//void test03()
//{
//	Person p = doWork2();//3.值方式返回局部对象
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
//		cout << "默认构造函数的调用" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "有参构造函数的调用" << endl;
//	}
//	//Person(const Person& p)
//	//{
//	//	m_age = p.m_age;
//	//	cout << "拷贝构造函数的调用" << endl;
//	//}
//
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//};
//void test01()
//{
//	Person p;
//	p.m_age = 18;
//	Person p2(p);
//	cout << "p2的年龄：" << p2.m_age << endl;
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
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);//堆区开辟数据
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;编译器默认实现
//		m_height = new int(*p.m_height);//深拷贝
//	}
//	~Person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;//析构代码，将堆区开辟数据做释放操作
//			m_height = NULL;
//		}
//		cout << "Person的析构构造函数调用" << endl;
//	}
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄：" << p1.m_age << "身高为：" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2的年龄：" << p2.m_age << "身高为：" << *p2.m_height << endl;
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
	//Person() :m_A(10), m_B(20), m_C(30)//初始化列表初始化属性 //Person p;
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