#include <iostream>
using namespace std;

void findRoots(int a, int b, int c)
{
    int d = b * b - 4 * a * c; // discriminant
    if (d > 0)
    {
        // integer square root approximation
        double sqrtD = 1;
        for (double i = 1; i * i <= d; i++)
            sqrtD = i;
        double r1 = (-b + sqrtD) / (2.0 * a);
        double r2 = (-b - sqrtD) / (2.0 * a);
        cout << "Roots are real and distinct: " << r1 << " , " << r2 << endl;
    }
    else if (d == 0)
    {
        double r = -b / (2.0 * a);
        cout << "Roots are real and equal: " << r << endl;
    }
    else
    {
        cout << "Roots are complex (no real roots)" << endl;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    findRoots(a, b, c);

    return 0;
}
