#include <stdio.h>
#include <string.h>
char encryptrotationkey (char[], int); //caesar cipher encryption function
char decryptrotationkey (char[], int); //caesar cipher decryption function
char encryption (char, char);// substitution cipher encryption function
char decryption (char, char);// substitution cipher decryption function


int main(){

    // Made a menu interface which comes up with the first 4 options for the project
    printf("Please select an option\n");
    printf("a) Encryption with a rotation cipher key:\n");
    printf("b) Decryption with a rotation cipher key:\n");
    printf("c) Encryption with a substitution cipher given plain text and key:\n");
    printf("d) Decryption with a substitution cipher given plain text and key:\n");
    char a;
    scanf("%c", &a);
    char var1;  //acts as the encrpyted/decrypted char in all cases
    int var2; //acts as the key for the switch cases
    char var3;
    while(a <'a' || a > 'd') // make the menu input only read the letters a,b,c,d 
     
    switch (a) 
        {
        case 'a': 
                    printf("Enter a word:\n");
                    scanf("%c", &var1);
                    printf("Enter your key:\n");
                    scanf("%d", &var2);
        encryptrotationkey(var1,var2); break;
        case 'b':
                    printf("Enter a word:\n");
                    scanf("%c", &var1);
                    printf("Enter your key:\n");
                    scanf("%d", &var2);
        decryptrotationkey(var1,var2); break;
        case 'c': 
                    printf("Enter a word:\n");
                    scanf("%c", &var1);
                    printf("Enter your key:\n");
                    scanf("%", &var3);
        encryption(var1,var2); break;
        case 'd': 
                    printf("Enter a word:\n");
                    scanf("%c", &var1);
                    printf("Enter your key:\n");
                    scanf("%d", &var3);
        decryption(var1,var2); break;
        default: printf("unknown option %d\n Please enter a, b, c or d\n", a);
        }
        
        
} 
// need to add file input 
 
 ///////////////////////////////////////////////
 //////////////////////////////////////////////
 
   // #include <stdio.h>
   // #include <string.h>
    char encryptrotationkey (char c[100], int key)
    //int main()
    //switch statements arent working, leaving int main so i can copy and paste to show 
    // that individual code works, also leaving char, and int commented out for same reason 
    {
        // char c[100]; //array number equals how many letters can be encrypted
        // int key; //key is how many letters it needs to move to the right 
        //remove comments from the char and int to run program individually
    printf("Enter a letter to encrypt (Caps only): ");
    scanf (" %[^\n]s", c); // scans the letter entered and adds it to char c 
    // [^\n] ignores the space
    printf("Enter a number key:");
    scanf("%d", &key);
    int counter = 0;
    for (counter = 0; counter<50; counter++) // change the '<' number for how much output you want
    {
      if(c[counter]!=32) //allows you to use space bar
      if(c[counter]!=58)
       c[counter] = ((c[counter] - 65)  + key)%26 +65; // loops the Z back around to A
    } 
  
    printf("%s\n", c);
    return encryptrotationkey;
    //return c;  //if running individually
    }   
////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////


//#include<stdio.h>
//#include <string.h>

//decipher code: looks like this works
   
   char decryptrotationkey (char [100], int key);
  // int main() 
  //switch statements arent working, leaving int main so i can copy and paste to show 
    // that individual code works, also leaving char, and int commented out for same reason 
   {
       //char c[100]; //array number equals how many letters can be decrypted
       //int key ; 
      
       int counter = 0;
       printf("Enter a letter to encrypt (Caps only): ");
       scanf (" %[^\n]s", c);
       printf("Enter a number key:");
       scanf("%d", &key);
        key = 26 - key; //cant figure out how to make a go to z 
       // but using 26 minus the key does it by rotating to the right 
       //using the total letters in the alphabet - the key 
       int counter = 0;
       for (counter = 0; counter<50; counter++) // change the '<' number for how much output you want
       if(c[counter]!=32)// makes the key ignore ' ' (blank space/space bar)
       if(c[counter]!=58)// makes the key ignore ':' 
      // if (c[counter] 65 +26 )
       c[counter] = ((c[counter] - 65) + key)%26 +65;
       // was going to use ((c[counter]- 65) -key) but that 
       // makes the rotation go left and i dont know how to make the a turn in a z
       //this way i can make the key work properly and get a to turn to z 
       
       printf("%s\n", c);
       return decryptrotationkey;
       //return c; //use if running individually
   
  


 ///////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////
 ///the switch statements have some errors that dont let the substitution ciphers run
 // so i rewrote them to work individually 
  
  //switch statements arent working, leaving int main so i can copy and paste to show 
    // that individual code works, also leaving char, and int commented out for same reason
 
//#include <stdio.h>
//#include <string.h>

char encryption (char cipher_text[], char key[26])

char alpha[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//char key [26];
//char cipher_text[];   //remove comments to run individual program
//int main ()
{
    
    char *c_text, msg[255];
    printf("\n --- Substitution Cipher Code ---\n");
    printf("\nEnter plain text :");
    scanf("%[^\n]", msg);
    printf("\n Your plain text message is : %s", msg);
    
    int i, j;
    printf("\nenter the unique key of 26 characters for encryption :");
    scanf("%s", key);
    printf("\ncharacter replaced\n");
    printf("\nabcdefghijklmnopqrstuvwxyz\n");
        printf("||||||||||||||||||||||||||");
    printf("\n%s\n", key);
    for (i=0; i<strlen(msg); i++){ // switch out cipher_text with msg
        for (j=0; j<26; j++)
        {
            if(alpha[j]==msg[i]){ // switch out cipher_text with msg 
                msg [i] =key[j]; // switch out cipher_text with msg 
                break;
            }
        }
    }
    //c_text = encryption(msg) 
    // in the function encryption (cipher_text[])
    // msg should equal the cipher text and ma
    
    
    
   // key = c_text;
    printf("\nYour encrypted msg is: %s\n", msg);
    return msg;
}
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
      //subsitution decryption program works on its own 
      //#include <stdio.h>
      //#include <string.h>
       // int main() 
  //switch statements arent working, leaving int main so i can copy and paste to show 
    // that individual code works, also leaving char, and int commented out for same reason

//sub decryption

char decryption (char cipher_text[], char key[26])

char alpha[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//char key [26];
//char cipher_text[];
//int main ()
{
    
      char *c_text, msg[255];
    printf("\n --- Substitution Cipher Code ---\n");
    printf("\nEnter encrypted text :");
    scanf("%[^\n]", msg);
    printf("\n Your encrypted text message is : %s", msg);
    
    int i, j;
    printf("\nenter the unique key of 26 characters for decryption :");
    scanf("%s", key);
    printf("\ncharacter replaced\n");
    printf("\n%s\n", key);
        printf("||||||||||||||||||||||||||");
    printf("\nabcdefghijklmnopqrstuvwxyz\n");    
   
    for (i=0; i<strlen(msg); i++){ // switch out cipher_text with msg
        for (j=0; j<26; j++)
        {
            if(key[j]==msg[i]){ // switch out cipher_text with msg 
                msg [i] =alpha[j]; // switch out cipher_text with msg 
                break;
            }
        }
    }
    //c_text = encryption(msg) 
    // in the function encryption (cipher_text[])
    // msg should equal the cipher text and ma
    
    
   // key = c_text;
    printf("\nYour decrypted msg is: %s\n", msg);
    return msg;
}
///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////