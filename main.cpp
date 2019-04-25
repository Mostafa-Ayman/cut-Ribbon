#include <bits/stdc++.h>

using namespace std;

int n , a , b , c ;
int main(){
    scanf ( "%d%d%d%d" , &n , &a , &b , &c ) ;
    int max = 0 ;
    for ( int i = 0 ; i <= n ; ++i ){
        for ( int j = 0 ; j <= n ; ++j ){
            int k = ( n - ( i * a ) - ( j * b ) ) / c ;
            if ( ( i * a + j * b + c * k ) == n && i >= 0 && j >= 0 && k >= 0 )
                max = max > i + j + k ? max : i + j + k ;
        }
    }
    printf ( "%d" , max ) ;
    return 0 ;
}
