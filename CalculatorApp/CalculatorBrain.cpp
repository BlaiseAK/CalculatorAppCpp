#include "CalculatorBrain.h"
#include <cmath>

double CalculatorBrain::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '^':
		return pow(x, y);
	case '%':
	{
		int z = static_cast<int>(x) % static_cast<int>(y);
		return static_cast<double>(z);
	}
	default:
		return 0.0;
	}
}
