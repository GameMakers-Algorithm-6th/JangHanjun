#include <iostream>
using namespace std;

int main(){
    // init
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    const int five = 5;
    const int three = 3;

    // input
    cin >> n;

    // solve
    int bag5 = n / five;
    int bag3 = 0;
    int leftWeight = 0;
    while(bag5 >= 0){
        if(bag5 > 0){
            leftWeight = n - (bag5 * five);
        }
        else{
            leftWeight = n;
        }

        if(leftWeight % three == 0){
            bag3 = leftWeight / three;
            cout << bag3 + bag5 << '\n';
            return 0;
        }
        bag5--;
    }
    cout << "-1\n";
    return 0;
}