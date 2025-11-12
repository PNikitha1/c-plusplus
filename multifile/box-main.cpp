#include<iostream>
#include "box.h"
using namespace std;

int main(){
    Box b(10,20,30);
    int vol=b.computeVolume();
    b.updateDimensions(1.5);
    b.display();
    cout<<vol<<"\n";
    Box b1(b);
    b1.display();
    return 0;
}