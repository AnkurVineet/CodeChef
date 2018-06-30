#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int N,C;
		int a[10000];
		cin>>N;
		cin>>C;
		int sum = 0;
		for(int i = 0 ; i < N ; i++)
		{
			cin>>a[i];
			sum += a[i];
		}	
		t--;
		if(sum>C)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}