// Joshua Koo
// 12/2/23
// This program compiles a halfing function on various data types
// CIS 1202
#include <iostream>

using namespace std;

// Templated function for floating-point types
template <typename T>
T half(T value) {
	return value / static_cast<T>(2);
}


int main() {
	//Testing the half function for different data types

	//Double 
	double doubleValue = 20.8;
	cout << half(doubleValue) << endl;
}