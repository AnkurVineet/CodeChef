#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    char card[2][3];
	    for(int i = 0; i < 2; i++)
		    for(int j = 0; j < 3; j++){
		    	cin>>card[i][j];
		    }
		bool flag = false;
	    for(int i = 0 ; i < 8; i++){
	    	int ind = i;
	    	int b_count = 0,o_count = 0;
	    	for(int j = 2; j >= 0 ; j--){
	    		char ch = card[ind%2][j];
	    		ind /= 2;
	    		//if(i == 0 && j == 0 && (ch != 'b' || ch != 'o'))
	    		//	i = 3;
	    		if(ch == 'b')
	    			b_count++;
	    		if(ch == 'o')
	    			o_count++;
	    		//cout<<b_count<<":"<<o_count<<":"<<i<<":"<<j<<endl;
	    	}
	    	if(b_count == 2 && o_count == 1){
	    		flag = true;
	    		cout<<"yes"<<endl;
	    		break;
	    	}
	    }
	    if(flag == false)
	    	cout<<"no"<<endl;
	}
	return 0;
}
