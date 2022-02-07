#include <stdio.h>
main()
{
float a,b;

    scanf("%f",&a);
    scanf("%f",&b);
    printf("masukkan nilai a : %.0f\n",a);
    printf("masukkan nilai b : %.0f\n",b);


/*buatlah perintah printf yang akan mencetak text  "masukkan nilai b : "
dan perintah scanf untuk menginput nilai variabel b*/


/*buatlah kondisi if
-> Jika b sama dengan 0 maka goto tak_berhingga; */
if(b == 0) {
goto tak_berhingga;
}

    printf("%f dibagi dengan %f adalah %f\n",a,b,a/b);

    goto selesai;//tulislah statement goto selesai

tak_berhingga://buatlah label untuk statement goto dengan nama tak_berhingga
        printf("%f dibagi dengan 0 adalah TAK BERHINGGA\n",a);

        selesai:
            ;
}
