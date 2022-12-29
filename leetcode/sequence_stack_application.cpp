#include <iostream>
using namespace std;
#define maxsize 100
//编写函数，求后缀式的数值
int op(int a, int b, char op) {//完成a op b的计算
	if ( op == '+')
		return a + b;
	if (op == '-')
		return a - b;
	if (op == '*')
		return a * b;
	else {
		if (b == 0)
		{
			cout<< "error" <<endl;
			return 0;
		}
		else
			return a / b;
	}
}
int com(char op[]) {//后缀式计算函数
	int i, a, b, c;
	int stack[maxsize]; int top = -1;

}