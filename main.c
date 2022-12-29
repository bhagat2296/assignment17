#include <stdio.h>
#include <stdlib.h>

/*int main()                                                    //Question 1
{
    char str[100];
    int cnt=0;

    printf("enter name:");
    fgets(str,100,stdin);
    puts(str);
    //printf("%s",str);

    for(int i=0;str[i];i++)
        cnt++;
        printf("string length is:%d",cnt);
        //printf("%d",strlen(str));



    return 0;
}*/


/*
int main()                                                    //Question 2
{
    char str[100];
    int cnt=0;

    printf("enter name:");
    fgets(str,100,stdin);
    puts(str);
    //printf("%s",str);

    for(int i=0;str[i];i++)
    { cnt=0;
        for(int j=0;str[j]!='\0';j++)
    {
        if(i!=j)
        {
            if(str[i]==str[j])
                cnt++;
        }
    }

        printf("occurence of %c character is:%d\n",str[i],cnt);

        //printf("%d",strlen(str));
    }


    return 0;
}*/



/*int main()                                                    //Question 3
{
    char str[100];
    int cnt=0;

    printf("enter name:");
    fgets(str,100,stdin);
    puts(str);
    //printf("%s",str);

    for(int i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'||str[i]=='I')
            cnt++;
    }
        printf("number of vowel in the string is:%d",cnt);



    return 0;
}*/





/*int main()                                                    //Question 4
{
    char str[100];
    int cnt=0;

    printf("enter name:");
    fgets(str,100,stdin);
    //puts(str);
    //printf("%s",str);

    for(int i=0;str[i];i++)
    {
        char ch=str[i];
        if(ch>96)
        {
            str[i]=str[i]-32;
        }
    }
    printf("TO UPPERCASE %s",str);


    return 0;
}*/



/*int main()                                                    //Question 5(* concern in output)
{
    char str[100];
    printf("enter string:");
    fgets(str,100,stdin);
    //puts(str);
    //printf("%s",str);


    for(int i=0;str[i];i++)
    {

        if(str[i]<91)
        {
            str[i]=str[i]+32;
        }
    }
    printf("TO LOWERCASE %s",str);


    return 0;
}*/


/*int main()                                                    //Question 6
{
    char str[100];

    printf("enter name:");
    fgets(str,100,stdin);
    //puts(str);
    //printf("%s",str);
    char ch=strlen(str);
    printf("Reverse string is:\n")
    for(int i=ch-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}*/



/*int main()                                                    //Question 7
{
    char str[100];
    int spl=0,dig=0,alpb=0;

    printf("enter name:");
    fgets(str,100,stdin);
    //puts(str);


    for(int i=0;str[i];i++)
    {
        char ch=str[i];
        if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
            alpb++;
        else if(ch>=48 && ch<=57)
            dig++;
        else if((ch>=32 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96))
            spl++;

    }
    printf("Number of alphabate is %d\n",alpb);
    printf("Number of special character is %d\n",spl);
    printf("Number of digit is %d",dig);


    return 0;
}*/



/*int main()                                                    //Question 8
{
    char str[100];
    char copy[100];

    printf("enter string:");
    fgets(str,100,stdin);
    puts(str);
    //printf("%s",str);

    for(int i=0;str[i];i++)
    {
        copy[i]=str[i];
    }

        printf("copied string is:%s",copy);



    return 0;
}*/



/*int main()                                                    //Question 9
{
    char str[100];
    char temp;


    printf("enter name:");
    fgets(str,100,stdin);
    //puts(str);


    for(int i=0;str[i];i++)
    {
        for(int j=0;str[j]!='\0';j++)
       {
        if(i!=j)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }

       }
    }
        printf("sorted string is %s",str);


        return 0;


}*/


int main()                                                    //Question 10
{
    char str[256];
    int freq[256]={0};

    printf("enter name:");
    fgets(str,256,stdin);
    puts(str);
    //printf("%s",str);

    for(int i=0;str[i];i++)
    {
        freq[str[i]]++;
    }

    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        printf("frequency of character '%c' is:- %d  \n",i,freq[i]);
    }
        //printf("%d",strlen(str));



    return 0;
}



