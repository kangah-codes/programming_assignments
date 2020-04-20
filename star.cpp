#include <iostream>

using namespace std;

bool down = true;

int stars(int n, int count){
	if (count != 0){
		if (count < n && down){
			cout << string(n-count, ' ');
			cout << string(count, '*') << endl;
			stars(n, count+1);
		}else{
			down = false;
			cout << string(n-count, ' ');
			cout << string(count, '*') << endl;
			stars(n, count-1);
		}
	}
}

int main(){
	stars(10, 1);
}

