// Suppose we have to find product of a.b mod m 
// but the result can be greater than integer limit of the compiler
// we can use binary exponentiation formula- 
// if a==0 :a.b =0
// if a>0 and even : a.b = 2*(a/2)*b
// if a>0 and odd : a.b = 2*(a-1/2)*b+b
