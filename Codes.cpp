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
    int k;
    for(int i=2; i<n; i++){
        if(n%i==0){
            k=0;
            break;
        }
        else{
            if(i==n-1){
                k=1;
            }
            continue;
        }
    }
    return k;
}
int main(){
    int a,b;
    cin >> a>> b;
     for( int x= a+1; x<b;x++ ){
         if( PrimeOrNot(x)==1){
        cout<< x;
    }
    else{
        cout<< " ";
        continue;
    }
     }
}

// Print the fibonnaci sequence till n ( given ) 

void FibFunc(int n){
    int t1=0;
    int t2=1;
    int sum;
    for(int i =0; i<=n; i++){
        cout << t1<< endl;
        sum = t1+t2;
        t1=t2;
        t2= sum;
    }
    return ;
}
int main(){
    int n;
    cin >> n;
    FibFunc(n);
    return 0;
}

// Practice Functions *** 
/* 

Time Complexity - Time taken by your code to return output ( Analysis ) 
                  Time complexity of an algorithm quantifies the amount of time taken by a program to run as a function of length of the input
Space Complexity - Space complexity of an algorithm quantifies the amount of time taken by a program to run as a function of length of the input. It s directly proportional to the largest memory of your program qcquires at any instance during running time
** Space complexity doesnt depends on your input **
For a search algorithm 
a) Best Case [ sigma ( big omega) notation ]= time complexity is constant     - sigma(1)
b) Average Case [ theta ( big theta) notation ]= time complexity = (n+1)/2 = directly proportional to n       -theta(n)
c) Worst Case [ O ( big oh ) notation ]= time complexity is directly proportional to n         - O(n)

*/ 
// Find a key ( number ) in array  - return the index 
int FindFunc(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(key == arr[i]){
            return i;
        }
        else{
            continue;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin >> arr[k];
    }
    int key;
    cin>> key;
    cout<< FindFunc(arr,n,key)<< endl;
    return 0;
}

// Binary Search - for this our elements in array must be in sorted order   ( ERROR HERE )

int FindFunc(int arr[], int n, int key){
    int s=0;
    int e= n;
    while(s<=e){
        int mid= (s+e)/2;
        if(arr[mid]<key){
            s= mid+1;
        }
        else if(arr[mid]=key){
            return mid;
        }
        else{
            e= mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cin>> key;
    cout<< FindFunc(arr,n,key)<< endl;
    return 0;
}

// Time complexity of Binary Search
// After first iteration, length of array = n
// After second iteratio, length of aray = n/2
// After third iteration, length of aray = n/4
// After k iterations, length of array = n/ (2^k)

// Let the length of array become 1 after k iterations
// n/ (2^k) = 1 ; find k 
// k = log n ( base 2 )           Time Complexity = O(log n)  ......of binary search 

// Sorting- ordering of elements in array in ascending order
