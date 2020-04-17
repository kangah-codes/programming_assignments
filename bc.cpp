#include <iostream>
using namespace std;

int main(){
    char ch;
    int i;

    for (int i=1;i<255;++i){
        ch = i;

        cout << "ASCII " << i << " CHAR " << ch << endl;
    }
}
