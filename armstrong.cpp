#include<iostream>
using namespace std;

int length_of_a_number(int x){
    int count=0;
    while(x!=0){
        x/=10;
        count++;
    }
    return count;
}

int pow(int number,int length){
    int sum=1;
    for(int i=0;i<length;i++){
        sum=sum*number;
    }
    return sum;
}

int main(){
    int number;
    cin>>number;
    int length=length_of_a_number(number);

    int temparary=number,sum=0,remainder=0;
    while(temparary!=0){
        remainder=temparary%10;
        sum+=pow(remainder,length);
        temparary/=10;
    }

    if(sum==number)
        cout<<"Its an Armstrong Number";
    else
        cout<<"Its not an Armstrong Number";
}