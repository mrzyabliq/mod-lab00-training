// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        int64_t a = power(x, n/2);
        return a*a;
    }
    else
    {
        return x*power(x, n-1);
    }
}
