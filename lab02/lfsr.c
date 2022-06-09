#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

unsigned get_bit(unsigned x,
                 unsigned n) {
                     unsigned p,q;
                     q=1<<n;
                     p=x&q;
                     return p>>n;
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
// n=2,v=0,x=1111
void set_bit(short unsigned * x,
             unsigned n,
             unsigned v) {
                 unsigned u=1;
                 u= u << n;
                 u= ~ u;
                 *x= *x & u;
                 v= v << n;
                 *x= *x | v;
                 return;
    // YOUR CODE HERE
}

void lfsr_calculate(uint16_t *reg) {
    unsigned b0,b2,b3,b5;
    b0=get_bit(*reg,0);
    b2=get_bit(*reg,2);
    b3=get_bit(*reg,3);
    b5=get_bit(*reg,5);
    *reg = *reg >> 1;
    set_bit(reg,15,(((b0^b2)^b3)^b5));
    /* YOUR CODE HERE */

}

