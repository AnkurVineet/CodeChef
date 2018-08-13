#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int t_cases;
	cin>>t_cases;
	while(t_cases)
	{
		long int A,B,D=0;
		long int X1=0,X2=0;
		cin>>A>>B;
		//clock_t begin = clock();
		D = ceil(sqrt((4*(A+B)*(A+B))-12*A*B));
		X1 = round((float)((2*(A+B))+ D)/6);
		X2 = round((float)((2*(A+B))- D)/6);
		unsigned long long vol1 = (A-X1)*(B-X1)*X1;
		unsigned long long vol2 = (A-X2)*(B-X2)*X2;
		cout<<X1<<endl<<vol1<<endl<<X2<<endl<<vol2<<endl;
		if(X1<X2 && X1 > 0 && vol1>vol2){
			 
		 	cout<<X1<<" "<<vol1<<endl;
		 }
		else
		{
			
			cout<<X2<<" "<<vol2<<endl;
		}
		//clock_t end = clock();
  		//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  		//cout<<"t:"<<end - begin<<endl;
		t_cases--;
	}
	return 0;
}