#include<iostream>
using namespace std;

int main(){
    int number;
    int EvenCount =0;
    int OddCount =0;
    
    while(true){
        cout << "Enter an integer: ";
        cin >> number;
        
        if(number == 0){
            break;
        }
        if(number %2==0){
            EvenCount++;
        }else{
            OddCount++;
        }
    }
    cout << "#Even numbers = "<< EvenCount << endl;
    cout << "#Odd numbers = "<< OddCount << endl;
    return 0;
}