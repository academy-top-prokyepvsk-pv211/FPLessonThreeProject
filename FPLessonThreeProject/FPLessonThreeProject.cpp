#include <iostream>

using namespace std;

int main()
{
    /*int n{ 5 };
    float x{ 10.5f };
    
    n = x;*/

    // bool - char - int - long long
    bool f = true;
    int a = f; // 1
    char ch = '$';
    int b = ch; // 36

    a = 65;
    ch = a;
    cout << ch << "\n";

    b = 0;

    f = a; // 1 -> true
    f = -100; // 1 -> true
    f = b; // 0 -> false

    float x{ 10.5f };
    f = x; // 1 -> true

    unsigned char u = -100;
    cout << u << "\n";

    b = (int)x;
    b = static_cast<int>(x);
}
