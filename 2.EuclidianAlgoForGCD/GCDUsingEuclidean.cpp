// Given two non negative numbers the greatest common divisor of the two numbers is found using Euclidean algorithm
// 1. One number is subtracted from the greater number till either number is not zero
// 2. one way is to subtract the a/b*b (mod of b) from the greater number(suppose a) till either number is zero
// Euclidean algorithm computes gcd in O(log(min(a,b))) time
#include <bits/stdc++.h>
using namespace std;

int firstmethodgcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>b)
        return firstmethodgcd(a-b,b);
    else if(b>a)
        return firstmethodgcd(a,b-a);
}
int secondmethodgcd(int a,int b)
{
    if(b==0)
        return a;
    else   
        return secondmethodgcd(b,a%b);
}
// c++ provides method gcd() in stl for computing gcd of two numbers
