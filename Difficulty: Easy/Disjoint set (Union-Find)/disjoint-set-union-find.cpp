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
    int p_x=find(par,x);
    int p_z=find(par,z);
    par[p_x]=p_z;
}
