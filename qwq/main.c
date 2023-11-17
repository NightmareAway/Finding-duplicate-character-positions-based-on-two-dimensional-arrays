#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[80],b[80];
    int i=0,j=0,lo1=0,lo2=0,k=0,num=0;
    int d[15][50]={0};
    scanf("%s",a);
    scanf("%s",b);
    lo1=strlen(a);
    lo2=strlen(b);
    for(i=0;i<lo2;i++){
        for(j=0;j<lo1;j++){
            if(b[i]==a[j])d[i][j]++;
        }
    }

    for(i=0;i<lo2;i++){
        for(j=0;j<lo1;j++){
            if(d[i][j]!=0){
                i=i+1;
                num=num+1;
                if(num==lo2)printf("%d",j-i+2);
                }
        }
    }
}
