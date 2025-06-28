/*Complete the functions below*/
int find(int par[], int x) {
    // add code here
    if(par[x]==x){
        return x;
    }
    return find(par,par[x]);
    
}

void unionSet(int par[], int x, int z) {
    // add code here.
      int px = find(par,x);
      int pz = find(par,z);
      par[px]=pz;
    
}