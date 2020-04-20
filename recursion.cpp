#include <iostream>

using namespace std;

// int product(int curr){
// 	// for (int i = 0;i<11;++i){
// 	// 	if ((i%2) == 1){
// 	// 		count = count * i;
// 	// 		std::cout << "product: " << count << std::endl;
// 	// 	}
// 	// }
// 	int prod;
// 	if ((curr%2) == 1){
// 			prod = curr * product(curr-1);
// 	}
// 	return prod;
// }

int product(int n){
	if (n != 0){
		if (n % 2 == 1){
			cout << n << endl;
			return n * product(n-1);
		}
	}else{
		cout << endl;
	}
}

int main(){
	std::cout << product(10) << std::endl;
}