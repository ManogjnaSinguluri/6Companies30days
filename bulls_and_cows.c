char * getHint(char * secret, char * guess){
    int b=0,c=0;
    for(int i=0;i<strlen(secret);i++){
        if(guess[i]==secret[i]){
            secret[i]='n';
            b++;
        }
        else{
            for(int j=0;j<strlen(guess);j++){
                if(guess[i]==secret[j]&&secret[j]!=guess[j]){
                    secret[j]='n';
                    c++;
                    break;
                }
            }
        }
    }
    char* res=(char*)malloc(sizeof(char)*10);
    sprintf(res,"%dA%dB",b,c);
    return res;
}