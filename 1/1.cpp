#include <bits/stdc++.h>
using namespace std;

void countElements(int *arr, int n)
{
	int visit[n];

	for (int i=0;i<n;i++) {

		if (visit[i] == true){
          continue;
		}
		int counter = 1;
		for (int j=i+1;j<n;j++) {
			if (arr[i] == arr[j]) {
				visit[j] = true;
				counter++;
			}
		}
		cout<<arr[i]<<"=>"<<counter<<endl;
	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
	countElements(arr, n);
	return 0;
}
