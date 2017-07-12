#include<iostream>
using namespace std;
int main() {
    int num;
    int rem;
    int sum = 0;

    cout<<"Enter a number:";
    cin>>num;

    while (num > 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    cout<<"sum of the digits:"<<sum<<"\n";
    return 0;
}
