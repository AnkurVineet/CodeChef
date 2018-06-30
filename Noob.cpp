#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int *a = new int[N];
	for(int i=0; i < N ; i++)
	{
		cin>>a[i];
	}
	int count = 0;
	int start = 0;
	sort(a+start,a+N);
	while(1)
	{
		int small = a[start];
		for(int j = start;j < N;j++)
		{	
			a[j] = a[j] - small;
			if(a[j] == 0)
				start++;
		}	
		count++;
		if(start == N)
			break;
	}
	cout<<count;
	delete[] a;
	return 0;
}