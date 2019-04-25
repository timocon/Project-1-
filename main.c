#include <stdio.h>
#include <string.h>
char *encryptrotationkey (char []); //caesar cipher encryption function
char *decryptrotationkey (char[]); //caesar cipher decryption function
char *encryption (char[]);// substitution cipher encryption function
void *decryption (char[]);// substitution cipher decryption function


int main(){

    // Made a menu interface which comes up with the first 4 options for the project
    printf("Please select an option\n");
    printf("a) Encryption with a rotation cipher key:\n");
    printf("b) Decryption with a rotation cipher key:\n");
    printf("c) Encryption with a substitution cipher given plain text and key:\n");
    printf("d) Decryption with a substitution cipher given plain text and key:\n");
    char a;
    scanf("%c", &a);
    
    while(a <'a' || a > 'd') // make the menu input only read the letters a,b,c,d 
     
    switch (a) 
        {
        case 'a': encryptrotationkey(char c, int key); break;
        case 'b': decryptrotationkey(); break;
        case 'c': encryptsubkey(); break;
        case 'd': decryptsubkey(); break;
        default: printf("unknown option %d\n Please enter a, b, c or d\n", a);
        }
        
        
} 
// need to add file input 
 
 ///////////////////////////////////////////////
 //////////////////////////////////////////////
 
    char * encryptrotationkey (char c, int key)
    {
    char c[100]; //example letter
    int key = 2; //key is how many letters it needs to move 
    printf("Enter a letter to encrypt (Caps only): ");
    scanf (" %[^\n]s", c); // scans the letter entered and adds it to char c 
    // [^\n] ignores the space
    int counter = 0;
    for (counter = 0; counter<100; counter++)
    {
      if(c[counter]!=32) //allows you to use space bar
      if(c[counter]!=58)
       c[counter] = ((c[counter] - 65)  + key)%26 +65; // loops the Z back around to A
    } 
  
    printf("%s\n", c);
    return encryptrotationkey;
    }   
////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
//#include<stdio.h>

//decipher code: looks like this works
   //int decryptrotationkey (char c, int key);
   int main()
   {
       char c[100]; 
       int key = 5;
       key = 26 - key; //cant figure out how to make a go to z 
       // but using 26 minus the key does it by rotating to the right 
       //using the total letters in the alphabet - the key 
       int counter = 0;
       printf("Enter a letter to encrypt (Caps only): ");
       scanf (" %[^\n]s", c);
       for (counter = 0; counter<100; counter++)
       if(c[counter]!=32)
       if(c[counter]!=58)
      // if (c[counter] 65 +26 )
       c[counter] = ((c[counter] - 65) + key)%26 +65;
       // was going to use ((c[counter]- 65) -key) but that 
       // makes the rotation go left and i dont know how to make the a turn in a z
       
       //want to find a way to loop the A to a Z
       printf("%s\n", c);
       return c; //not sure if this is right?
   }
   
  

//substitution key
   

char *encryption (char[]);
void *decryption (char[]);
char alpha[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key [26];
int main ()
{
    int choice, flag=0;
    //int i, key
    char *c_text, msg[255];
    printf("\n --- Substitution Cipher Code ---\n");
    printf("\nEnter plain text :");
    scanf("%[^\n]", msg);
    printf("\n Your plain text message is : %s", msg);
    do {
        printf("\npress 1 for encryption \npress 2 for decryption \npress '0' for exit \n");
        scanf ("%d", &choice);
        switch (choice){
            case 1:
                c_text=encryption(msg);
                flag=1;
                break;
            case 2:
                if (flag==1)
                decryption (c_text);
                else 
                    printf("first perform encryption process");
                break;
            case 0 :
                break;
            default :
                printf("\nplease enter valid choice\n");
                break;
        }
    }while (choice !=0);
}
char *encrpytion (char cipher_text[]){
    int i, j;
    printf("enter the unique key of 26 characters for encryption :");
    scanf("%s", key);
    printf("\ncharacter replaced\n");
    printf("\nabcdefghijklmnopqrstuvwxyz\n");
        printf("||||||||||||||||||||||||||");
    printf("\n%s\n", key);
    for (i=0; i<strlen(cipher_text); i++){
        for (j=0; j<26; j++)
        {
            if(alpha[j]==cipher_text[i]){
                cipher_text [i] =key[j];
                break;
            }
        }
    }
    printf("\nYour encrypted msg is: %s", cipher_text);
    return cipher_text;
}
void *decryption(char cipher_text[]){
    int i, j;
    char cipher[255];
    strcpy(cipher, cipher_text);
    printf("\n Decryption process \n");
        for(i=0; i <strlen(cipher); i++) {
            for (j=0; j<26; j++)
            {
                if (cipher[i]==key[j])
                {
                    cipher[i]=alpha[j];
                    break;
                }
        }
    }
     printf("\nDecrypted text %s", cipher);
     return cipher_text;
}


 ///////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////
 ///the switch statements have some errors that dont let the substitution ciphers run
 // so i rewrote them to work individually 
 
//#include <stdio.h>
//#include <string.h>

//char *encrpytion (char cipher_text[])

char alpha[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key [26];
char cipher_text[];
int main ()
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
    printf("\nYour encrypted msg is: %s", msg);
    return msg;
}
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
      //subsitution decryption program works on its own 
      //#include <stdio.h>
      //#include <string.h>

//sub decryption

char alpha[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key [26];
char cipher_text[];
int main ()
{
    
      char *c_text, msg[255];
    printf("\n --- Substitution Cipher Code ---\n");
    printf("\nEnter encrypted text :");
    scanf("%[^\n]", msg);
    printf("\n Your encrypted text message is : %s", msg);
    
    int i, j;
    printf("\nenter the unique key of 26 characters for encryption :");
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
    printf("\nYour decrypted msg is: %s", msg);
    return msg;
}
///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////