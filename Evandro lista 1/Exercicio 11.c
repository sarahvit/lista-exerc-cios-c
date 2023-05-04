int main(){
    float n[4];
    int i;
    for(i=1;i<=4;i++){
        if(i<4){
            printf("Digite o %d° numero: ", i);
            scanf("%f", &n[i]);
        }
    }
    if(n[1] <= n[2] && n[2] <= n[3]){
        printf("Ordem crescente: %.0f %.0f %.0f", n[1], n[2], n[3]);
    } else if(n[1] <= n[3] && n[3] <= n[2]){
        printf("Ordem crescente: %.0f %.0f %.0f", n[1], n[3], n[2]);
    } else if(n[2] <= n[1] && n[1] <= n[3]){
        printf("Ordem crescente: %.0f %.0f %.0f", n[2], n[1], n[3]);
    } else if(n[2] <= n[3] && n[3] <= n[1]){
        printf("Ordem crescente: %.0f %.0f %.0f", n[2], n[3], n[1]);
    } else if(n[3] <= n[1] && n[1] <= n[2]){
        printf("Ordem crescente: %.0f %.0f %.0f", n[3], n[1], n[2]);
    } else if(n[3] <= n[2] && n[2] <= n[1]){
        printf("Ordem crescente: %.0f %.0f %.0f", n[1], n[2], n[3]);
    }
    return 0;
}