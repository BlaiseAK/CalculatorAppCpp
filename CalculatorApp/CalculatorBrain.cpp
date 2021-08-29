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
	default:
		return 0.0;
	}
}
