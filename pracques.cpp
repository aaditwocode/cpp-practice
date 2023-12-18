// int countDigits(int n) {
//     int cur = n;
//     int r, sum = 0;

//     while (cur > 0) {
//         r = cur % 10;
//         if (r != 0 && n % r == 0) {
//             sum++;
//         }
//         cur = cur / 10;
//     }

//     return sum;
// }


// class Solution {
// public:
//     int reverse(int x) {
//         int ans=0;
//         while(x!=0){
//             if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
//                 return 0;
//             }
//             int digit=x%10;
//             ans=(ans*10)+digit;
//             x=x/10;
//         }
//         return ans;
        
//     }
// };


// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int ans=x;
//         long int y=0;
//         if(x<0){
//             return false;
//         }
//         else{
//             while(x){
//                 y= y*10;
//                 y= y + x%10;
//                 x= x/10;
//             }
//         }
//         return (y==ans);   
//     }
// // };


// int calcGCD(int n, int m){
//     if(m==0){
//         return n;
//     } else {
//         return calcGCD(m, n % m);
//     }
// }


// bool checkArmstrong(int n){
//     int c=n;
//     int r;
//     int sum=0;
//     while(n!=0){
//         r=n%10;
//         sum=sum+(r*r*r);
//         n=n/10;
//     }
//     if(c==sum){
//         return true ;   
//         }
// 	else{
//         return false;
//     }
// }


// int sumOfAllDivisors(int n){
//     	int i;
// 		for(i=1;i<=sqrt(n);i++)
// 		{
//                   if (n % i == 0) {
//                    cout<< i <<" ";
//                   }
//         }
		
// 						}