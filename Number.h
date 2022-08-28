//Tomer Duchovni - 315531053
//Yovel Gavrieli - 207230343

#pragma once

#include "Expression.h"

class Number: public Expression
{
public:
	Number(double val) : value(val) {}
	~Number() {}
	double calculate()
	{
		return value;
	}
	
private:
	double value;
};
