#include <iostream>
using namespace std;
int arr[100001];
int n,t,k,s;
int main(){
    scanf("%d %d", &n, &t);
    while(n--){
        scanf("%d %d", &k, &s);
        for(int i = t; i >= k; i--)
            arr[i] = max(arr[i], arr[i-k]+s);
    }
    printf("%d", arr[t]);
}