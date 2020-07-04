#include <iostream>
#include <gmp.h>

void f(mpz_t & result, mpz_t & x){
    mpz_mul(result, x, x);
    mpz_add_ui(result, result, 1);
}

void pollards_rho(mpz_t &n, mpz_t &d, int x0=2){
    mpz_t a, b, a_b;
    mpz_init(a);
    mpz_init(b);
    mpz_init(a_b);
    mpz_init(d);
    mpz_set_ui(d, 1);
    mpz_set_ui(a, x0);
    mpz_set_ui(b, x0);
    mpz_init(a_b);
    while(mpz_cmp_ui(d, 1)==0){
        f(a, a);
        f(b, b);
        f(b, b);
        mpz_sub(a_b, a, b);
        mpz_gcd(d, a_b, n);
    }
    if(mpz_cmp(d, n)==0) std::cout<< "failure"<<std::endl;
    else gmp_printf("find one: %Zd\n", d);
}

int main() {
    mpz_t d,n;
    mpz_init(n);
    mpz_set_ui(n, 2111*233);
    pollards_rho(n, d);
    return 0;
}