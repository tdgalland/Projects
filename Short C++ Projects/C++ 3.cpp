class Solution {
public:
    bool checkValidString(string s) {
    int l=0;           //Left
	int r=0;          //Right
	int t=0;         //sTar
	int n=s.size(); //size of string
	
	for(int i=0;i<n;i++){
		if(s[i]=='(') l++;
		if(s[i]==')') r++;
		if(s[i]=='*') t++;
		if(l+t<r) return 0;
	}
	l=0,t=0,r=0;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='(') l++;
		if(s[i]==')') r++;
		if(s[i]=='*') t++;
		if(r+t<l) return 0;
	}
	return 1;
        
    }
};