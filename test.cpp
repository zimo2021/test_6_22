#include<iostream>
using namespace std;
//�������������
//class myinteger
//{
//public:
//	myinteger()
//	{
//		m_a = 0;//��ʼ��
//	}
//	//ǰ��++
//	//myinteger& operator++()//����������Ϊ��һֱ����ͬһ�����ݣ�����᷵��һ�����Ƶ��µ�Ԫ��
//	//{
//	//	m_a++;
//	//	return *this;//�ɹ�
//	//}
//	//����++
//	myinteger operator++(int)//���ܷ���myintrger����ΪtmpΪ�ֲ����������ܷ�������ֵ���������  intΪռλ����������������ǰ�úͺ���++������̫��ռλ���������ã�
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
//	//cout << p << endl;//1�ɹ�
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
//		m_a = 0;//��ʼ��
//	}
//
//	//ǰ��--
//	myinteger& operator--()//����������Ϊ��һֱ����ͬһ�����ݣ�����᷵��һ�����Ƶ��µ�Ԫ��
//	{
//		m_a--;
//		return *this;//�ɹ�
//	}
//	//����--
//	myinteger operator--(int)//���ܷ���myintrger����ΪtmpΪ�ֲ����������ܷ�������ֵ��������� 
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
//	//cout << p << endl;//-1�ɹ�
//	cout << p-- << endl;
//	cout << p << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//��ֵ���������
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
//	cout << "p1=" << *p1.m_a << endl;//ϵͳ��������Ϊͬһ���ڴ��ͷ�������
//	cout << "p2=" << *p2.m_a << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//ʹ�ø�ֵ������Ľ�
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
//		//�ȼ�鱻��ֵ��Ԫ���Ƿ�ռ���ڴ�  ����� �����
//		if (this->m_a != NULL)
//		{
//			delete this->m_a;
//			m_a = NULL;
//		}
//		this->m_a = new int(*(p.m_a));
//		return *this;//���������Ȳ���
//	}
//	int* m_a;
//};
//void test()
//{
//	person p1(10), p2(0);
//	p2 = p1;
//	cout << "p1=" << *p1.m_a << endl;//������
//	cout << "p2=" << *p2.m_a << endl;
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//��ϵ���������
//���ã��Ա��Զ�������
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
//		cout << "p1��p2���" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�����" << endl;//�ɹ���
//
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//�����������������
//#include<string>
//class myprint
//{
//public:
//	void operator()(string String)//�൱�ڽ�()����
//	{
//		cout << String << endl;
//	}
//};
//class myadd
//{
//public:
//	int operator()(int x, int y)//����ֽзº���
//	{
//		return x + y;
//	}
//};
//void test()
//{
//	myprint p1;//�����ڶ����ʱ��ֵ ��myprint p1("hello world");  ��������
//	p1("hello world");//hello world��ӡ�ɹ�
//	//������봴������  ����������������
//	myprint()("hello world");//hello world
//	myadd p;
//	int ret = p(10, 20);
//	cout << ret << endl;//30 �ɹ�
//	cout << myadd()(10, 20) << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//��������������������������������������������������������������������
//�̳�
//�̳е����ƣ��������ƾ��Ǽ����ظ�����
/*
�﷨��class ���ࣺ�̳з�ʽ����public�ȣ� ����
���������ֽ���������
�����ֽ�������
*/
//����չʾ
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "�����ǹ���ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ǹ���β��" << endl;
//	}
//};
//class Java :public basepage//����Ӧ�õľ��Ǽ̳�  �̳���basepage�е�Ԫ��
//{
//public:
//	void content()
//	{
//		cout << "Javaѧϰ����" << endl;
//	}
//};
//class Cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧϰ����" << endl;
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
//�̳е����ַ�ʽ
//���м̳У�public��  �����̳�(protected)  ˽�м̳�(private)
/*
����
�����е�˽��Ȩ�� �������ּ̳з�ʽ�������Լ̳�
����Ȩ�� ����ǹ���Ȩ�޼̳� ��Ӹ����м̳еĶ���Ȩ�޲���  ԭ����public ����public ԭ����protected����protected
����Ǳ����̳� ��Ӹ����м̳еĶ���ȫ����Ϊ����Ȩ��  �����˽�м̳� ��Ӹ����м̳еĶ���ȫ����Ϊ˽��Ȩ�� 
*/
//����չʾ
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
//		m_a = 10;//�̳й�����Ȼ��publicȨ��
//		m_b = 10;//�̳й�����Ȼ��protectedȨ��
//		//m_c = 10;//���ɷ���  û�̳й���
//	}
//};
//
//class son2 :protected Father
//{
//	void func()
//	{
//		m_a = 10;//�̳й�����protectedȨ��
//		m_b = 10;//�̳й�����protectedȨ��
//		//m_c = 10;//���ɷ���  û�̳й���
//	}
//};
//
//class son3 :private Father
//{
//	void func()
//	{
//		m_a = 10;//�̳й�����privateȨ��
//		m_b = 10;//�̳й�����privateȨ��
//		//m_c = 10;//���ɷ���  û�̳й���
//	}
//};
//
//void test()
//{
//	son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 20;//���ɷ���  ��publicȨ��
//	son2 s2;
//	//s2.m_a = 10;//���ɷ���  ��publicȨ��
//	son3 s3;
//	//s3.m_a = 10;//���ɷ��� ��privateȨ��
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
//	//Father�е�int m_c �Ǳ��̳��˵� ������������������ ���ܷ��� �����ǵ�ռ���ڴ�
//	//Ҳ�����ÿ�����Ա���߲鿴����ļ̳нṹ������������������Աc++�̳�p129 �̳��еĶ���ģ�ͣ�
//}
//int main()
//{
//	test();
//	return 0;
//}
//�̳��еĹ��������˳��
//class Father
//{
//public:
//	Father()
//	{
//		cout << "����Ĺ���" << endl;
//	}
//	~Father()
//	{
//		cout << "���������" << endl;
//	}
//};
//
//class son :public Father
//{
//public:
//	son()
//	{
//		cout << "����Ĺ���" << endl;
//	}
//	~son()
//	{
//		cout << "���������" << endl;
//	}
//};
//void test()
//{
//	son p;
//	/*
//	�������
//	����Ĺ���
//	����Ĺ���
//	���������
//	���������
//	�ȴ������࣬�ڴ�������  ���������� �����ٸ���
//	*/
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//�̳���ͬ����Ա�Ĵ���ʽ
//class Father
//{
//public:
//	Father()
//	{
//		m_a = 10;
//	}
//	void func()
//	{
//		cout << "Father��func�����ĵ���" << endl;
//	}
//	void func(int x)
//	{
//		cout << "Father��func(int)�����ĵ���" << endl;
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
//		cout << "son��func�����ĵ���" << endl;
//	}
//	int m_a;
//};
//void test()
//{
//	son s;
//	s.func();//son�еĳ�Ա�����ĵ��ã�˵���������ֱ�ӷ��ʵ������Ա����
// //���Ҫ���ø���ͬ����Ա��������Ҫ��������
//	s.Father::func();//Father��func�����ĵ���
//	cout << s.m_a << endl;//20 ��ʹ�������е�ͬ����Ա
//	cout << s.Father::m_a << endl;//10
//	//s.func(10);//���У�������͸�������ͬ����Ա����ʱ����������ظ����е�����ͬ����Ա����  �����൱��func(int)������
//	//���Լ�������������
//	s.Father::func(10);//Father��func(int)�����ĵ���
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}




