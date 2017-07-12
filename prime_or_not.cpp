#include<iostream>
using namespace std;
int main() {
    int num;
    int count = 0;

    cout<<"enter a number:";
    cin>>num;

    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }

    if (count == 1) {
        cout<<"number is PRIME"<<endl;
    } else {
        cout<<"number is NOT PRIME"<<endl;
    }

    return 0;
}
