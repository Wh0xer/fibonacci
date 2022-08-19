#include <iostream>

using namespace std;

void getVal(int res) {
    for( int i = 0;i < 10; i++ ){
        res += i;
        cout << "* " << res << endl;
    }
}
int main(int argc, char **argv) {   
    cout << "\t<sequencia de Fibonacci>\n" << endl;
    getVal(0);
    return 1;
}