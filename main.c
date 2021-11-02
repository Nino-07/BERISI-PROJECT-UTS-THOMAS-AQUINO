#include <stdio.h>
#include <stdlib.h>

int main()
{
   while (1){
   int negara;



   printf ("=======DAFTAR NEGARA ASEAN=======\n");


   printf("1. INDONESIA                                        \n");
   printf("2. MALAYSIA                     \n");
   printf("3. THAILAND                                          \n");
   printf("4. SINGAPURA                                       \n");



printf ("keterangan\n");




        printf ("pilih  : ");
   scanf ("%d",&negara);
   switch  (negara){

   case 1:

    printf ("kepala negara : presiden \n");
    printf ("ibu kota : jakarta \n");
    printf ("hari kemerdekaan : 17 agustus \n");
    printf ("bahasa : bahasa indonesia \n");
    printf ("mata uang : rupiah\n");break;

   case 2:

    printf ("kepala negara : raja \n");
    printf ("ibu kota : kuala lumpur \n");
    printf ("hari kemerdekaan : 31 agustus \n");
    printf ("bahasa : melayu,inggris,cina dan tamil \n");
    printf ("mata uang : ringgit\n");break;

    case 3:

    printf ("kepala negara : raja \n");
    printf ("ibu kota : bangkok \n");
    printf ("hari kemerdekaan : 5 desember \n");
    printf ("bahasa : thai \n");
    printf ("mata uang : baht\n");break;
      case 4:

    printf ("kepala negara : presiden \n");
    printf ("ibu kota : singapura \n");
    printf ("hari kemerdekaan : 9 agustus \n");
    printf ("bahasa : inggris,cina mandarin,melayu dan tamil \n");
    printf ("mata uang : dolar singapura\n");break;







          default:

             printf("====TERIMAKASIH====\n");





   }


   }





   return 0;
}
