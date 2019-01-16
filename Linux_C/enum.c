#include <stdio.h>
#include <math.h>
#include <stdlib.h>

enum coordinate_type{ RECTANGULAR, POLAR };
struct complex_struct {
	enum coordinate_type t;
	double a, b;
};

struct complex_struct make_from_real_img(double x, double y)
{
	struct complex_struct z;
	z.t = RECTANGULAR;
	z.a = x;
	z.b = y;
	return z;
}

struct complex_struct make_from_mag_ang(double r, double A)
{
	struct complex_struct z;
	z.t = POLAR;
	z.a = r * cos(A);
	z.b = r * sin(A);
	return z;
}

double real_part(struct complex_struct z)
{
	return z.a;
}

double img_part(struct complex_struct z)
{
	return z.b;
}

double magnitude(struct complex_struct z)
{
	return sqrt(pow(z.a, 2) + pow(z.b, 2));
}

double angle(struct complex_struct z)
{
	return atan2(z.a, z.b);
}

