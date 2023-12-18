// void nForest(int n) {
// 	int i,j;

// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++)
// 		{
// 			cout<<"* ";
			
// 		}
//          cout<<endl;
// 		}
// }



// void nForest(int n) {
// 	int i,j;

// 	for(i=0;i<n;i++){
// 		for(j=0;j<=i;j++)
// 		{
// 			cout<<"* ";
			
// 		}
//          cout<<endl;
// 		}
// }



// void nTriangle(int n) {
// 	int i,j;

// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=i;j++)
// 		{
// 			cout<<j<<" ";
			
// 		}
//          cout<<endl;
// 		}
// }


// void triangle(int n) {
// 	int i,j;

// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=i;j++)
// 		{
// 			cout<<i<<" ";
			
// 		}
//          cout<<endl;
// 		}
// }


// void seeding(int n) {
// 	int i,j;
//     for(i=n;i>=1;i--){
// 		for(j=1;j<=i;j++)
// 		{
// 			cout<<"* ";
			
// 		}
//          cout<<endl;
// 		}
// }



// void nNumberTriangle(int n) {
//     int i,j;
//     for(i=n;i>=1;i--){
// 		for(j=1;j<=i;j++)
// 		{
// 			cout<<j<<"  ";
			
// 		}
//          cout<<endl;
// 		}
// }



// void nStarTriangle(int n) {
//     int i,j,k;
//     for(i=1;i<n;i++){
//         for(j=n;j>1;j--)
//         {
//             cout<<" ";
//         }
//         for(k=2*i-1;k<n;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }



// void nStarTriangle(int n) {
//     int i,j,k;
//     for(i=n;i>0;i--){
//         for(j=n-i;j>0;j--)
//         {
//             cout<<" ";
//         }
//         for(k=2*i-1;k>0;k--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }




// void nStarTriangle(int n) {
//     for (int i = 1; i < 2 * n; i++) {
//         int stars = i;
//         if (i > n) stars = 2 * n - i;

//         for (int j = 1; j <= stars; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }



// void nBinaryTriangle(int n) {
//     int i,j,k;
//     for(i=0;i<n;i++){
//         for(j=0;j<=i;j++){
//         if(i%2)
//         {
//          if(j%2) cout<<"1 ";
            
//             else cout<<"0 ";
//         }

//         else {
//             if (j % 2)
//               cout << "0 ";

//             else
//               cout << "1 ";
//         }
//         }
//         cout << endl;
//     }
// }



// void numberCrown(int n) {
//     int i,j,space=2*n-1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//         space-=2;
//     }
// }