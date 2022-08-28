//Tomer Duchovni - 315531053
//Yovel Gavrieli - 207230343

#pragma once

#include "BinaryExpression.h"


class Minus : public BinaryExpression
{
public:
	Minus(Expression* lf, Expression* rg)
	{
		set_left(lf);
		set_right(rg);
	}
	~Minus() {}
	double calculate()
	{
		return get_left()->calculate() - get_right()->calculate();
	}
};

