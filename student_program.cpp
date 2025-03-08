#include <stdio.h>

int GetSet( int arr[ ] ) ;

int main() {
    int *data, num ;  // กำหนดอาร์เรย์ขนาดคงที่
    num = GetSet( data ) ;

    printf( "\n" ) ;
    return 0 ;
}//end function

int GetSet( int arr[ ] ) {
    int n ;
    arr = new int[ n ] ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &n ) ;

    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        scanf( "%d", &arr[ i ] ) ;
    }//end for

    printf( "Number of elements: %d\n", n ) ;
    for (int i = 0 ; i < n ; i++ ) {
    printf( "%d ", arr[ i ] ) ;
    }//end for
    printf( "\n" ) ;

    return n ;
}//end function
