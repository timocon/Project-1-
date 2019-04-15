//hellowolrd
#include <stdio.h>
int encryptrotationkey ();
int decryptrotationkey ();
int encryptsubkey ();
int decryptsubkey ();

int main(){
    
    
    
    // Made a menu interface which comes up with the first 4 options for the project
   // printf("Please select an option\n");
    //printf("a) Encryption with a rotation cipher key:\n");
    //printf("b) Decryption with a rotation cipher key:\n");
    //printf("c) Encryption with a substitution cipher given plain text and key:\n");
    //printf("d) Decryption with a substitution cipher given plain text and key:\n");
    //char a;
    //scanf("%c", &a);
    
    //switch (a) {
      //  case 'a': encryptrotationkey(); break;
        //case 'b': decryptrotationkey(); break;
        //case 'c': encryptsubkey(); break;
        //case 'd': decryptsubkey(); break;
        //default: printf("unknown option %d\n Please enter a, b, c or d\n", a);
    //}

        //a switch statement for the user interface section. dont know if i still need the top section
        // with the printf's 
    
    // need to make a user input section, week 6 lecture has stuff on it using a switch with letters  
    
    
    //char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // An array for the alphabet using a string
    //the string was started by using the ""
    char c[100]; 
    //example letter
    int key = 2; //key is how many letters it needs to move 
    
    //sizeof(c)/sizeof(char); 
   //'\0' 
    printf("Enter a letter to encrypt (Caps only): ");
    scanf (" %[^\n]s", c); // scans the letter entered and adds it to char c 
   // [^\n] ignores the space
    int counter = 0;
    for (counter = 0; counter<10; counter++)
    //for (counter = 0; counter<c[counter]; counter++)
    
    //Cipher code:
    
    {
      if(c[counter]!=32) //allows you to use space bar
       c[counter] = ((c[counter] - 65)  + key)%26 +65; // loops the Z back around to A
    } 
  
   
   printf("%s\n", c);
   
   
   //decipher code: looks like this works
   {
       if(c[counter]!=32)
      c[counter] = ((c[counter] - 65) - key)%26 +65;
       //i think this would decrypt a text 
       //want to find a way to loop the A to a Z
   }
   
   printf("%s\n", c);
   
   
   // the %s lets you type a string, should be the array + the key numeral 
     
    return 0 ;}
//wesavedthis