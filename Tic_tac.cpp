#include <bits/stdc++.h>

using namespace std;

int Homes(int arr[], int n, int candies)
{
	int check_candies, i, j;
	for (i = 0; i < n; i++) {
		check_candies = arr[i];
		for (j = i + 1; j <= n; j++) {
			if (check_candies == candies) {
				cout << "First Home "<< i+1<<"\n";
                cout<<"Second Home"<< j<<"\n" ;
                cout<<"Total Candies"<<candies;
				return 1;
			}
			if (check_candies > candies || j == n)
				break;
			check_candies = check_candies + arr[j];
		}
	}
	return 0;
}

int main()
{
	int n;
    cin>>n;
    int arr[n];
	int candies = 0;
    cin>>candies;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
	Homes(arr, n, candies);
	return 0;
}

