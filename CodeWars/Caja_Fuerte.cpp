#include<iostream>
#include<vector>

int main(){
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::vector<std::string> disco_actual;
    std::vector<std::string> disco_objetivo;

    std::cin >> n;

    // Disco Actual
    for(int i=0; i<n; i++){
        std::string s;
        std::cin >> s;
        disco_actual.push_back(s);
    }

    // Disc Objetivo
    for(int i=0; i<n; i++){
        std::string s;
        std::cin >> s;
        disco_objetivo.push_back(s);
    }

    return 0;
}