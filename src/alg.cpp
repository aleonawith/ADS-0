// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a > b)
        return gcd(a - b, b);
    else if (a < b)
        return gcd(a, b - a);
    else if (a == 0 || b == 0)
        return a + b;
}
