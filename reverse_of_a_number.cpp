#include<iostream>
using namespace std;
int main() {
    int num;
    int rem;
    int reverse = 0;

    cout<<"enter a number:";
    cin>>num;

    while (num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    cout<<"reverse of a number:"<<reverse<<endl;
    return 0;
}
