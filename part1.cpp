#include<iostream>
#include<conio.h>
using namespace std;
void input(int[], int);
void output(int[], int);
int search(int[], int);
void main() {
int a[999], b,i;
cout << "Enter size of Array : ";
		cin >> b;
        input(a, b);
		output(a, b);
		i=search(a, b);
		cout << "Number at this index : " << i;
		_getch();
	}
void input(int ary[], int b) {
	int i;
	cout << "Enter a arry" << endl;
	for ( i = 0; i < b; i++) {
		cin >> ary[i];
	}ary[i] = '\0';
}
	void output(int ary[], int b) {

		cout << "Output of Array";
		for (int i = 0; i < b; i++) {
			cout << " " << ary[i];
		}

	}
	int search(int arry[], int b) {
		int c;
		bool s = true;
		cout <<endl<< "Enter a number you want to find : ";
		cin >> c;
		for (int i = 0; i < b; i++) {
			if (c == arry[i]) {
				return i;
				s = false;
			}
			}
		
		if (s == true) {
			return 1;
		}




	}

