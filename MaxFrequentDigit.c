#include<stdio.h>
#include<string.h>
struct major{
    int target;
    int count;
};

int maxFrequentDigit(int input1, int input2, int input3, int input4){
    int num[]={input1,input2,input3,input4};
    int digit[50];
    int index=0;
    for(int i=0;i<4;i++){
        while(num[i]>0){
            digit[index]=num[i]%10;
            num[i]/=10;
            index++;
        }
        
    }
    int temp,pass=1;
    while(pass!=0){
        pass=0;
        for(int i=0;i<index-1;i++){
            if(digit[i]<digit[i+1]){
                pass++;
                temp=digit[i];
                digit[i]=digit[i+1];
                digit[i+1]=temp;
            }
        }
    }
    int tempnum = -1;
    int tempcount;
    struct major n;
    n.count=0;
    n.target=0;

    for(int i=0;i<=index;i++){
        if(digit[i]!=tempnum){
            tempnum=digit[i];
            tempcount = 0;
        }
        else{
            tempcount++;
            if(tempcount>n.count){
                n.count=tempcount;
                n.target=tempnum;
            }
            
        }
        
    }
    return n.target;
}
int main(){
    int input1=1234;
    int input2=5678;
    int input3=1234;
    int input4=5678;
    int n = maxFrequentDigit(input1,input2,input3,input4);
    printf("\n%d",n);
    return 0;
}e