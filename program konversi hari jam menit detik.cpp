#include <stdio.h>
#include <conio.h>
 
main()
 
{
int sec,i,jml[2],waktu[2]={3600,60};
 
 printf("Masukan jumlah detik yang mau dihitung : "); scanf("%d",&sec);
 printf("\n===============================================");
 printf("\n maka waktunya adalah :  ");
for(i=0;i<=1;i++)
{
jml[i]=sec / waktu[i];
sec= sec-(waktu[i]*jml[i]);
}
printf("\n Jam   : %d  \n Menit : %d \n Detik : %d ",jml[0],jml[1],sec);
 
getch();
 
}
