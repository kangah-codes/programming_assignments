#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n < 0){
        return -5;
    }else if (n == 1){
        return 0;
    }else if (n == 2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int limit;

    cout << "Enter limit: "; cin >> limit;

    cout << fibonacci(limit) << endl;
}


