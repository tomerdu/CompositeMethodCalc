//Tomer Duchovni - 315531053
//Yovel Gavrieli - 207230343

#include "Minus.h"
#include "Div.h"
#include "Mul.h"
#include "Plus.h"
#include "Number.h"

//using namespace std;

void main() {

	Expression* num10 = new Number(10);
	Expression* num4 = new Number(4);
	Expression* num3 = new Number(3);
	Expression* num2 = new Number(2);

	Expression* minus = new Minus(num3, num4);

	Expression* mul = new Mul(num2,minus);

	Expression* div = new Div(num10, num2);

	Expression* plus = new Plus(div, mul);

	cout << plus->calculate();

	delete num10;
	delete num4;
	delete num3;
	delete num2;
	delete minus;
	delete mul;
	delete div;
	delete plus;
}