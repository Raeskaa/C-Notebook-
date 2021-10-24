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

/* 
a) Only names of variables are passed and not their types while calling a function
b) We pass the values ,not varibles themselves. Loval variables are created in functions which are destroyed on returning from them
c) A function can be called from any other function or main function
*/
// Questions on functions
// Printing all prime numbers btween a and b

int main()
{
    int a,b;
    cin >> a>>b;
    
    for(int i=a; i<=b; i++){
        for(int m=2; m<i; m++){
            if(i%m==0){
                break;
            }
            else{
                if(m==i-1){
                    cout<< i<< " ";
                }
                continue;
            }
        }
    }
}

// Printing all prime numbers btween a and b using function ( Imma gettin error ) 

bool PrimeOrNot(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<< 0;
            break;
        }
        else{
            if(i==n-1){
                cout<<1;
            }
            continue;
        }
    }
    return 0;
}
int main(){
    int a,b;
    cin >> a>> b;
     for( int x= a+1; x<b;x++ ){
         if( PrimeOrNot(x)==1){
        cout<< x;
    }
    else{
        continue;
    }
     }
}

