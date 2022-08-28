//Tomer Duchovni - 315531053
//Yovel Gavrieli - 207230343

#pragma once

#include "Expression.h"


class BinaryExpression : public Expression
{
public:
	BinaryExpression() {}
	BinaryExpression(Expression* _left, Expression* _right)
		: left(_left), right(_right)
	{
		if (_left == nullptr || _right == nullptr)
		{
			exit(-1);
		}
	}
	virtual ~BinaryExpression() = 0 {}

protected:

	Expression* get_left() {
		return left;
	}
	Expression* get_right() {
		return right;
	}
	void set_left(Expression* _left) {
		left = _left;
	}
	void set_right(Expression* _right) {
		right = _right;
	}


private:
	Expression* left;
	Expression* right;
};
