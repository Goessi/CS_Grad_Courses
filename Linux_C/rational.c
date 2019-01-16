#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct rational
{
	int x, y;
};

int get_numerator(struct rational r)
{
	return r.x;
}

int get_denominator(struct rational r)
{
	return r.y;
}

struct rational make_rational(int n, int d)
{
	struct rational r;
	r.x = n;
	r.y = d;
	return r;
}

int eculid(int a, int b)
{
        if(a % b == 0)
                return b;
        else
                return eculid(b, a%b);
}

struct rational add_rational(struct rational a, struct rational b)
{
	int d = get_denominator(a) * get_denominator(b);
	int n1 = get_numerator(a) * get_denominator(b);
	int n2 = get_numerator(b) * get_denominator(a);
	int n = n1 + n2;
	int e = eculid(n, d);
	return make_rational(n/e, d/e);
}

struct rational sub_rational(struct rational a, struct rational b)
{
	int d = get_denominator(a) * get_denominator(b);
	int n1 = get_numerator(a) * get_denominator(b);
	int n2 = get_numerator(b) * get_denominator(a);
	int n = n1 - n2;
	int e = eculid(n, d);
	return make_rational(n/e, d/e);
}

struct rational mul_rational(struct rational a, struct rational b)
{
	int d = get_denominator(a) * get_denominator(b);
	int n = get_numerator(a) * get_numerator(b);
	int e = eculid(n, d);
	return make_rational(n/e, d/e);
}

struct rational div_rational(struct rational a, struct rational b)
{
	int d = get_denominator(a) * get_numerator(b);
	int n = get_numerator(a) * get_denominator(b);
	int e = eculid(n, d);
	return make_rational(n/e, d/e);
}

void print_rational(struct rational r)
{
	int d = get_denominator(r);
	int n = get_numerator(r);

	if((d > 0 && n > 0) || (d < 0 && n < 0))
	{
		if(d != n)
		{
			printf("%d/%d\n", abs(n), abs(d));
		}
		else
		{
			printf("%d\n", 1);
		}
	}
	else if ((d < 0 && n > 0) || (d > 0 && n < 0))
	{
		if(abs(d) != abs(n))
                {
                        printf("-%d/%d\n", abs(n), abs(d));
                }
                else
                {
                        printf("%d\n", 1);
                }
	}
	else
	{
		printf("%d\n", 0);
	}
}

int main(void)
{
	struct rational a = make_rational(1, 8);
	struct rational b = make_rational(-1, 8);
	print_rational(add_rational(a, b));
	print_rational(sub_rational(a, b));
	print_rational(mul_rational(a, b));
	print_rational(div_rational(a, b));
	return 0;
}
