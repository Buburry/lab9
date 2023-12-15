#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate_year,per_year,interest;  
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate_year;
	cout << "Enter amount you can pay per year: ";
	cin >> per_year;

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
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/
	
	int i=1;
	do{
		cout << setw(13) << left << fixed << setprecision(2) << i++; //EndOfYear#
		cout << setw(13) << left << fixed << setprecision(2) << loan; //PrevBalance
		interest = loan * (rate_year/100);
		cout << setw(13) << left << fixed << setprecision(2) << interest;//Interest ดอกเบี้ยของปีนี้ที่คำนวณจากยอดหนี้ยกมาจากปีก่อน x (อัตราดอกเบี้ย/100)
		loan += interest;
		cout << setw(13) << left << fixed << setprecision(2) << loan; //total

		if (loan > per_year)  //Payment  
		{
			cout << setw(13) << left << fixed << setprecision(2) << per_year;	
		} else {
			cout << setw(13) << left << fixed << setprecision(2) << loan;	
		}
		loan = loan - per_year;
		if(loan > 0){
			cout << setw(13) << left << fixed << setprecision(2) << loan;	//Newbalance
		} else {
			cout << setw(14) << left << "0.00";
		}
		cout << "\n";						
	} while (loan > 0);
	
	return 0;
}
