#include <iostream>
using namespace std;
void bubblesort(int a[], int n) {
	bool sorted=false;
	while (!sorted) {
		sorted = true;
		for (int i = 1; i < n; i++) {
			if (a[i - 1] > a[i]) {
				swap(a[i - 1], a[i]);
				sorted = false;
			}
		}
		n--;
	}
}
int main()
{
	/*int a[10];
	for (int i = 0; i < 10; i++)
	cin>>a[i];
	bubblesort(a, 10);
	for(int i=0;i<10;i++)
		cout << a[i]<<" ";*/
	
	srand(time(NULL));
	cout<<rand() % 1;
	return 0;
}