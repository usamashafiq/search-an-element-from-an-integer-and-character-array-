#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void output(char[]);
int search(char[], int = 0);
void main() {
	char a[99]; char d; 
	cout << "Enter a arry" << endl;

	cin.getline(a, 99);
	cout << "Output of Array";

	cout << endl << a << endl;


	int i;
	cout << "If you want to find other index (Y/N)" << endl;;
	cin >> d;
	
	if (d == 'y'||d=='Y') {
		int b;
		cout << "Where you want to find from index " << endl;
		cin >> b;
		i = search(a, b);
	}
	else {
		i = search(a);
	}
		cout << "Number at this index : " << i;
	
	_getch();
}


 int search(char arry[], int w) {
 char c;
 int i;
 cout <<endl<< "Enter a char you want to find : ";
 cin >> c;
  for (  i=w ; arry[i] != '/0'; i++) {
  if (c == arry[i]) {
	  break;
 }
 }
  return i;

 }

