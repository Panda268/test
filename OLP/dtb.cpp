#include <iostream>
#include <cmath>
using namespace std;

char name[10], sub[10], classes[10];
int age, attend, participant, homework, practise, mid, final;

float lamtron(float dtb){
	float tam = round(dtb * 100);
	tam /= 100;
	return tam;
}

void input(){
	cin >> name >> age >> classes;
	cin >> sub;
	cin >> attend >> participant >> homework >> practise >> mid >> final;
}

void output(){
	cout << "Name: " << name << ", Age: " << age << ", Class: " << classes << endl;
	cout << "Subject: " << sub << endl;
	double dtb = ((attend + participant + homework) * 0.05 + (practise + mid) * 0.15 + final * 0.55);
	cout << dtb * 10 << "% ";
	if (dtb >= 4) cout << "(Pass)";
	else cout << "Fail";
	cout << endl; 
}

int main(){
	input();
	output();
	char a;
	system("pause");
}
