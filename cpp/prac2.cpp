// C++ program to compress the array ranges
#include <bits/stdc++.h>
using namespace std;

// Function to compress the array ranges
void compressArr(int arr[], int n)
{
	int i = 0, j = 0;
	sort(arr, arr + n);
	while (i < n) {

		// start iteration from the
		// ith array element
		j = i;

		// loop until arr[i+1] == arr[i]
		// and increment j
		while ((j + 1 < n) &&
				(arr[j + 1] == arr[j] + 1)) {
			j++;
		}

		// if the program do not enter into
		// the above while loop this means that
		// (i+1)th element is not consecutive
		// to i th element
		if (i == j) {
			cout << arr[i] << " ";

			// increment i for next iteration
			i++;
		}
		else {
			// print the consecutive range found
			cout << arr[i] << "-" << arr[j] << " ";

			// move i jump directly to j+1
			i = j + 1;
		}
	}
}

// Driver code
int main()
{

	int n ;
    cin >>n;
    int arr[] ;
    for(int i=0;i<arr.length();i++){

    }
	

	compressArr(arr, n);
}
