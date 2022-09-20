#include<iostream>
using namespace std;

void rotate(int arr[], int d, int n)
{
    int temp[n]; // storing rotated version of array
    int k=0; // keeping track of the current index of temp

    //storing the n-d elements of arr[] to the front of temp[]
    for(int i=d; i<n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for(int i=0; i<d; i++) 
    {
        temp[k]=arr[i];
        k++;
    }

    for(int i=0; i<n; i++)
    {
        arr[i] = temp[i];
    }

}

void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i];
    }
}

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int N= sizeof(arr) / sizeof(arr[0]);
    int d=2;

    rotate(arr , d, N);
    printarray(arr,N);
    return 0;

}

