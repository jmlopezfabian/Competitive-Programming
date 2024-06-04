#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll Tx, Ty;

double euclidean(ll x, ll y){
    return sqrt(pow(Tx - x, 2) + pow(Ty - y, 2));
}

int main(){
    ll x, y;
    int N, w, l, points = 0;
    cin >>N >>w >>l >>Tx >>Ty;
    vector<pair<double, char>> distances(2*N);

    for (int i=0; i<N; i++) {
        cin >> x >> y;
        distances[i].first = euclidean (x, y);
        distances[i].second = 'A';
    }
    
    for (int i=N; i<2*N; i++) {
        cin >> x >> y;
        distances[i].first = euclidean (x, y);
        distances[i].second = 'R';
    }

    sort(distances.begin(), distances.end());

    char team = distances[0].second == 'A' ? 'A' : 'R';

    int i = 0;
    while(distances[i++].second == team)
        points++;

    if(team == 'A')
        cout<< "A " << points;
    else
        cout<< "R " << points;

    return 0;
}