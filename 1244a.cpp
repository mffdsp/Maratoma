#include <bits/stdc++.h>

using namespace std;

int stairget(int *array, int n){
	for(int i = 0, j = n - 1; i < n/2; i++, j--){

		if(array[i] == 1)
			return 2*(n-i);
		else if (array[j] == 1)
			return 2*j;
	}
	return n;
}
int main (){
	int t, n; cin >> t;
	while(t--){
		cin >> n;
		int array[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> array[i];
		}
		cout << stairget(array, n) << endl;
		
	}

	return 0;
}
