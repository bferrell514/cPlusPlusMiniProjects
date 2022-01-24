/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int number;
    int reverse = 0;
    cout << "enter a number :";
    cin >> number;
    
    while(number>0){
        int last = number % 10;
        reverse = reverse * 10 + last;
        number = number / 10;
    }
    
    cout << reverse;
    return 0;
}