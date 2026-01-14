#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> str1(N);
    string temp;
    for(int i =0; i < N; i++) {
        cin >> str1[i];
    }

    sort(str1.begin(), str1.end());

    vector<string> ans;
    for(int l =0; l <M;l++) {
        cin >> temp;
        if(binary_search(str1.begin(), str1.end(), temp))
            ans.push_back(temp);
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for(int a = 0; a < ans.size(); a++)
        cout << ans[a] << "\n";
    return 0;
}