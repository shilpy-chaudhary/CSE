#include<iostream>
using namespace std;

int getmax(int num[],int n){
    int maxi =INT_MIN;

    for(int i=0; i<n;i++){
        maxi= max(maxi, num[i]);

    }
    return maxi;
}

int getmin(int num[],int n){
    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);

    }
    return mini;
}


int main(){
     int size;
     cin>>size;
     int num[100];

     for(int i=0; i<size; i++){
        cin>>num[i];

     }
     cout<<"min number is"<<getmin(num,size)<<endl;
     cout<<"max number is "<<getmax(num,size)<<endl;

}
