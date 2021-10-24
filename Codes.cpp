// Code to find out if a number is 

int main()
{
     int n;
     cin >> n;
     
     int total =0;
     int originaln=n;
     while(n>0){
         int lastdigit = (n%10);
         total += pow(lastdigit,3);
         n= n/10;
     }
     if(total == originaln){
         cout<< "Yes"<< endl;
     }
     else{
         cout<< "fuckyou";
     }
}

// Code to make a function which calculates factorial

int Factorialfunc( int n){
    int factorial =1;
    for( int b= 1 ;b<=n; b++){
         factorial = b*factorial; 
     };
     return factorial;
}
int main()
{
    int a;
    cin >> a;
    cout<< Factorialfunc(a);
}


