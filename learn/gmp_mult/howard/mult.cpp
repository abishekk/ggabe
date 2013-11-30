#include <iostream>
#include <gmp.h>
#include <gmpxx.h>

using namespace std;

int main()
{
	mpz_t a, b, c;
	int inta, intb;
	mpz_inits(a, b, c, NULL);
	gmp_scanf("%Zd %Zd", a, b);
	mpz_mul(c, a, b);
	gmp_printf("%Zd\n", c);
	return 0;
}
