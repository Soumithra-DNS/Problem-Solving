int i, j, k;
for (i=0 ; i<=N ; i++)
    p[i] = 1;
for (i=2 ; i<=N ; i++){
    k = p[i];
    j = ;  
    while (a[p[i-1]] > a[k]){
        p[j] = p[j-1];
        j--;}
    p[j] = k;}