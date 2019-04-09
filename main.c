//hellowolrd
#include <stdio.h>
int main(){
    
    
    
    // Made a menu interface which comes up with the first 4 options for the project
    printf("Please select an option\n");
    printf("a) Encryption with a rotation cipher key:\n");
    printf("b) Decryption with a rotation cipher key:\n");
    printf("c) Encryption with a substitution cipher given plain text and key:\n");
    printf("d) Decryption with a substitution cipher given plain text and key:\n");
    // need to make a user input section, week 6 lecture has stuff on it using a switch with letters  
    
    
    //char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // An array for the alphabet using a string
    //the string was started by using the ""
    char c[100] ; 
    //example letter
    int key = 2;
    
    //printf("Enter a letter to encrypt: ");
    //scanf (" %s", c); // scans the letter entered and adds it to char c 
   
    int counter = 0;
    for (counter = 0; counter <25; counter++)
    
    {
        printf("enter a letter:");
        scanf("%s", &c);
        
        c[counter] = c[counter] + key;
    }
    
    printf("%s\n", c);
    // the %s lets you type a string, should be the array + the key numeral 
    
    
    //printf("%c\n", d[0]); // the letter you want minus 1, 
    //so G is the 7th letter but you'd write 6 
      //scanf("%s", d);
    //the %s scans the string
     //printf("%s\n", d);
   // scanf("%c", c);
    //c = c - 65;
   // should make the letter c worth the numerical value 3
    // i think im meant to use this to make the rotation cipher key
    
    
    return 0 ;}
//wesavedthis