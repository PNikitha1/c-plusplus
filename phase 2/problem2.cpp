#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n1, n2;
    
    cout << "Enter two numbers :" << endl;
    cin >> n1 >> n2;
    
    cout << "Before swaping the values:" << endl;
    cout << n1 << " " << n2 << endl;
    
    swap(n1, n2);
    
    cout << "After swaping the values:" << endl;
    cout << n1 << " " << n2 << endl;

    return 0;
}