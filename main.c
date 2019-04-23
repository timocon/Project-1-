#include <stdio.h>
char encryptrotationkey (char *c, int key);
char decryptrotationkey (char *c, int key);

char encryptsubkey (char message, char emessage, char dmessage, int key, int temp, char e, char d, char f);
char decryptsubkey (void);

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
   
   // the %s lets you type a string, should be the array + the key numeral 
int encryptsubkey (char message, char emessage, char dmessage, int key, int temp, char e, char d, char f);
    {
   // Substitution cipher 

    char *message;
    char *emessage;//encrypted message
    char *dmessage; // decrypted message
    int key; // int key was used earlier for the rotation cipher
    // if i put everything into functions will it ignore the other int key
    key = key%26 ;
    char d [100]; // array for message
    char e [100]; // array for emessage
    char f [100]; // array for dmessage
    int temp;
    
    printf("enter the key\n");
    scanf(%d, &key);
    printf("enter message\n");
    gets(message); // read a line from stdin and stores it at a location ()
    for (d=0; message[d]!=NULL; d++)
        message[d] = tolower(message[d]); 
        // tolower converts letters to lowercase
    for (d=0; message[d]!=NULL; i++);
    {
        printf("%c", message[d]);
        if (message[d]==' ')
            emessage[e++]=message[d];
            else {
                if (message[d]>=97 && message[d]<=123)
                    {
                        temp=message[d]+key;
                        if(temp>122)
                            emessage[e++]=97+(temp-123);
                            else 
                            emessage [e++]= temp;
                    }
                    else 
                        emessage[e++]=message[d];
                }
                printf("%c", emessage[e]);
            }
    }
    emessage[e]='\0';
    printf("Encrypted message is \n");
    
    
    //decrypting messaging section below
    
    for (d=0; emessage[d]!=NULL; d++)
        printf("%c", emessage[d]);
    
    for (d=0, e=0; emessage[d]!=NULL; d++)
    {
        if(emessage[d]==' ')
            dmessage[e++]=emessage[d];
            else
            {
                if(emessage[d]>=97 && emessage[d]<=123)
                {
                    temp=emessage[d]-key;
                    if (temp<97)
                        dmessage[e++]=123-(97-temp);
                        else
                            dmessage[e++]=temp;
                }

                else 
                dmessage[e++]=emessage[d];
            }
    }
    
    return void;
    }

    
    dmessage[e]='\0';
    printf("Decrypted message is: \n");
    for (d=0; dmessage[d]!=NULL; d++)
        printf("%c", dmessage[d]);
    getc();
    

    return 0 ;
    }
