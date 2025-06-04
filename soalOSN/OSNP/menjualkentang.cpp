#include <iostream>
using namespace std;

int main(){
    long long N, M;
    cin>> N >> M;
    long long A[N], B[M];
    
    // input A & B
    for(int a = 0; a < N; a++){
        cin>>A[a];
    }
    for(int b = 0; b < M; b++){
        cin>>B[b];
    }
    
    // rata-rata
    long long RataA = 0, RataB = 0;
    for(int ra = 0; ra < N; ra++){
        RataA += A[ra];
    }
    for(int rb = 0; rb < M; rb++){
        RataB += B[rb];
    }
    RataA /= N;
    RataB /= M;
    
    while(RataA < RataB){
        return 0;
    }
}

//by Viriya6