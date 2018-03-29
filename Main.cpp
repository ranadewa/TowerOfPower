#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	/* note:
	*
	* this is just an example on how our system
	* takes input and output and automate the process
	* of marking this submission
	*/

	// here's how you read an int as an input
	int N;

	cin >> N;

	int arr[N];

	for (int i = 0; i <= N; i++)
	{
		cin >> arr[i];
	}

	if (N == 1)
	{
	    cout << arr[1] % arr[0] << endl;
		return 0;
	}

	int value = arr[0];
	int temp = arr[1] % value ;

	for (size_t i = 2; i <= N; i++)
	{
		temp = (((int)pow(temp, arr[i])) % value);
	}

	cout << temp << endl;

	return 0;
}