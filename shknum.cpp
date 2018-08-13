#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	long long int tab[31][31];
	for(int i = 0 ; i < 31; i++){
		tab[0][i] = pow(2,i) + 1;
	}
	for(int i = 1 ; i < 31; i++){
		for(int j = 0; j < 31 ; j++){
			tab[i][j] = tab[i-1][j] + pow(2,i-1);
		}
	}
	while(T--){
	    bool flag = false;
	    int N,min_cost; 
	    cin>>N;
	    min_cost = fabs(N - tab[1][0]);
	    for(int i = 1; i <31 ; i++){
	    	for(int j = 0 ; j < i ; j++){
	    		if(fabs(N - tab[i][j]) <= min_cost){
	    			min_cost = fabs(N - tab[i][j]);
	    		}
	    	}
	    }
	    cout<<min_cost<<endl;
	}
	return 0;
}
