#include<iostream>
#include<string>

using namespace std;

string reversing(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string tobigchar(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string tosmallchar(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string temp ,re_temp;
    cout << "Input text: ";
	cin >> temp;
	re_temp=reversing(temp);
    cout << "Reversed text: "<<re_temp<<endl;
	temp=tobigchar(temp);
	re_temp=tobigchar(re_temp);
    cout << "Palindrome: ";
	if(temp==re_temp)
	{

		cout<<"Yes";
	}
	else
	{

		cout<<"No";
	}
    return 0;
}
