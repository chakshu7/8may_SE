#include<stdio.h>
#include<string.h>
main()
{
	char word[20],word2[20];
	int choice;
	
	printf("   MENU");
	printf("\n          1. Reverse a string.");
	printf("\n          2. Concatenation.");
	printf("\n          3. Palindrome.");
	printf("\n          4. Copy a string.");
	printf("\n          5. Length of the string.");
	printf("\n          6. Frequency of character s in string.");
	printf("\n          7. Find number of vowels and consonants. ");
	printf("\n          8.Exit.");
	printf("\n ");
	printf("\nPlease enter the string:");
	scanf("%s",&word);
	printf("\n ");
    printf("\nPlase enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf (" \n After the reverse of a string: %s ", strrev(word)); 
		
	}
	else if(choice==2)
	{
		printf("\n ");
		printf("\nEnter the second string for concatenation:");
		scanf("%s",&word2);
		strcat(word,word2);    
        printf("\nValue of the concatenated string is: %s",word);
		
	}
	else if(choice==3)
	{
		int i, length;
        int flag = 0;
    
   
    
    length = strlen(word);
    
    for(i=0;i < length ;i++){
        if(word[i] != word[length-i-1])
		  {
            flag = 1;
            break;
           }
        }
    
        if (flag) {
        printf("%s is not a palindrome", word);
        }    
        else {
        printf("%s is a palindrome", word);
        }
	}
	else if(choice==4)
	{
		strcpy(word2,word);    
        printf("Value of second string is: %s",word2);
	}
	else if(choice==5)
	{
		printf("Length of string is: %d",strlen(word));
	}
	else if(choice==6)
	{
		char ch='s';
		int frequency = 0;
		for (int i = 0; i < strlen(word); i++)
        {
          if (word[i] == ch)
          {
            frequency++;
          }
        }
        printf("Frequency of s in the string: %d\n", ch, frequency);
	}
	else if(choice==7)
	{
		int vowels = 0, consonants = 0;
        for (int i=0;i<strlen(word);i++)
        {
          if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
          {
            vowels++;
          }
          else if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
          {
            consonants++;
          }
        }

        printf("Number of vowels in the string: %d\n", vowels);
        printf("Number of consonants in the string: %d\n", consonants);
	}
	else if(choice==8)
	{
		printf("\nGood Bye.");
	}
	else
	{
		return 0;
	}
	
	
}
