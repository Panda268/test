#include<iostream>
using namespace std;

int strlen(string s){
	int i = 0;
	while (s[i] != 0)
		i++;
	return i;
}

void strcpy(string& s1, string s2){
	s1 = s2;
}

void strcat(string& s1, string s2){
	s1 += s2;
}

int strcmp(string s1, string s2){
	if (s1 < s2) return -1;
	if (s1 == s2) return 0;
	return 1;
}

int main(){
	
}
