#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int row, int col){
	if (row > 0 && col > 0){
	for (int i= 0; i < row; i++){ //row แถว
		for (int j = 0; j < col; j++)
		{
			cout << "O";
		}
		cout << '\n';
	}
	
	} else {
	    cout << "Invalid input";    
	}
	return 1;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
