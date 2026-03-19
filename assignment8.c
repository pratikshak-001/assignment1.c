# include <stdio.h>
int main()
{
  int m1 ,m2 ,m3 ,m4 ,m5 ;
   int total;
   float percentage;

printf("Enter marks of 5 subjects: ");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

if (m1 >=40 && m2 >=40 && m3>=40 && m4>=40 && m5>=40){
   total = m1 + m2 + m3 + m4 + m5;
   percentage = total /5.0;
   printf("\nTotal Marks = %d", total);
   printf("\nPercentage = %f%%",percentage);
   printf("\nResult: PASS");

if (percentage >=75)
   printf("\nGrade: Distinction");
else if(percentage >=60)
   printf("\nGrade: First Division");
else if (percentage >=50)
  printf("\nGrade: Second Division");
else 
   printf("\nGrade: Third Division");
}
else{
  printf("\nResult: FAIL");
}
return 0;
}


   
