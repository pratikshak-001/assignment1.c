#include<stdio.h>
#include<stdlib.h>
int main {}
FILE *fp;
char text [100];
char buffer [100];
/* 1.fopen() - open file for writing*/
fp= fopen("Sample.txt", "w");
if( fp == NULL) {
printf( " Error opening file!/n");
exit(1) ;
}
/*2.fputs - write string to file */
fputs("Hello students \n", fp) ;
fputs( " Welcome to file handling in c \n", fp);
/*3.fwrite() - Write in binary data */
strcpy(text, "This line is written  using fwrite \n") ;
fwrite(text, sizeof(char), sizeof(text), fp) ;
fclose(fp) ;
/*4.fopen() - open file for reading */fp= fopen(" sample.txt", "r") ;

if(fp==NULL) {
printf(" Error opening file! \n") ;
exit(1) ;
}
printf("Reading file using feels() :\n") ;
/*5.fgets() - Read line by line */
while(fgets(buffer), sizeof(buffer), fp)! =NULL) {
printf("%s", buffer) ;





  
  
  
  


