#include <iostream>
using namespace std;

int largest(int array[],int size){

    int Largest=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>Largest){
            Largest=array[i];
        }
        
        }

        return Largest;
    } 

;


 int main(){


    int array[] ={1,4,3,8,4,9,2,5,6};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"The largest number in the array is : " <<largest(array,size);

    

    













    return 0;
}