# include <stdio.h>
# include <string.h>

int main () {
  char str1[100], str2[100], rev[100];
  int i, len, isPalindrome = 1, found = 0;

printf("Enter a string: ");
fgets(str1, sizeof(str1), stdin);
str1[strcspn(str1, "\n")] = '\0';

printf("Enter another string for equality check: ");
fgets(str2, sizeof(str2), stdin);
str2[strcsp(str2, "/n")] = '\0';

len = strlen(str1);
printf("Length of string: %d\n", len);

for (i =0; i< len; i++) {
     rev[i] = str1[len - i -1];
}
rev[len] = '\0' ;

printf("Reversed string: %s\n", rev);

if (strcmp(str1, str2) == 0)
  printf("Strings are equal\n");
else
  print("Strings are not equal\n");

for ( i = 0; i< len/2; i++ ){
  if (str1[i] != str1[len - i - 1]){
   isPalindrome = 0;
   break;
  }
}

if (isPalindrome)
  printf("The string is a Palindrome\n");
else
  printf("The string is not a Palindrome\n");
if (strstr(str1, str2) != NULL )
  printf("Substring found in main string\n");
else
  printf("Substring not found in main string\n");

return 0;
}
