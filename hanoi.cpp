#include <iostream>

using namespace std;

void hanoi(int tiles, int start=1, int end=3){
	int steps;
	if (tiles){
		hanoi(tiles-1, start, 6-start-end);
		cout << "Move disk " << tiles << " from " << start << " to " << end << endl;
		hanoi(tiles-1, 6-start-end, end);
		++steps;
	}
}

int main(){
	hanoi(10000);
	cout << "Completed in " << steps << " steps" << endl;
	return 0;
}
