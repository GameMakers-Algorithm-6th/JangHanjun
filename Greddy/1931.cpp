#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> meetings;

int main(){
    // init
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // input
    cin >> n;
    for(int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        meetings.push_back(make_pair(end, start));
    }

    sort(meetings.begin(), meetings.end());
    
    // solve (early end first)
    int meetEndTime = meetings[0].first;
    int meetingCount = 1;
    for(int i = 1; i < n; i++){
        if(meetEndTime <= meetings[i].second){
            meetingCount++;
            meetEndTime = meetings[i].first;
        }
    }
    cout << meetingCount << endl;

}