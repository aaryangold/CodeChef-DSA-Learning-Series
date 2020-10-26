#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;cin>>t;
	
	while(t--){
	    int n;cin>>n;
	    int i = 0;
	    
	    auto s = to_string(n);
	    reverse(s.begin(), s.end());
	    
	    while(s[i] == '0'){
	        i++;
	    }
	    s.erase(0, i);
	    cout<<s<<endl;
	}
    return 0;
}
