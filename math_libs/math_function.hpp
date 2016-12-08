#ifndef MATH_FUNCTION_H
#define MATH_FUNCTION_H

class Math_Function {

	double length_two_points(double x1, double x2, double y1, double y2);
	double angle_cos_rule(double A_this, double B, double C);

	friend class Airfoil;
};

#endif