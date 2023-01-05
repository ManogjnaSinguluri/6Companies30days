int evalRPN(char ** tokens, int tokensSize){
    int stack[tokensSize];
    int top=-1;
    for(int i=0;i<tokensSize;i++){
        int x,y;
        if(tokens[i][0]=='+'&&strlen(tokens[i])==1){
            x=stack[top--];
        y=stack[top--];
              stack[++top]=x+y;
        }
           else if(tokens[i][0]=='*'&&strlen(tokens[i])==1){
               x=stack[top--];
        y=stack[top--];
               stack[++top]=x*y;
           }
           else if(tokens[i][0]=='/'&&strlen(tokens[i])==1){
               x=stack[top--];
               y=stack[top--];
               stack[++top]=y/x;
           }
           else if(tokens[i][0]=='-'&&strlen(tokens[i])==1){
               x=stack[top--];
        y=stack[top--];
               stack[++top]=y-x;
        }
        else{
            stack[++top]=atoi(tokens[i]);
            
        }
    }
    return stack[top];
}
