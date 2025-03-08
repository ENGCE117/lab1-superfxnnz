#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;// ประกาศใช้ฟังก์ชั่น  GetMatrix

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;//เรียกใช้ฟังก์ชั่น
    return 0 ;//จบการทำงาน
}//end function

 
int *GetMatrix( int *row, int *col ) {
    int *value ;
    scanf( "%d %d", row, col ) ;//ใส่แถว คอลัมน์

    value = new int [*row * *col] ;
 

    if( *row == 0 && *col == 0 ) {
        printf( "Enter number of rows and columns: 0 0" ) ;
    }
    else if( ( *row == 0 && *col > 0 ) || ( *row > 0 && *col == 0 ) ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
    }else{
        printf( "Enter the elements of matrix: " ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &value[ i * ( *col ) + j ]  ) ; 
                if( getchar() == '\n' &&  i == *row - 1 && j == *col - 2 ) {
					printf( "Error: Invalid matrix input" ) ;
					return 0 ;
				}//end if
            }//end for
        }//end for

        printf( "Matrix (%dx%d): \n", *row, *col ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                printf( "%d ", value[ i * ( *col ) + j ] ) ;//แสดงค่าทีละตัว
            }
            printf( "\n" ) ;
        }//end for
    }//end else
    return value ;
 }//end function
