#include<iostream>
#include<ctime>
using namespace std;
int main() {
	//6
	/*int a, b;
	cin >> a >> b;
	const int n = 10;
	int arr[n];
	arr[0] = a;
	arr[1] = b;
	int sum = a + b;
	for (int i = 2; i < n; i++) {
		arr[i] = sum;
		sum += arr[i];
		cout << arr[i] << endl;
	}*/
	//7
	/*const int n = 5;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << arr[i] << endl;
	}
	for (int i = n-1; i >= 0; i--) {
		cout << arr[i] << " ";
	}*/
	//8
	/*const int n = 5;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << arr[i] << endl;
	}
	for (int i = 0; i <= n; i++) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << " ";
		}
	}*/
	//9
	/*int k = 0;
	const int n = 5;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << arr[i] << endl;
	}
	for (int i = n-1; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			k++;
			cout << arr[i] << " ";
		}
	}*/
	//10
	/*const int n = 5;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 51;
		cout << arr[i] << endl;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << "" << endl;
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << " ";
		}
	}*/
	return 0;
}