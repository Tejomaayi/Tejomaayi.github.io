#include<iostream>
using namespace std;
int main() {
    int num;
    int rev = 0;
    int rem;
    int com;

    cout<<"enter a number:";
    cin>>num;

    com = num;
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(com == rev) {
        cout<<"number is PALINDROME"<<endl;
    } else {
        cout<<"number is NOT PALINDROME"<<endl;
    }

    return 0;
}
