#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;
	
	while(t--){
	    string s;cin>>s;
	    
	    vector<char> s1,s2;
	    
	    int size = s.size();
	    
	    for(int i=0;i<size/2;i++){
	        s1.push_back(s[i]);
	    }
	    
	    if(size%2==0){
	        for(int i=size/2;i<size;i++) s2.push_back(s[i]);
	    }
	    else{
	        for(int i=1+size/2;i<size;i++) s2.push_back(s[i]);
	    }
	  
	    
	    sort(s1.begin(), s1.end());
	    sort(s2.begin(), s2.end());
	    
	    
	    if(s1==s2) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
    return 0;
}
 
