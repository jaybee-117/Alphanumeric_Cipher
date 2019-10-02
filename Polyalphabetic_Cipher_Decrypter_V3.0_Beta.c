#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char ENCRYPTED_MESSAGE[1000];
    char DECRYPTED_MESSAGE[1000];    
	char KEYWORD[1000];
    int i=0,j=0,k,l,key_size, message_size;
	printf("Enter the cipher text IN LOWER CASE WITHOUT BLANK SPACE:");
	scanf("%s", ENCRYPTED_MESSAGE);
	printf("Enter the keyword:");
	scanf("%s", KEYWORD);
    key_size= strlen(KEYWORD);
    message_size= strlen(ENCRYPTED_MESSAGE);
    while(i+1<=message_size){
        if (j<=key_size){
            j=(j)%key_size;
        }
        else{
            j=(j)%key_size-1;
        }
        k=ENCRYPTED_MESSAGE[i];
        l=KEYWORD[j];
        if(k - l> 0){
            k=k-l+'a'-1;
        }
        else if(k - l<0){
            k=k-l+'a'+25;
        }
        DECRYPTED_MESSAGE[i]=k;
        i++;
        j++; 
    }
    printf("The decrypted message is:%s\n",DECRYPTED_MESSAGE);
	return 0;
}