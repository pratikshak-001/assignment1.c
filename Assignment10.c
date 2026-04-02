# include <stdio.h>
int main() {
    int choice , n1,n2,i, fact =1;
    float result;
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Power\n6.Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

   switch(choice){
case 1:
  scanf("%d%d", &n1,&n2);
  printf("Result = %d", n1+ n2);
  break;
case 2:
  scanf("%d%d", &n1,&n2);
  printf("Result = %d", n1-n2);
  break;
case 3:
  scanf("%d%d",&n1,&n2);
  printf("Result = %d", n1*n2);
  break;
case 4:
 scanf("%d%d",&n1, &n2);
if (n2 !=0 )
  printf("Result = %.2f", (float)n1/n2);
else 
printf("Division by zero not allowed ");
break;

case 5:
scanf("%d%d" ,&n1, &n2);
result = 1;
for (i =1; i<= n2; i++)
    result = result * n1;
printf("Result =%.2f", result);
break;

case 6:
scanf("%d%d", &n1,&n2);
result =1;
for(i =1; i<=n1 ; i++)
    fact = fact * i;
printf("Factorial = %d", fact);
break;

default:
  printf("Invalid choice");
   }
return 0;
}
