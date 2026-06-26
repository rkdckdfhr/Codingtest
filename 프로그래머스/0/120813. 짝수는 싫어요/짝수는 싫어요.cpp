#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int cnt = 0;
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 == 0) continue;
        answer.push_back(i);
        cnt++;
    }
    return answer;
}