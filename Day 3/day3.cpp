#include <iostream>
using namespace std;
class Isprime{

    public:
    Isprime(int a){
        if(a<=1){
            cout<<a<<"a is neither prime nor composite";
        }else{
        if(a%2==0){
            cout<<a<<" is a prime Number";
        }
        else{
            cout<<a<<" is not a prime Number";

        }
    }

    }
};


 int main(){
    int n;
    cout<<"Enter the Number to be Check as Prime Number Or composite Number \n";
    cin>>n;
Isprime A1(n);

    













    return 0;
}