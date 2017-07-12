#include<iostream>
using namespace std;
int main() {
    int num1 = 0;
    int num2 = 1;
    int num;
    int add;

    cout<<"enter a number:";
    cin>>num;
    cout<<num1<<"\t"<<num2<<"\t";

    for(int i = 0; i < num; i++) {
        add = num1 + num2;
        num1 = num2;
        num2 = add;
        cout<<add<<"\t";
    }
    cout<<endl;
    return 0;
}
