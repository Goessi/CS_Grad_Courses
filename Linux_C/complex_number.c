#include <math.h>
#include <stdio.h>

struct complex_struct {
	double x, y;
};

double real_part(struct complex_struct z)
{
	return z.x;
}

double img_part(struct complex_struct z)
{
	return z.y;
}

double magnitude(struct complex_struct z)
{
	return sqrt(z.x * z.x + z.y * z.y);
}

double angle(struct complex_struct z)
{
	return atan2(z.y, z.x);
}

struct complex_struct make_from_real_img(double x, double y)
{
	struct complex_struct z;
	z.x = x;
	z.y = y;
	return z;
}

struct complex_struct make_from_mag_ang(double r, double A)
{
	struct complex_struct z;
	z.x = r * cos(A);
	z.y = r * sin(A);
	return z;
}

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_real_img(real_part(z1) + real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_real_img(real_part(z1) - real_part(z2), img_part(z1) - img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_mag_ang(magnitude(z1) * magnitude(z2), angle(z1) + angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2)
{
	return make_from_mag_ang(magnitude(z1) / magnitude(z2), angle(z1) - angle(z2));
}

void printcomplex(struct complex_struct z)
{
	double real = real_part(z);
	double img = img_part(z);

	if(real != 0.0)
	{
		printf("%f", real);
	}

	if(img == 0.0)
	{
		printf("\n");
	}
	else if(img < 0.0)
	{
		printf("%fi\n", img);
	}
	else
	{
		printf("+%fi\n", img);
	}
}

int main(void)
{
	struct complex_struct z1, z2;
        z1.x = -1.2;
	z1.y = 0;
	z2.x = 2;
	z2.y = -1.9;
        printcomplex(z1);
	printcomplex(z2);
	return 0;
}
