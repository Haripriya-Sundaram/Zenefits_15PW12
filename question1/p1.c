#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,len=7;
    int s[10];
    int i,j;
    scanf("%d",&n);

    for(i=0;i<7;i++){
        scanf("%d",&s[i]);
    }

    int size;
    size=len/2;
    if(s[size]==0){
          l1:
            printf("%d,",s[size-1]);
            size--;
            if(size!=0 ){
                goto l1;
            }
               size=len/2;
                int size1=size+1;
                if(s[size1]!=0){
                        l2:
                            printf("%d,",s[size1]);
                            size1++;
                            if(s[size1]<=len && s[size1]!=0){
                                goto l2;
                            }
                            else if(s[size1]==0 && size1<=len){
                                size1++;
                                goto l2;
                            }

                    }


    }

    else if(s[size]!=0){
        int count=0;
        l3:

            printf("%d,",s[size-1]);
            size--;
            count++;
            if(size!=0){

                if(count!=2){
                    goto l3;
                }
                else{
                    size=len/2;
                    printf("%d,",s[size]);
                    size=size-3;
                    printf("%d,",s[size]);
                }

                size=len/2;
                int size1=size+1;
                if(s[size1]!=0){
                        l4:
                            printf("%d,",s[size1]);
                            size1++;
                            if(s[size1]<=len && s[size1]!=0){
                                goto l4;
                            }
                            else if(s[size1]==0 && size1<=len){
                                size1++;
                                goto l4;
                            }

                    }








            }
    }


    return 0;

}
