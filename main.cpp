#include <iostream>
using namespace std;

//Swaps the values of two variables, a and b
void aBswap(int& a, int& b);

//Function to calculate factorial recursively
long long factorial_recursive(int n);

int main() {

    cout << "---Part one---" << endl;
    //Variable swap
    int a, b;
    cout << "Enter two integers:" << endl;
    cin >> a >> b;
    cout << "The values of numbers a and b are " << a << " and " << b << endl;
    aBswap(a, b);
    cout << "The new swapped values of numbers a and b are " << a << " and " << b << endl;

    cout << endl;

    cout << "---Part two---" << endl;
    //Recursive algorithm
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Error - Cannot create factorial of a negative number" << endl;
    } else {
        cout << "Factorial of " << n << " = " << factorial_recursive(n) << endl;
    }


    return 0;
}

//Swaps the values of two variables, a and b
void aBswap(int& a, int& b) {
    int x = a;
    a = b;
    b = x;
}

//Function to calculate factorial recursively
long long factorial_recursive(int n) {
    // Default case where 0! & 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    }
    //n! = n * (n-1) * (n-2) * ... * 1
    return n * factorial_recursive(n - 1);
}

