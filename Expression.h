//Tomer Duchovni - 315531053
//Yovel Gavrieli - 207230343

#pragma once

#include <iostream>
using namespace std;

class Expression
{
public:
	Expression() {}
	virtual ~Expression() = 0 {}
	virtual double calculate() = 0 {}

};
