#include<stdio.h>
#include<math.h>

int main() {
int binary, decimal = 0, remainder, i = 0;
printf("enter binary num: ");
scanf("%d", &binary);
while (binary != 0) {
remainder = binary % 10;
decimal += remainder * pow(2, i);
binary = binary / 10;
i++;
}
printf("decimal number = %d\n", decimal);
return 0;
}

