#include<iostream>
using namespace std;
bool is_palindrome(string text)
{
	int i;
	for( i= 0; i < text.length() / 2; i++)
		if(text[i] != text[text.length() - i - 1])
			return false;
	return true;
}
int main()
{
	
	string x;
	cout<<"enter a word to test if it is palindrome"<<endl;
	cin>>x;
	if (is_palindrome(x)){
		cout<<x<<" is palindrome"<<endl;
	}
	else{ 
		cout<<x<<" is not a palindrome"<<endl;
	}
}

