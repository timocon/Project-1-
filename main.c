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

   // Substitution cipher 

    char message;
    char emessage;//encrypted message
    char dmessage; // decrypted message
    int key;
    key = key%26 ;
    char d [100]; // array for message
    char e [100]; // array for emessage
    char f [100]; // array for dmessage
    int temp;
    
    printf("enter the key"\n);
    scanf(%d, &key);
    printf("enter message"\n);
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
                if(message[d]>=48 && message[d] <=57) //this line down to the next } allows
                // you to add numbers, so i can probably just delete this if it doesnt work
                // as its not needed
                
            
              else // this next part is for the lowercase letters
              // the next few lines should make it so that if value and key equal more than 123 it goes back to the start
                {
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
    
    dmessage[e]='\0';
    printf("Decrypted message is: \n");
    for (d=0; dmessage[d]!=NULL; d++)
        printf("%c", dmessage[d]);
    getc();
    








     
    return 0 ;}
//wesavedthis