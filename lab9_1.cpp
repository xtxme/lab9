#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int n=1;
	double prev,inter,rate,total,pay,newb;
	cout << "Enter initial loan: ";
	cin >> prev;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	
	
	while (newb > 0)
	{
		cout << fixed << setprecision(2);
		cout << setw(13) << left << n++; 
	    cout << setw(13) << left << prev;
	    inter = prev*rate/100;
	    cout << setw(13) << left << inter;
	    total = prev + inter;
        cout << setw(13) << left << total;
	    if(pay > total) pay = total; 
	    cout << setw(13) << left << pay;
	    newb = total - pay;
	    cout << setw(13) << left << newb;
	    prev = newb;
	    cout << "\n";	
	}
	
	return 0;
}
