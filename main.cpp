#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void swapTwoValues(int n1, int n2);
void swapTwoValues(float f1, float f2);
void getinput(int& n1, int& n2);
void getinput(float& f1, float& f2);

int main() {
    int num1, num2;
    float fnum1, fnum2;

    
    getinput(num1, num2);
    cout << num1 << " " << num2 << endl;
    swapTwoValues(num1, num2);
    cout << num1 << " " << num2 << endl;

    
    getinput(fnum1, fnum2);
    cout << fixed << setprecision(2);
    cout << fnum1 << " " << fnum2 << endl;
    swapTwoValues(fnum1, fnum2);
    cout << fnum1 << " " << fnum2 << endl;

    return 0;
}

void swapTwoValues(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapTwoValues(float f1, float f2) {
    float temp = f1;
    f1 = f2;
    f2 = temp;
}

void getinput(int& n1, int& n2) {
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
}

void getinput(float& f1, float& f2) {
    cout << "Enter two floats: ";
    cin >> f1 >> f2;
}