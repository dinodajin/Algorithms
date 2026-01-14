#include<iostream>
#include<string>

using namespace std;

int main() {

    int temp;
    int ans = 0;
    
    for(int i = 0; i < 5; i++) {
        cin >> temp;
        ans += temp*temp;
    }

    ans = ans % 10;
    cout << ans;

    return 0;
}