#include <stdio.h>
#include <stdlib.h>


//Algoritma:
int main(){
float sisi1, sisi2, sisi3;
sisi1 >= 0;
sisi2 >= 0;
sisi3 >= 0;

printf( "======Menentukan Jenis Segitiga berdasarkan ketiga sisinya======\n\n" );
printf( "Masukkan sisi 1 : " );  scanf ( "%f", &sisi1 );
printf( "Masukkan sisi 2 : " );  scanf ( "%f", &sisi2 );
printf( "Masukkan sisi 3 : " );  scanf ( "%f", &sisi3 );

if( sisi1 == sisi2 && sisi1 == sisi3 && sisi2 == sisi3)
{

printf( "Segitiga tersebut termasuk Segitiga sama sisi" );

} else if( sisi1 == sisi2 && sisi2 != sisi3 && sisi1 != sisi3 || sisi1 == sisi3 && sisi3 != sisi2 && sisi1 != sisi2 || sisi2 == sisi3 && sisi2 != sisi1 && sisi3 != sisi1 )

{

printf( "Segitiga tersebut termasuk Segitiga sama kaki");

}
else if( sisi1*sisi1 + sisi2*sisi2 == sisi3*sisi3 || sisi1*sisi1 + sisi3*sisi3 == sisi2*sisi2 || sisi3*sisi3 + sisi2*sisi2 == sisi1*sisi1 )

{

printf( "Segitiga tersebut termasuk Segitiga Siku- siku");

}

else if (sisi1 != sisi2 && sisi1 != sisi3 && sisi2 != sisi3 )
{

printf( "Segitiga tersebut termasuk Segitiga Sembarang");

}

else{
    printf("segitiga tidak dapat dibangun");
}
}

