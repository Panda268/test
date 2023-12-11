#include<iostream>
using namespace std;

int n, parent[10000], Size[10000];
void make_set(){//dai dien cua i la i
    for (int i = 1; i <= n; i++){
        parent[i] = i;
        Size[i] = 1;
    }
}

int find(int v){//tim dai dien cua v dong thoi tim dai dien cua dai dien cua v tren duong di
    if (v==parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void unionn(int a, int b){//gop 2 tap hop chua a va b vao cung 1 tap hop
    int aa = find(a), bb = find(b);
    if (a!=b){
        if (Size[a] < Size[b]) swap(a,b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int main(){
    cin >> n;
    make_set();
    unionn(3,4);
    cout << find(4);
}