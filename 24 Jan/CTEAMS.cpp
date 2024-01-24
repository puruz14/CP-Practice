#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int y_R = 0, o_R = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> old;
    priority_queue<pair<int, int>> yng;

    old.push({INT_MAX, 0});
    yng.push({INT_MIN, 0});

    for (int i = 0; i < n; i++)
    {
        int age, rating;
        cin >> age >> rating;

        if (!(i % 2))
        {
            auto min_old = old.top();
            if (min_old.first < age)
            {
                y_R += min_old.second;
                yng.push(min_old);
                old.pop();
                old.push({age, rating});
                o_R = o_R + rating - min_old.second;
            }
            else
            {
                y_R += rating;
                yng.push({age, rating});
            }
        }
        else
        {
            auto max_yng = yng.top();
            if (max_yng.first > age)
            {
                o_R += max_yng.second;
                old.push(max_yng);
                yng.pop();
                yng.push({age, rating});
                y_R = y_R + rating - max_yng.second;
            }
            else
            {
                o_R += rating;
                old.push({age, rating});
            }
        }
        cout << abs(y_R - o_R) << endl;
    }

    return 0;
}