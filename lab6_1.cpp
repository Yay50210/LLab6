#include<iostream>
using namespace std;

int main(){

int N;
int E = 0;
int O = 0;
while(N!=0){
    cout << "Enter an integer: ";
    cin >> N;
    if(N%2==0){
        E+=1;}
    
    
        else{
        O+=1;
    }

}
    cout << "#Even numbers = "<<E-1<<"\n";
    cout << "#Odd numbers = "<<O;


   return 0;

}