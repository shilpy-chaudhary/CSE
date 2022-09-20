#include<iostream>
using namespace std;

void price(){
    int x1 , y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ((x1*y1) > (x2*y2))
    {
        cout << x2*y2;
    }
    else {
        cout << x1*y1;

    }
}
int main(){

    int t;
    cin >> t;
    while(t--) {
        price();
    }

    return 0;
    }
