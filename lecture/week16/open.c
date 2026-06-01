#include <stdio.h>

typedef struct{
    char name[ 20 ];
    char surname[ 20 ];
    int ID;
} student;

void print_student( student *p ){
    printf( "%d %s %s\n", p->ID, p->name, p->surname );
}

int main(){
    student x = { "Ali", "Yilmaz", 101 };
    student y;
    
    FILE *in, *out;
    
    out = fopen( "output2.txt", "w" );
    
    if( !out ) printf( "Could not open the file!" );
    else{
        fprintf( out, "%d\n", x.ID );
        fprintf( out, "%s\n", x.name );
        fprintf( out, "%s", x.surname );
    }
    
    fclose( out );
    
    in = fopen( "output.txt", "r" );
    if( !in ) printf( "Could not open the file for reading!" );
    else{
        fscanf( in, "%d", &y.ID );
        fscanf( in, "%s", y.name );
        fscanf( in, "%s", y.surname );
    }
    
    
    print_student( &y );
}