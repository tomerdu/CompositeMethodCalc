//Tomer Duchovni - 315531053
//Yovel Gavrieli - 207230343

#pragma once

#include "BinaryExpression.h"


class Mul : public BinaryExpression
{
public:
	Mul(Expression* lf, Expression* rg)
	{
		set_left(lf);
		set_right(rg);
	}
	~Mul() {}
	double calculate()
	{
		return get_left()->calculate() * get_right()->calculate();
	}
};

