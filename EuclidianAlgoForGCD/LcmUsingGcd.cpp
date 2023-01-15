// Lcm using Gcd is calculated by formula- (a*b)/gcd(a,b)
#include <bits/stdc++.h>
using namespace std;
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}