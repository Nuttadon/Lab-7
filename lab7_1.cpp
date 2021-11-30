#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);//upcase
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);//lowcase
		i++;
	}
	return y;	
}

int main(){
	string comword1,comword2,word,reword;
    cout << "Input text: ";
	cin >> word;
	comword1 = func3(word);
    cout << "Reversed text: ";
	reword = func1(word);
	comword2 = func3(reword);
	cout << reword << endl;
    cout << "Palindrome: ";
	if(comword2 ==comword1){
		cout << "Yes"; 
	}
	else{
		cout << "No";
	}
    return 0;
}
