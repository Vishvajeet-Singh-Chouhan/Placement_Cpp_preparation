#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int addition(int num1,int num2){
    return num1+num2;
}

int multiplication(int num1,int num2){
    return num1*num2;
}

void array_insertion(int arr[],int size){
    cout<<"Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

