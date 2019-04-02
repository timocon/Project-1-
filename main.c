//hellowolrd
#include <stdio.h>
int main(){
    // Made a menu interface which comes up with the first 4 options for the project
    printf("Please select an option\n");
    printf("a) Encryption with a rotation cipher key:\n");
    printf("b) Decryption with a rotation cipher key:\n");
    printf("c) Encryption with a substitution cipher given plain text and key:\n");
    printf("d) Decryption with a substitution cipher given plain text and key:\n");
    // need to make a user input section, week 6 lecture has stuff on it  
    
    
    char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // An array for the alphabet using a string
    //the string was started by using the ""
    
    printf("%c\n", d[6]); // the letter you want minus 1, 
    //so G is the 7th letter but you'd write 6
    
    printf("%s\n", d);
    // the %s lets you type a string 
    
    scanf("%s", d);
    //the %s scans the string
    
     printf("%s\n", d);
    char c;
   // scanf("%c", c);
    //C = C - 65;
   // should make the letter C worth the numerical value 3
    // i think im meant to use this to make the rotation cipher key
    
    
    return 0 ;}
//wesavedthis