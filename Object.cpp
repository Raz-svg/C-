#include<cstdio>
#include<iostream>
#include<string>
using namespace std;


void nothing()
{
	//void function that does not return a value
	cout << "Void funxtion" << endl;
	cout << "nothing.\n";
}

char nk()
{
	//char function that returns a character
	return 'a';
}


//entry point of the program
int main() 

{
	/***********************************************BASICS**********************************************************/

	//output function automatically prints a newline character..only for strings
	puts("Hello, World!"); 
	puts("This is a C++ program.");


	// output function that does not automatically print a newline character included in iostream
	cout << "cout function" << endl;
	cout << "use of endl/n.\n";

	// ()-parentheses are used to group expressions...they are also used to call functions
	// {}-curly braces are used to group statements
	// []-square brackets are used to access elements of an array..
	nothing();
	cout << nk() << endl;
	cout << endl;


	int number;
	cout << "Enter your ID: \n";
	//cin >> number;
	//printf("Your ID is: %d\n", number*4);
	cout << endl;
	// naming rules to name functions, variables, classes, etc. are called identifiers...they are also case sensitive
	// do not beyond 31 characters
	// _ implies private or protected and __ implies system defined


	//string colour;
	//cout << "Enter your favourite colour: \n";
	//getline(cin, colour);
	//cin >> colour;
	//cout << "My favouriye coloue is " << colour<<" " << "too\n";

	/**********************************************POINTERS**********************************************************/


	//pointer points to a memory location
	int life = 4;
	const int death = 5;

	int card;
	card = 40;
	int my_card = 40;

	int *myp; //pointer
	myp = &card; //address of operator
	my_card = *myp; //dereferencing of pointer

	printf("Card number %d\n", card);
	printf("Card number %p\n", myp);
	printf("Card number %d\n", my_card);

	printf("\n");


	int score;
	score = 200;
	int* sc=&score;

	printf("Value of score %d\n", score);
	printf("value pf pointer is %p\n", sc);

	int& ref = score;// reference is an alias for a variable not the value of the variable
	ref = 800;//changing the value of the reference changes the value of the variable it is refrencing to
	printf("Value of reference %d\n", ref);
	printf("Value of score %d\n", score);


	/***********************************************ARRAYS**********************************************************/
	int arr[4] = { 0 };// initializes all undefined values in an array to zero
	//or
	int arr1[] = { 1,2,3,4,5 }; //preasssumes the size of the array
	cout << arr1[2]<<"\n";
	cout << arr1 << endl;  //prints the address of the first element of the array
	cout << &arr1[0] << endl; //prints the address of the first element of the array

	arr[0] = 6;
	arr[1] = 4;
	arr[2] = 2;
	cout << arr[2] << endl;

	*arr1 = 10;//dereferencing the pointer to the first element of the array and assigning it a  new value
	cout << arr1[0] << endl;

	int* p = arr1;// as arrays are pointers, we can assign the address of the first element of the array to a pointer
	p++; //incrementing the pointer to point to the next element of the array
	*p = 20;//dereferencing the pointer to the second element of the array and assigning it a new value
	cout << arr1[1] << endl;

	/**********************************************INTEGERS**********************************************************/
	/*
	short int ----->unsigned short int
	int ----->unsigned int
	long int ----->unsigned long int
	long long int ----->unsigned long long int
	*/
    printf("Size of int: %zu bits\n", sizeof(int)*8);
	printf("Size of int: %zu bits\n", sizeof(short int) * 8);
	printf("Size of int: %zu bits\n", sizeof(long int) * 8);
	printf("Size of int: %zu bits\n", sizeof(long long int) * 8);
	printf("Size of int: %zu bits\n", sizeof(unsigned int) * 8);
	printf("Size of int: %zu bits\n", sizeof(unsigned short int) * 8);
	printf("Size of int: %zu bits\n", sizeof(unsigned long int) * 8);
	printf("Size of int: %zu bits\n", sizeof(unsigned long long int) * 8);
	printf("Size of int: %zu bits\n", sizeof(char) * 8);
	printf("Size of int: %zu bits\n", sizeof(unsigned char) * 8);

}
