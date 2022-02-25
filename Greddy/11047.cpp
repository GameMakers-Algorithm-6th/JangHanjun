#include <iostream>
using namespace std;

int coins[11];
int howMany, targetMoney;
int coinCount = 0;

int main(){
    // init
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // input
    cin >> howMany >> targetMoney;
    for(int i = 0; i < howMany; i++)
        cin >> coins[i];
    
    // solve
    int curIndex = howMany-1;
    while (curIndex >= 0 && targetMoney){
        coinCount += targetMoney/coins[curIndex];
        targetMoney %= coins[curIndex];
        curIndex--;
    }
    
    cout << coinCount << '\n';
}