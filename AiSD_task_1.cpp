#include <iostream>

using namespace std;

//итеративный способ  a^n=a_1*a_2*...*a_n
float pow1(int x, int  n) {
    float out = 1;
    for (int i = 0; i < abs(n); i++)
        out *= x;
    if (n > 0)
        return out;
    else
        return 1 / out;
}

//рекурсивный способ a^n=a_1*a^(n-1)
float pow2(int x, int n) {
    
        if (n > 0)
            return x * pow2(x, n - 1);
        else if (n == 0)
            return 1;
        else
            return 1 / pow2(x, -n);
}

int main()
{
    cout << "Out_1:" << pow1(5, 3) <<"      Out_2:"<< pow1(5, 3);
    return 0;
}