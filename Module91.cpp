//Question 1
// it become infinite loop

//Question 2
// Hello
// Hello
// Hello

//Question 3
// In for loop
// In for loop
// In for loop

//Question 4
// 9 1
// 8 2
// 7 3
// 6 4
// 5 5
// 4 6

//Question 5
// #include<iostream>
// using namespace std;
// int digitsum(int n) {
//     int sum=0;
//     while(n>0) {
//         int digit=n%10;
//         if (digit%2==0) sum += digit;
//         n = n / 10;
//     }
//     return sum;
// }
// int main() {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"Sum of even digits of " << num <<" is "<<digitsum(num)<<endl;
//     return 0;
// }

//Question 6
// #include<iostream>
// using namespace std;
// int revNum(int n) {
//     int rev = 0;
//     while (n > 0) {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }
//     return rev;
// }
// int main() {
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     int rev = revNum(a);
//     int sum = a + rev;
//     cout << "Sum of " << a << " and its reverse " << rev << " is " << sum << endl;
//     return 0;
// }

//Question 7
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value : ";
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//         long long factorial = 1; // for long type answers
//         for(int j = 1; j <= i; j++) {
//             factorial *= j;
//         }
//         cout << factorial << endl;
//     }
//     return 0;
// }

//Question 8
// #include <iostream>
// using namespace std;
// void fibb(int n){
//     int a=1,b=1,sum=0;
//     if(n==1){
//         cout<<"1";
//         return ;
//     }
//     if(n==2){
//         cout<<"1 "<<"1";
//         return ;
//     }
//     cout<<a<<" "<<b<<" ";
//     for(int i=3;i<=n;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//         cout<<sum<<" ";
//     }
// }
// int main(){
//     int n;
//     fibb(9);
// }

//Question 9
// #include<iostream>
// using namespace std;
// bool Armstrong(int n) {
//     int sum = 0, temp = n;
//     while(temp != 0) {
//         int digit = temp % 10;
//         sum += digit * digit * digit;
//         temp /= 10;
//     }
//     return sum == n;
// }
// int main() {
//     for(int i=1;i<=500;i++) {
//         if(Armstrong(i)){  // if(Armstrong(i)==1) {
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

