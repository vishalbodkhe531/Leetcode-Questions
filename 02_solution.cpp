#include<iostream>
using namespace std;

int main(){

    int number = 123;
    int rem = 0,store = 0;
    while(number > 0){
        rem = number % 10;
        store = (store * 10) + rem;
        number = number / 10;
    }
    cout<<store;

    return 0;
}