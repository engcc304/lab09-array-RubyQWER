/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array: 19  #  #  #  #  2
*/



#include <stdio.h>

// ฟังก์ชันเช็คว่าเป็นจำนวนเฉพาะหรือไม่
int isPrime( int n ) {
    if ( n <= 1 ) {
        return 0 ; // ไม่ใช่จำนวนเฉพาะ
    }//end if
    for ( int i = 2 ; i * i <= n ; i++ ) {
        if ( n % i == 0 ) {
            return 0 ; // ไม่ใช่จำนวนเฉพาะ
        }//end if
    }//end for
    return 1 ; // เป็นจำนวนเฉพาะ
}

int main() {
    int N ;
    printf( "Enter N: " ) ;
    scanf( "%d" , &N ) ;

    int values[ N ] ;

    // รับค่าจากผู้ใช้และตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
    for ( int i = 0 ; i < N ; i++ ) {
        printf( " Enter value[%d] : " , i ) ;
        scanf( "%d" , &values[i] ) ;
        
        if ( !isPrime( values[i] ) ) {
            values[i] = -1 ; // ใช้ -1 แทนค่าที่ไม่ใช่จำนวนเฉพาะ
        }//end if
    }//end for

    // แสดงผลลัพธ์
    printf( "Index:  " ) ;

    for ( int i = 0 ; i < N ; i++ ) {
        printf( " %2d  " , i ) ;
    }//end for

    printf( " \nArray:  " ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        if ( values[i] == -1 ) {
            printf( " #  " ) ;
        }//end if
         else {
            printf( " %2d  " , values[i] ) ;
        }//end else
    }//end for
    printf( " \n " ) ;

    return 0 ;
}//end function