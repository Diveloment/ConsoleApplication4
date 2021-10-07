#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>

using namespace std;

class Triangle
{

public:
    Triangle() { a = b = c = p = s = 0; };
    void Set();
    bool triangle();
    void P();
    void S();
    void Show();

private:
    int a, b, c;
    int p, s;
};

int main()
{
    Triangle Obj;

    Obj.Set();
    if (Obj.triangle() == false) {
        cout << "Triangle does not exist!";
        system("pause>0");
        exit(1);
    }
    Obj.P();
    Obj.S();
    Obj.Show();
    system("pause>0");
    return 0;
}

void Triangle::Show() {
    cout << "Storonu treygolnika:" << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
    cout << "Perumetr = " << p << endl;
    cout << "Plocha = " << s;
}
void Triangle::P() {
    p = a + b + c;
}
void Triangle::S() {
    s = sqrt(p * (p - a) * (p - b) * (p - c));
}
bool Triangle::triangle() {
    if ((a + b) <= c || (a + c) <= b || (b + c) <= a)return false;
    return true;
}

void Triangle::Set() {
    cout << "Enter a b c:\n";
    cin >> a >> b >> c;
}