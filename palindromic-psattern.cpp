#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"  ";
        }
        for(int k=i;k>=2;k--){
            cout<<k<<" ";
        }
        for(int l=1;l<=i;l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}