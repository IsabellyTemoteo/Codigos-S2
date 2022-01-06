
int main() {
  string n;
  cin >> n;

  int local = 0;
  int soma = 0;

  for(int i = 0; i < n.size(); i++){
    char carac = n[i];
    //num = onde eu quero ir
    //local = ond eu to
    int num = (int)carac - 48;

    //to no 2, quero ir pro 8
    //8-2 = 6
    //SEGUNDA PARTE: quero chegar no 6, to no 8
    if( num-local > 5){
      int soma_ext = 0;

      //aqui = 6
      int aqui = num;

      //enquanto 6 > 0 vai somar
      while(aqui > 0){
        //quando aqui = 9, ou seja, depois de 3x, vai sair
        if( aqui == 9 ){
          //quando aqui = 9, o aqui vai ser = 0 e somar um pq foi pra casa 0
          aqui = 0;
          soma_ext++;
          break;
        }
        //enquanto nao chega, soma do mesmo jeito
        soma_ext++;
        aqui++;
      }

      //nisso, o aqui vai estar = 0
      //enquanto aqui foi diferente do local (ou seja, 0) soma
      while(aqui != local){
        soma_ext++;
        aqui++;
      }
        //no final soma tudo que andou
        soma += soma_ext;
        local = ;
      }
      
    else {
      //num = 6, local = 8
      if( num > local){
        soma += num-local;
        local = num;
      }

      if( num < local){
        soma += local - num;
        local = num;
      }
    }

}
  cout << soma;
  return 0;}