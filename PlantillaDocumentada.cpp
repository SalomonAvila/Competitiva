#include <bits/stdc++.h>

//Tipos de datos y Estructuras
#define mod %
#define ll long long
//Vectores
#define vi vector<int>
#define vl vector<ll>
//Stack
#define si stack<int>


//Ciclos
#define forn(i,n) for(int i = 0; i<n; i++)
#define forn2(n,i) for(int i = n; i>=0; i--)

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
/*
* x^n mod m = (x mod m)^n mod m
 */
#define mdiv(x,n,m)  expo((x mod m),n) mod m


#define pb push_back;

//Impresiones
#define endl "\n"

//Funciones
//Exponenciar un numero con la base y el
ll expo(ll b, ll e ) {
    ll ans = 1;
    for(int i = 0 ; i < e ; i++) {
        ans *= b;
    }
    return ans;
}


//COMENTARIOS IMPORTANTES
/*


*/


using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);

}