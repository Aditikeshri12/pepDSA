// #include<iostream>
// using namespace std;
// int main(){
// //for loop 
//for(init;termination;update){}
// 
//sum of n natural number
// int n;
// int sum=0;
// cout<<"Enter a number";
// cin>>n;
// for(int i=0;i<=n;i++){
//     sum +=i;
// }
// cout<<sum;
//}

//while loop
// #include<iostream>
// using namespace std;
// int main(){
    int i=1;
    // while(i<=5){
    //     cout<<i<<" ";//agar increment nhi karaga toh infinite loop me chala jaega
    //     i++;
    // }
//     do{
//         cout<<i<<" ";
//         ++i;
//     }while(i<=5);
// }
// break
// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<=10;i++){
//     if(i==5)break;
//     cout<<i<<" ";
// }
// for(int i=0;i<=10;i++){
//     if(i==5)continue;
//     cout<<i<<" ";
// }
// int num;
// int sum =0;
// for(int i=1;i<=3;i++){
//     for(int j=1;j<=3;j++){
//         if(j==2){
//             continue;
//         }
//         cout<<"i = "<<i<<" , j "<<j<<endl;
//     }
// }
// }
// lecture -3
// question no-1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows in the pattern

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//question -2
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows in the pattern

//     for (int i = n; i >=1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//question-3
//1
//2 3 2
//3 4 5 4 3
//4 5 6 7 6 5 4
//5 6 7 8 9 8 7 6 5
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = i; j < 2 * i; j++) cout << j << " ";
//         for (int j = 2 * i - 2; j >= i; j--) cout << j << " ";
//         cout << endl;
//     }
//     return 0;
// }


