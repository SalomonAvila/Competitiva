#include <bits/stdc++.h>

//Tipos de datos y Estructuras

#define mod %
#define ll long long

//Vectores
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>

//Ciclos
#define forn(i,n) for(int i = 0; i<n; i++)
#define forn2(n,i) for(int i = n; i>=0; i--)
#define forn3(n) for(auto &i : n)

//Operaciones

/*
 * (x+ y) mod m = (x mod m+ y mod m) mod m
 */
#define msum(x,y,m)  ((x mod m) + (y mod m)) mod m
/*
 * (x− y) mod m = (x mod m− y mod m) mod m
 */
#define mres(x,y,m)  ((x mod m) - (y mod m)) mod m
/*
 * (x · y) mod m = (x mod m· y mod m) mod m
 */
#define mmul(x,y,m)  ((x mod m) * (y mod m)) mod m

//Push back del vector
#define pb push_back;


//Impresiones
#define endl "\n"

//COMENTARIOS IMPORTANTES
/*


*/

using namespace std;

void solve() {

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int T; cin>>T;
    while(T--) {
        solve();
    }

}