// Length.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
using namespace std;
class CLength
{
private:
	int feet1;
	int feet2;
	int feet3;
	double inch1;
	double inch2;
	double inch3;
public:
	CLength()
	{
		feet1 = 0;
		inch1 = 0;
		feet2 = 0;
		inch2 = 0;
		feet3 = 0;
		inch2 = 0;
	}
	void setvalue(int a, int b)
	{
		feet1 = a;
		inch1 = b;
	}
	int conversion(double meter)
	{
		double sub;
		double i;
		sub = meter*3.2808399;
		feet2 = (int)sub;
		i = (double)sub - (int)sub;
		inch2 = i * 12;
		return 0;
	}
	int sum()
	{
		int j;
		feet3 = feet2 + feet1;
		inch3 = inch2 + inch1;
		if (inch3 >= 12)
		{
			j = (int)inch3 / 12;
			feet3 = feet3 + j;
			inch3 = inch3 - j * 12;
		}
		return 0;
	}
	void display()
	{
		cout << feet3 << " feet " << inch3 << " inch " << endl;
	}
};
int main()
{
	CLength od;
	double m;
	int a;
	int b;
	cin >> m >> a >> b;
	od.conversion(m);
	od.setvalue(a, b);
	od.sum();
	od.display();
	return 0;
}