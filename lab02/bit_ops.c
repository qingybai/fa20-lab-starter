#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
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
void set_bit(unsigned * x,
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
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
                  unsigned v = 1<<n;
                  *x= *x^v;
    // YOUR CODE HERE
}