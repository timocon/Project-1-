#include <stdio.h>
#include <string.h>
char encryptrotationkey (char *c, int key);
char decryptrotationkey (char *c, int key);

char encryptsubkey ()

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
        
        
} //the functions have to be defined below main? 




// need to add file input 
        //a switch statement for the user interface section. dont know if i still need the top section
        // with the printf's 
 
    //char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // An array for the alphabet using a string
    //the string was started by using the ""
    
    
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

   
   //decipher code: looks like this works
   int decryptrotationkey (char c, int key);
   {
       char c[100]; 
       int key = 1;
       int counter = 0;
       printf("Enter a letter to encrypt (Caps only): ");
       scanf (" %[^\n]s", c);
       for (counter = 0; counter<100; counter++)
       if(c[counter]!=32)
       if(c[counter]!=58)
      // if (c[counter] 65 +26 )
       c[counter] = ((c[counter] - 65) - key)%26 +65;
       //want to find a way to loop the A to a Z
       printf("%s\n", c);
       return c; //not sure if this is right?
   }

//substitution key
   
#include <stdio.h>
#include <string.h>
char *encryption (char[]);
void *decryption (char[]);
char alpha[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char key [26];
void main ()
{
    int i, key, choice, flag=0;
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
    int i, val, j;
    printf("enter the unique key of 26 characters for encryption :");
    scanf("%s", key);
    printf("\ncharacter replaced\n");
    printf("\nabcdefghijklmnopqrstuvwxyz\n");
        printf("||||||||||||||||||||||||||")
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
    int i, val, j;
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
}










        







        