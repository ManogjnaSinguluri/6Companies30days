bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize){
    for(int i=0;i<numCourses;i++){
        while(suit(**prerequisites,prerequisitesSize,i)==i||suit(**prerequisites,prerequisitesSize,i)==-1){
            i=suit(**prerequisites,prerequisitesSize,i);
        }
        if(suit(**prerequisites,i)==i){
            return false;
        }
    }
  return true;
}
int suit(int **prerequisites,int n,int a){
    int i=0;
    while(i<n&&prerequisites[i][0]!=a){
        i++;
    }
    if(i==n){
        return -1;
    }
    return prerequisites[i+1][0];
}