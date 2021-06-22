#include<iostream>
using namespace std;
//递增运算符重载
//class myinteger
//{
//public:
//	myinteger()
//	{
//		m_a = 0;//初始化
//	}
//	//前置++
//	//myinteger& operator++()//返回引用是为了一直编译同一个数据，否则会返回一个复制的新的元素
//	//{
//	//	m_a++;
//	//	return *this;//成功
//	//}
//	//后置++
//	myinteger operator++(int)//不能返回myintrger，因为tmp为局部变量，不能返回引用值被多次利用  int为占位参数，可用于区分前置和后置++（还不太懂占位参数的作用）
//	{
//		myinteger tmp = *this;
//		m_a++;
//		return tmp;
//	}
//	int m_a;
//};
//ostream& operator<<(ostream& cout,myinteger p)
//{
//	cout << p.m_a;
//	return cout;
//}
//void test()
//{
//	myinteger p;
//	//cout << ++p << endl;//1
//	//cout << p << endl;//1成功
//	cout << (p++)++ << endl;
//	cout << p << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//class myinteger
//{
//public:
//	myinteger()
//	{
//		m_a = 0;//初始化
//	}
//
//	//前置--
//	myinteger& operator--()//返回引用是为了一直编译同一个数据，否则会返回一个复制的新的元素
//	{
//		m_a--;
//		return *this;//成功
//	}
//	//后置--
//	myinteger operator--(int)//不能返回myintrger，因为tmp为局部变量，不能返回引用值被多次利用 
//	{
//		myinteger tmp = *this;
//		m_a--;
//		return tmp;
//	}
//	int m_a;
//};
//ostream& operator<<(ostream& cout, myinteger p)
//{
//	cout << p.m_a;
//	return cout;
//}
//void test()
//{
//	myinteger p;
//	//cout << --p << endl;//-1
//	//cout << p << endl;//-1成功
//	cout << p-- << endl;
//	cout << p << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//赋值运算符重载
//class person
//{
//public:
//	person(int x)
//	{
//		m_a = new int(x);
//	}
//	~person()
//	{
//		if (this->m_a != NULL)
//		{
//			delete this->m_a;
//		}
//	}
//	int* m_a;
//};
//void test()
//{
//	person p1(10), p2(0);
//	p2 = p1;
//	cout << "p1=" << *p1.m_a << endl;//系统崩溃，因为同一块内存释放了两次
//	cout << "p2=" << *p2.m_a << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//使用赋值运算符改进
//class person
//{
//public:
//	person(int x)
//	{
//		m_a = new int(x);
//	}
//	~person()
//	{
//		if (this->m_a != NULL)
//		{
//			delete this->m_a;
//		}
//	}
//	person& operator=(person& p)
//	{
//		//先检查被赋值的元素是否占用内存  如果有 先清除
//		if (this->m_a != NULL)
//		{
//			delete this->m_a;
//			m_a = NULL;
//		}
//		this->m_a = new int(*(p.m_a));
//		return *this;//可以做连等操作
//	}
//	int* m_a;
//};
//void test()
//{
//	person p1(10), p2(0);
//	p2 = p1;
//	cout << "p1=" << *p1.m_a << endl;//可以了
//	cout << "p2=" << *p2.m_a << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//关系运算符重载
//作用：对比自定义类型
//#include<string>
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(person& p)
//	{
//		if (this->m_age == p.m_age&&this->m_name == p.m_name)
//		{
//			return true;
//		}
//		return false;
//	}
//	string m_name;
//	int m_age;
//};
//
//void test()
//{
//	person p1("tom", 18);
//	person p2("tom", 19);
//	if (p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2不相等" << endl;//成功了
//
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//函数调用运算符重载
//#include<string>
//class myprint
//{
//public:
//	void operator()(string String)//相当于将()重载
//	{
//		cout << String << endl;
//	}
//};
//class myadd
//{
//public:
//	int operator()(int x, int y)//这个又叫仿函数
//	{
//		return x + y;
//	}
//};
//void test()
//{
//	myprint p1;//不能在定义的时候赋值 如myprint p1("hello world");  这样不行
//	p1("hello world");//hello world打印成功
//	//如果不想创建对象  可以利用匿名对象
//	myprint()("hello world");//hello world
//	myadd p;
//	int ret = p(10, 20);
//	cout << ret << endl;//30 成功
//	cout << myadd()(10, 20) << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//——————————————————————————————————
//继承
//继承的优势：最大的优势就是减少重复代码
/*
语法：class 子类：继承方式（如public等） 父类
其中子类又叫做派生类
父类又叫做基类
*/
//代码展示
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "这里是公共头部" << endl;
//	}
//	void footer()
//	{
//		cout << "这里是公共尾部" << endl;
//	}
//};
//class Java :public basepage//这里应用的就是继承  继承了basepage中的元素
//{
//public:
//	void content()
//	{
//		cout << "Java学习内容" << endl;
//	}
//};
//class Cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "C++学习内容" << endl;
//	}
//};
//void test()
//{
//	Java j;
//	j.header();
//	j.footer();
//	j.content();
//	cout << "+++++++++++++++++++++++" << endl;
//	Cpp p;
//	p.header();
//	p.footer();
//	p.content();
//	cout << "+++++++++++++++++++++++" << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//继承的三种方式
//公有继承（public）  保护继承(protected)  私有继承(private)
/*
规则
父类中的私有权限 无论哪种继承方式都不可以继承
其余权限 如果是公有权限继承 这从父类中继承的东西权限不变  原来是public 还是public 原来是protected还是protected
如果是保护继承 则从父类中继承的东西全部变为保护权限  如果是私有继承 则从父类中继承的东西全部变为私有权限 
*/
//代码展示
//class Father
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son1 :public Father
//{
//	void func()
//	{
//		m_a = 10;//继承过来依然是public权限
//		m_b = 10;//继承过来依然是protected权限
//		//m_c = 10;//不可访问  没继承过来
//	}
//};
//
//class son2 :protected Father
//{
//	void func()
//	{
//		m_a = 10;//继承过来是protected权限
//		m_b = 10;//继承过来是protected权限
//		//m_c = 10;//不可访问  没继承过来
//	}
//};
//
//class son3 :private Father
//{
//	void func()
//	{
//		m_a = 10;//继承过来是private权限
//		m_b = 10;//继承过来是private权限
//		//m_c = 10;//不可访问  没继承过来
//	}
//};
//
//void test()
//{
//	son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 20;//不可访问  是public权限
//	son2 s2;
//	//s2.m_a = 10;//不可访问  是public权限
//	son3 s3;
//	//s3.m_a = 10;//不可访问 是private权限
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//class Father
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son :public Father
//{
//public:
//	int m_d;
//};
//void test()
//{
//	cout << sizeof(son) << endl;//16
//	//Father中的int m_c 是被继承了的 不过被编译器隐藏了 不能访问 但还是得占用内存
//	//也可以用开发人员工具查看具体的继承结构（具体操作见黑马程序员c++教程p129 继承中的对象模型）
//}
//int main()
//{
//	test();
//	return 0;
//}
//继承中的构造和析构顺序
//class Father
//{
//public:
//	Father()
//	{
//		cout << "父类的构造" << endl;
//	}
//	~Father()
//	{
//		cout << "父类的析构" << endl;
//	}
//};
//
//class son :public Father
//{
//public:
//	son()
//	{
//		cout << "子类的构造" << endl;
//	}
//	~son()
//	{
//		cout << "子类的析构" << endl;
//	}
//};
//void test()
//{
//	son p;
//	/*
//	输出如下
//	父类的构造
//	子类的构造
//	子类的析构
//	父类的析构
//	先创建父类，在创建子类  先销毁子类 在销毁父类
//	*/
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//继承中同名成员的处理方式
//class Father
//{
//public:
//	Father()
//	{
//		m_a = 10;
//	}
//	void func()
//	{
//		cout << "Father中func函数的调用" << endl;
//	}
//	void func(int x)
//	{
//		cout << "Father中func(int)函数的调用" << endl;
//	}
//	int m_a;
//};
//class son :public Father
//{
//public:
//	son()
//	{
//		m_a = 20;
//	}
//	void func()
//	{
//		cout << "son中func函数的调用" << endl;
//	}
//	int m_a;
//};
//void test()
//{
//	son s;
//	s.func();//son中的成员函数的调用，说明子类对象直接访问到子类成员函数
// //如果要调用父类同名成员函数，则要加作用域
//	s.Father::func();//Father中func函数的调用
//	cout << s.m_a << endl;//20 先使用子类中的同名成员
//	cout << s.Father::m_a << endl;//10
//	//s.func(10);//不行，当子类和父类中由同名成员函数时，子类会隐藏父类中的所有同名成员函数  所以相当于func(int)不存在
//	//可以加作用域来调用
//	s.Father::func(10);//Father中func(int)函数的调用
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}




