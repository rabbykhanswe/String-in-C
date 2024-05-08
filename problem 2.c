#include<stdio.h>
int main()
{
    char str[100];
    int i,vowel,consonant,digite,other,word,len;
    i=vowel=consonant=word=digite=other=0;

    printf("Enter Your String : ");
    fgets(str,sizeof(str),stdin);

    len=strlen(str);

    for(i=0; i<len; i++){

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ){
                vowel++;

        }

        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            consonant++;
        }

        else if(str[i]== ' ' || str[i]=='\n'){
            word++;
        }


        else if(str[i]>='0' && str[i]<='9'){
            digite++;
        }
        else{
            other++;
        }

    }


    printf("Total String Types are Below-_-\n");

    printf("Total number of Vowel=%d\n",vowel);
    printf("Total number of Consonant=%d\n",consonant);
    printf("Total number of Word=%d\n",word);
    printf("Total number of Digite=%d\n",digite);
    printf("Total number of Others=%d\n",other);

    return 0;
}
