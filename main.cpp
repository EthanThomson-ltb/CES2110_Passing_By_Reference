#include <iostream>
using namespace std;

//Swaps the values of two variables, a and b
void aBswap(int& a, int& b);

int main() {

    cout << "---Part one---" << endl;
    //Variable swap
    int a, b;
    cout << "input two numbers:" << endl;
    cin >> a >> b;
    cout << "The values of numbers a and b are " << a << " and " << b << endl;
    aBswap(a, b);
    cout << "The new swapped values of numbers a and b are " << a << " and " << b << endl;

    return 0;
}

void aBswap(int& a, int& b) {
    int x = a;
    a = b;
    b = x;
}