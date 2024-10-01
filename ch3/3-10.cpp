#include <iostream>
using namespace std;

class Add {
public:
	int a;
	int b;
	Add();
	setValue(int x, int y);
	calculate();
};

class Sub {
public:
	int a;
	int b;
	Sub();
	setValue(int x, int y);
	calculate();
};

class Mul{
public:
	int a;
	int b;
	Mul();
	setValue(int x, int y);
	calculate();
};

class Div {
public:
	int a;
	int b;
	Div();
	setValue(int x, int y);
	calculate();
};

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	int n1, n2;
	char c;

	cout << "두 정수와 연산자를 입력하세요>>" << endl;
	cin >> n1 >> n2 >> c;

	switch (c) {
	case'+':
		a.setValue(n1, n2);
	case'-':
		s.setValue(n1, n2);
	case'*':
		m.setValue(n1, n2);
	case'/':
		d.setValue(n1, n2);
	}


}

