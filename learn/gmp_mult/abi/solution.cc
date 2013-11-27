// Will appear on Monday evening
#include <iostream>
#include <stdio.h>
#include <gmp.h>
#include <gmpxx.h>

using namespace std;

void using_cpp_class(void)
{
	mpz_class a, b;
	cin >> a >> b;
	cout << a * b << endl;
}

void using_c_functions(void)
{
	mpz_t a, b, c;

	mpz_init(a);
	mpz_inits(b, c, NULL);

	gmp_scanf("%Zd%Zd", a, b);
	mpz_mul(c, a, b);

	gmp_printf("%Zd\n", c);

	mpz_clear(a);
	mpz_clears(b, c, NULL);
}

int main(void)
{
	// using_cpp_class();
	using_c_functions();
	return 0;
}
