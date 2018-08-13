#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int P,S;
	int ind = 0;
	cin>>P;
	cin>>S;
	multimap<int,int> rank;
	while(P--){
		int *sc = new int[S];
		int *ns = new int[S];
		for(int i = 0 ; i < S; i++)
			cin>>sc[i];
		for(int i = 0 ; i < S; i++)
			cin>>ns[i];
		for(int i = 0 ; i < S; i++){
			for(int j = i+1 ; j < S ; j++){
				if(sc[i] > sc[j]){
					int temp_sc = sc[i];
					int temp_ns = ns[i];
					sc[i] = sc[j];
					ns[i] = ns[j];
					sc[j] = temp_sc;
					ns[j] = temp_ns;
				}
			}
		}
		int diff = 0;
		for(int i = 0 ; i < S - 1; i++){
			if(ns[i] > ns[i+1])
				diff++;
		}
		ind++;
		rank.insert(pair<int,int>(diff,ind));
	}
	 for (multimap<int, int>::iterator Values = rank.begin();
        Values != rank.end(); ++Values)
        {
            cout <<(*Values).second << endl;
        }
	return 0;
}
