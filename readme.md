### Function
The function is called `void pollards_rho(mpz_t &n, mpz_t &d, int x0=2)`.
To use it, we need to input n, and d. n will not be changed while d will be changed to the factor of n.
```
    mpz_t d,n;
    mpz_init(n);
    mpz_set_ui(n, 2111*233);
    pollards_rho(n, d);
```
Since it is not guaranteed starting from 2 can actually have a collision, so, you can enter 
```
    mpz_t d,n;
    mpz_init(n);
    mpz_set_ui(n, 2111*233);
    pollards_rho(n, d, 3);
```
to try to start from different x0.