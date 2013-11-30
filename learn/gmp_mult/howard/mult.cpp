#include <iostream>
#include <gmp.h>
#include <gmpxx.h>

using namespace std;

int main()
{
	mpz_t a, b, c;
	int inta, intb;
	cin >> inta >> intb;
//	cout << "initializing \n";
	mpz_init_set_ui(a, inta);
	mpz_init_set_ui(b, intb);
//	cout << "multiplying\n";
	mpz_init(c);
	mpz_mul(c, a, b);
	gmp_printf("%Zd\n", c);
	return 0;
}
