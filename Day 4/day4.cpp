#include <iostream>
using namespace std;

int factorial(int n){
    if (n==0||n==1){
        return 1;
    }
    else{
     return n * factorial(n-1);
    }
}


 int main(){
    
    cout<<"Enter the Number whose factorial is to be found"<<endl;
    int fact;
    cin>>fact;
    cout<<"The factorial of "<<fact<<" is "<<factorial(fact);













    return 0;
}