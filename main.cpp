#include <iostream>
using namespace std;

int main() {
   int n;
    int a=0, b=1, c;
   
    cin >> n;

    if (n>=2){
        for (int i=0; i<n; i++){
            cout << a << endl;
            c=a;
            a=b;
            b=a+c;
        }
    }else{
        cout << "errore";
    }
   return 0;
}
