#include<iostream>
using namespace std;
int main() {
    int num;
    int fact = 1;

    cout<<"enter a number:";
    cin>>num;

    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    cout<<"factorial of a given number:"<<fact<<endl;
    return 0;
}
