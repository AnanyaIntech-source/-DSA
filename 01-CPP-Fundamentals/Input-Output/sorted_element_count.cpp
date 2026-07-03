//Sorted Element Count 
#include <iostream>
using namespace std;

int main(){
    int num, prev, c = 1;
    cin >> prev;
    while(cin >> num){
        if(num == prev){
            c++;
        }
        else{
            cout << prev << " occurs " << c << " times" << endl;
            prev = num;
            c = 1;
        }
    }
    cout << prev << " occurs " << c << " times" << endl;
    return 0;
}
