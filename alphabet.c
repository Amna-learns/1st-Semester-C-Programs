#include<stdio.h> //a program to check whether the given alphabet is vowel or consonant.
int main() {
    char alphabet;
    printf("Enter the alphabet : ");
    scanf("%c", &alphabet);
   if ((alphabet < 'A' || alphabet > 'Z') && (alphabet < 'a' || alphabet > 'z'))
    printf("INVALID INPUT");
    else if (alphabet == 'a' || alphabet =='e' || alphabet == 'i' || alphabet == 'o' || alphabet 
    == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
     printf("vowel");
    else
    printf("consonant");
    return 0;
}
    