#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;


// STACK OVERFLOW DEKH LENA
// int REC(int a){
//   if(a==4){
//     cout<<a<<endl;
//     return a;
//   }
//   else{
//     cout<<a<<endl;
//     a++;
//     REC(a);
//   }
// }

// int main() {
//     int c = 0;
// int b = REC(c);
//  cout<<b;
// return 0 ; 
// }




// Q1.
// PRINT NAME 5 TIMES

// int printname(int b){
//     if(b==5){
//         return 0 ;
//     }
//     else{
//         cout<<"Harsh"<<endl;
//         b++;
//         printname(b);
//     }
// }

// int main (){
//     int a =0;
//     printname(a);
// return 0 ;
// }









// Q2.
// print from 1 to n;



// int print1n(int a ,int b){
//     if(a>b){
//         return 0;
//     }
//     else{
//         cout<<a;
//         a++;
//         print1n(a,b);
//     }
// }


// int main (){
//     int n ;
//     cin>>n;
//     print1n(1,n);
//     return 0 ;
// }







//Q3.

// int pangya(int a ,int b){
//     if(a==b){
//         return 0 ;
//     }
//     else{
//         int c = b-a;
//         cout<<c;
//         a++;
//         pangya(a,b);
//     }
// }

// int main (){

//     int n ;
//     cin>>n;
//     pangya(0,n);
//     return 0 ;
// }










// Q4.


// int backtrack(int a , int b){

//     if(a<2){
        
//         return 0;
//     }
//     else{
//         a--;
//         backtrack(a,b);
//         cout<<a;
//     }
// }

// int main (){
//     int n ;
//     cin>>n;
//     backtrack(n+1,n);
//     return 0 ;
// }






//Q5.


// int backtrack(int a , int b){

//     if(a<0){
        
//         return 0;
//     }
//     else{
//         int c =b-a;
//         a--;
//         backtrack(a,b);
//         cout<<c<<endl;
//     }
// }

// int main (){
//     int n ;
//     cin>>n;
//     cout<<endl;
//     backtrack(n-1,n);
//     return 0 ;
// }