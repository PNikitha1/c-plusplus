#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int temparary=1,perfect_number=0;
    while(temparary<num){
        if(num%temparary==0)
        perfect_number+=temparary;

        temparary++;
    }
    if(perfect_number==num)
    cout<<"Its a perfect number";
    else
    cout<<"Its not a perfect number";
}