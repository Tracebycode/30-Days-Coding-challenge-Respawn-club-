#include <iostream>
using namespace std;

void sorting(int array[],int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i-1);j++){
            if(array[j]>array[j+1]){
                int t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
                

            }
            
        }
    }
    
}



 int main(){
    int array[]={7,2,9, 1,4,10,15,8,6,2 ,5};
    int s=sizeof(array)/sizeof(array[0]);
    sorting(array,s);

    cout<<"The ascending order of the array is ";
    for(int k=0;k<s;k++){
        cout<<array[k]<<" ";
    }
    cout<<endl;
    cout<<"The Descending order of the array is ";
    for(int k=s-1;k>=0;k--){
        cout<<array[k]<<" ";
    }

    













    return 0;
}