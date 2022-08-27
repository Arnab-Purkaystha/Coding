#include <bits/stdc++.h>

using namespace std;

void merge_array(int arr1[], int num1, int arr2[], int num2);

int main(void)
{

    int first_arr[30];
    int second_arr[30];
    int num1, num2;

    cin>>num1;
    cin>>num2;;

    for (int i = 0; i < num1; i++)
    {
        cin>>first_arr[i];
    }

    for (int i = 0; i < num2; i++)
    {
        cin>>second_arr[i];
    }
    for (int i = 0; i < num1; i++)
    {
        cout<<first_arr[i];
    }
    cout<<endl;
    for (int i = 0; i < num2; i++)
    {
        cout<<second_arr[i];
    }


    merge_array(first_arr, num1, second_arr, num2);
    return 0;
}

void merge_array(int arr1[], int num1, int arr2[], int num2)
{

     int arr3[60];
    int i, j, k = 0;
 
    for(i = 0; i < num1; i++){
        //copy all the elements from the first array into third array
        arr3[k++] = arr1[i]; 
    }
    for(j = 0; j < num2; j++){
        // copy all the elements from the second array into third array
        arr3[k++] = arr2[j]; 
    }
    // int n1 = sizeof(arr3) / sizeof(arr3[0]);
    // sort(arr3, arr3 + n1);

    // cout << arr3[(n1) / 2]; 
    for(i = 0; i < (num1 + num2); i++){
        cout<< arr3[i];
    }
}