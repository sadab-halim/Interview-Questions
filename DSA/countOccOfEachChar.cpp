#include<bits/stdc++.h>
using namespace std;

void countOccurences(string s, int len){
    unordered_map<char, int> mapp;

    for(int i = 0; i < len; i++){
        mapp[s[i]]++;
    }

    for(auto i: mapp){
        cout<<"Count of "<<i.first<<" is "<<i.second<<endl;
    }
}
// void countOccurences(string s, int len){
//     int count = 0;
//     vector<bool> visited(len, false);
    
//     for(int i = 0; i < len; i++){
//         if(visited[i] == true)
//             continue;
//         int count = 1;
//         for(int j = i + 1; j < len; j++){
//             if(s[i] == s[j]){
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         cout<<"Count of "<<s[i]<<" is "<<count<<endl;
//     }
// }

int main(){
    string s = "Sadab";
    int len = s.length();
    countOccurences(s, len);
    return 0;
}