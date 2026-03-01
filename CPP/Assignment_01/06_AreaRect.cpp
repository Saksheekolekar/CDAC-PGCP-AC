#include <iostream>
using namespace std;
//function for calculating area
int areaRectangle(int l, int w) {
    return l * w;
}

int main() {
    int length, width;
    cout << "Enter length and width: ";
    cin>>length>>width;
    cout << "Area = " << areaRectangle(length, width) << endl;
    return 0;
}
