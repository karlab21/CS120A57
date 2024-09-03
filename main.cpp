#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, n3;


	cin >> n1 >> n2;
	cin >> N;

	cout << n1 << "\t" << n2 << "\t";
	for (int i=0; i<N-2; i++) 
		n3= n1 + n2;
		cout << n3 << "\t";
		n1 = n2; 
		n2 = n3;

	

}
