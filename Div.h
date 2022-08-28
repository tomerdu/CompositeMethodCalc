//Tomer Duchovni - 315531053
//Yovel Gavrieli - 207230343

#pragma once

#include "BinaryExpression.h"


class Div : public BinaryExpression
{
public:
	Div(Expression* lf, Expression* rg)
	{
		set_left(lf);
		set_right(rg);
	}
	~Div() {}
	double calculate()
	{
		if (get_right()->calculate() == 0)
		{
			cout << "can`t divie by zero";
			exit(-1);
		}
		return get_left()->calculate() / get_right()->calculate();
	}
};

