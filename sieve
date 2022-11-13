bool is_prime[87000009];

void sieve(){
  int im= 87000009;
 
 for(int i=2;i*i<=im;i++){
  if(!is_prime[i]){
    for(int j=i*i;j<=im;j+=i)
      is_prime[j]=true;
    }
 }


}
