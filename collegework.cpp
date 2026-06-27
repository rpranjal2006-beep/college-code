#include <iostream>
#include <climits>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

// int gcd(int n, int m)
// {
//     if (m == 0)
//     {
//         return n;
//     }

//     return gcd(m, n % m);
// }

// Recursive Factorial.

// int factorial(int num )
// {
//     if (num==1)
//     {
//         return 1;
//     }

//    return num*factorial(num-1);

// }

// sum of numbers using Recursion.

// int sum(int num)
// {

//     if (num == 0)
//     {
//         return 0;
//     }

//     return num % 10 + sum(num / 10);
// }

// Reverse of a number using Rwecursion.

// int reverse(int num,int rev=0){
// if (num==0)
// {
//     return rev;
// }

//    return reverse(num/10,num%10+rev*10);
// }

// int sum(int num1, int num2)
// {

//     int sum = num1 + num2;
//     return sum;
// }

// Max number.

// int max(int arr[]){
//     // maximun number
//     int max=INT_MIN;
//     for (int i = 0; i <=4; i++)
//     {
//         if (arr[i]>max)
//         {
//             max=arr[i];
//         }

//     }
//     return max;
// }

// bool prime(int num)
// {
//     int count = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         return 1;
//     }

//     else
//     {
//         return 0;
//     }
// }

// int factorial(int num)
// {
//     int ans = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         ans = ans * i;
//     }
//     return ans;
// }

// Palindrome using Function .

// bool palindrome(string num)
// {

//     // string start from 0 not 1 so thats why end is size-1.

//     int start = 0;
//     int end = num.size() - 1;

//     while (start < end)
//     {
//         if (num[start] == num[end])
//         {
//             return 1;
//         }
//         start++;
//         end--;
//     }

//     return 0;
// }

// Armstrong using Functions .

// bool armstrong(int num)
// {
//     int rem;
//     int ans = 0;
//     int temp = num;

//     while (temp > 0)
//     {
//         rem = temp % 10;
//         ans = ans + rem * rem * rem;
//         temp = temp / 10;
//     }
//     temp = num;

//     if (ans == temp)
//     {
//         cout << "Armstrong" << endl;
//         return 1;
//     }
//     else
//     {
//         cout << "Not Armstrong" << endl;
//         return 0;
//     }
// }

// Perfect numbner using Functions .

// A perfect number is the one whose sum of divisors is equal to the number.

// int perfect(int num)
// {
//     int sum = 0;
//     for (int i = 1; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//            sum=sum+i;
//         }
//     }
//     return sum;
// }

// binarysearch

// int binarysearch(int arr[], int target)
// {

//     int start = 0;
//     int end = 4;
//     int mid;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }

//         else if (arr[mid] > target)
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

int main()
{

    // Day 1....

    // sum of first N natural nos.

    // int num = (1,2,3);

    // int sum = 0;

    // for (int i = 1; i <=num; i++)
    // {
    //     sum=sum+i;
    // }

    // cout << sum;

    // Table of any number.

    // int table;
    // cout<<"Enter a number";
    // cin>>table;
    // int num=0;

    // for (int i = 1; i <=10; i++)
    // {
    //     num=table*i;
    //     cout<<num<<endl;
    // }

    // Factorial of a number.

    // int num;
    // cout<<"Enter a number";
    // cin>>num;
    // int ans=1;

    // while (num>0)
    // {
    //     ans=ans*num;
    //     num--;
    // }
    // cout<<ans;

    // Count digits in a number.

    // int num;
    // cout<<"Enter any number of digits";
    // cin>>num;

    // int count = 0;

    // while (num>0)
    // {
    //     num=num/10;
    //     count++;
    // }
    // cout<<count;

    // Day 2

    // Sum of digits of a number

    // int num;
    // cout<<"Enter a number";
    // cin>>num;

    // int sum=0;
    // int rem;

    // while (num>0)
    // {
    //     rem=num%10;
    //     sum=sum+rem;
    //     num=num/10;

    // }
    // cout<<sum;

    // Reverse a number.

    // int num;
    // cin>>num;

    // int rem;
    // int rev=0;

    // while (num>0)
    // {
    //     rem=num%10;
    //     rev=rev*10+rem;
    //     num=num/10;
    // }
    // cout<<rev;

    // Product of digits

    //     int num=432;

    //     int product=1;
    //    int  rem;

    //    while (num>0)
    //    {
    //     rem=num%10;
    //     product=product*rem;
    //     num=num/10;
    //    }
    //    cout<<product;

    // Number is palindrome or not

    // int num = 155;
    // int temp = num;
    // int rem;
    // int rev = 0;

    // while (temp > 0)
    // {
    //     rem = temp % 10;
    //     rev = rev * 10 + rem;
    //     temp = temp / 10;
    // }
    // cout << rev;

    // // We re- initialise temp here because num after while loop becomes 0.
    // temp = num;

    // if (rev == num)
    // {
    //     cout << "Palindrome" << endl;
    // }
    // else if (rev != num)
    // {
    //     cout << "NOt Palindrome" << endl;
    // }

    // Day 3.

    // Check whether number is prime or not.

    // int num1 = 7;

    // if (num1 < 1)
    // {
    //     cout << " num 1 is Not prime" << endl;
    // }

    // int count = 0;

    // for (int i = 1; i <= num1; i++)
    // {

    //     if (num1 % i == 0)
    //     {
    //         count++;
    //     }
    // }
    // if (count == 2)
    // {
    //     cout << num1 << " Prime";

    // }

    // else
    // {
    //     cout << "Not Prime" << endl;
    // }

    // Print Prime Nos in a Range.

    // int num1 = 10;

    // int num2 = 20;

    // if (num1 < 1)
    // {
    //     cout << " num 1 is Not prime" << endl;
    // }
    // else if (num2<1)
    // {
    //     cout<<"num2 is not prime"<<endl;
    // }

    // for (int n = num1; n <= num2; n++)
    // {
    //     int count = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 2)
    //     {
    //         cout << n << " ";
    //     }
    // }

    // else{
    //     cout<<"Not Prime"<<endl;
    // }

    // GCD Using Recursion.

    // int num1 = 10;
    // int num2 = 18;

    // cout << gcd(num1, num2);
    // lcm

    // Day 4.

    // Fibonacci Series.

    // 0,1,1,2,3,5,8,13,21....
    // int n;
    // cin>>n;
    // int num1 = 0;
    // int num2 = 1;
    // for (int i = 1; i <= n; i++)
    // {

    //     int temp = num1 + num2;
    //     num1 = num2;
    //     num2 = temp;
    //     cout << temp << " ";
    // }

    // Armstrong number.

    // 153= 1^3+5^3+3^3=153.

    // 1234 then sum of power of 4

    // int num=153;

    // // cout << "Enter a number";
    // // cin >> num;
    // int temp = num; // Initialise.

    // int count = 0;

    // while (temp > 0)
    // {
    //     temp = temp / 10;
    //     count++;
    // }
    // temp = num; // Re-Initialise .

    // cout << count << endl;
    // int rem;
    // int a = 0;
    // while (temp > 0)
    // {
    //     rem = temp % 10;
    //     a = a + pow(rem, count);
    //     temp = temp / 10;
    // }

    // cout << a;

    // Day 5.

    // Factor of a number.

    // int num;
    // cout << "Enter any number whose factor you want to know ";
    // cin >> num;
    // cout << "Factor of this number are" << endl;

    // for (int i = 1; i <= num; i++)
    // {
    //     if (num % i == 0)
    //     {

    //         cout << i << " ";
    //     }
    // }

    // Largest prime factor.

    // int num = 15;

    // for (int i = 1; i <= num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;

    // Day 6.

    // // Binary to decimal .

    // int num = 101;
    // int ans = 0;
    // int rem;
    // int n = 0;
    // while (num > 0)
    // {
    //     rem = num % 10;

    //     ans = ans + rem * pow(2, n);
    //     num = num / 10;
    //     n++;
    // }
    // cout << ans;

    // Decimal to Binary.

    // int num=5;

    // int rem;
    // int ans=0;
    // int place=1;
    // while (num>0)
    // {
    //     rem=num%2;
    //     ans=ans+rem*place;
    //     place *=10;
    //     num=num/2;

    // }
    // cout<<ans<<" ";

    // any number power to n .

    // int num;
    // cout << "Enter any number";
    // cin >> num;
    // int x;
    // cin>>x;
    // int ans = 1;
    // while (num > 0)
    // {
    //     ans = ans * x;
    //     num--;
    // }
    // cout << ans;

    // Day 7.

    // Recursive factorial.

    // int num = 5;

    // cout << factorial(num);

    // sum of numbers using Recursion.

    // int num = 521;
    //     cout << sum(num);

    // Reverse of a number using Recursion.

    // int num=534;

    // cout<<reverse(num);

    // Day 8.

    // Patter printing

    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout<<j<<" ";

    //     }
    //     cout<<endl;

    // }

    // Print character triangle .

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (char j = 'A'; j <= 'A'+i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Print repeated number .

    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j =1 ; j<=i ; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;

    // }

    // Day 9 .

    // for (int i = 1; i <=5; i++)
    // {
    //    for (int j = 5; j >=i; j--)
    //    {
    //     cout<<'*'<<" ";
    //    }
    //    cout<<endl;
    // }

    // Print reverse number triangle.

    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Print repeated character .

    // for (int i = 1; i <=4; i++)
    // {
    //     for (char j = 'A'; j <='A'+i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout << endl;
    // for (int n = 1; n <= 5; n++)
    // {
    //     cout << '*';
    // }

    // DaY 10.

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int k = 4; k >= i; k--)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {

    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // Reverse Pyramid .

    // for (int i = 5; i >=1; i--)
    // {
    //     for (int j = 4; j >=i; j--)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 2*i-1; k >=1; k--)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    // Print numbers in a Pyramid .

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 4; j >= i; j--)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << k << " ";
    //     }
    //     for (int l = i - 1; l >= 1; l--)
    //     {
    //         cout << l << " ";
    //     }
    //     cout << endl;
    // }

    // Print Character Pyramid .

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 4; j >= i; j--)
    //     {
    //         cout << "  ";
    //     }
    //     for (char k = 'A'; k < 'A' + i; k++)
    //     {
    //         cout << k << " ";
    //     }
    //     for (char l = 'A' + i - 2; l >= 'A'; l--)
    //     {
    //         cout << l << " ";
    //     }
    //     cout << endl;
    // }

    // Day 11 .

    // sum using function

    // int num1 = 10;
    // int num2 = 20;

    // cout<<sum(num1, num2);

    // Maximum number .

    // int arr[5] = {2, 4, 6, 10, 9};

    // cout << max(arr);

    // Primw number using function .

    // int num = 10;

    // cout << prime(num);

    // Factorial using Function .

    // int num = 5;

    // cout << factorial(num);

    // Day 12 .

    // we use string for finding Palindrome .

    // string num = "not";

    // cout << palindrome(num);

    // Armstrong using Function .

    // int num = 153;

    // cout << armstrong(num);

    // Perfect number using Functions .

    // int num = 6;

    // cout << perfect(num);

    // Day 13 .

    // Array input .

    // int n;
    // cout<<"Enter the lenth of array"<<endl;
    // cin>>n;
    // int arr[n];

    // for (int i = 0; i <n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for (int i = 0; i <n; i++)
    // {
    //    cout<<arr[i]<<" ";
    // }

    // Sum of an Array and Average .

    // int arr[4]={2,3,4,5};

    // int sum=0;

    // for (int i = 0; i <4; i++)
    // {
    //     sum=sum+arr[i];
    // }

    // cout<<sum<<endl;

    // int average;

    // average=sum/4;

    // cout<<average<<endl;

    //  Smallest and Largest Element in an Array .

    // int arr[6] = {3, 4, 7, 2, 4, 6};

    // int largest = INT_MIN; // This means the smallest number which is possible . -2147483648 its this .
    // // // int smallest = INT_MAX; // This the the largest number which is possible .
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];

    //     }
    // }
    // cout << "Largest - " << largest << endl;

    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //     }
    // }
    // cout << "Samllest - " << smallest << endl;

    // Second largest number .
    // int arr[6] = {3, 4, 7, 2, 4, 6};

    // int largest = INT_MIN; // This means the smallest number which is possible . -2147483648 its this .

    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //         swap(arr[i], arr[5]);
    //     }
    // }

    // int largest2 = INT_MIN;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] > largest2)
    //     {
    //         largest2 = arr[i];
    //     }
    // }
    // cout << "Second Largest - " << largest2 << endl;

    // Count Even and Odd numbers .

    // int arr[6] = {2, 4, 7, 4, 9, 5};
    // int count = 0;
    // int count2 = 0;

    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         count2++;
    //     }
    // }
    // cout << "Number of Even Elements - " << count << endl;

    // cout << "Number of Odd Elements - " << count2 << endl;

    // Day 14 .

    // Linear Search .

    // int arr[5]={3,5,2,7,8};

    // int target=5;

    // for (int i = 0; i <=4; i++)
    // {
    //     if (arr[i]==target)
    //     {
    //        cout<<"Yes its equal to the given Target . "<<arr[i];
    //     }

    // }

    // Frequency of an Element .

    // int arr[6] = {2, 2, 4, 7, 7, 7};

    // for (int i = 0; i < 6; i++)
    // {
    //     if (i > 0 && arr[i] == arr[i - 1])
    //     {
    //         continue; // It skips the Number .
    //     }
    //     int count = 1;
    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }

    //     cout << "Number " << arr[i] << " " << "Count " << count << endl;
    // }

    // Removing Duplicate from an array .

    // int arr[6] = {2, 2, 4, 7, 7, 7};

    // for (int i = 0; i < 6; i++)
    // {
    //     if (i > 0 && arr[i] == arr[i - 1])
    //     {
    //         continue;
    //     }

    //     cout << "Number " << arr[i] << " " << endl;
    // }

    // Duplicate of an element .

    // int arr[6] = {2, 2, 4, 4, 4, 4};

    // for (int i = 0; i < 6; i++)
    // {
    //     int count = 1;

    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {

    //             count++;
    //         }
    //     }

    //     if (count == 2)
    //     {
    //         cout << arr[i] << endl;
    //     }
    // }

    // Day 15 .

    // Reverse an array .

    // int arr[6]={3,4,5,6,2,1};

    // for (int i = 5; i>=0; i--)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Missing number in an array .

    // int arr[5] = {4, 5, 8, 12};

    // for (int i = 0; i < 5; i++)
    // {
    //     int count = 0;
    //     if (arr[i + 1] - arr[i] != 1)
    //     {

    //         count = arr[i + 1] - arr[i];
    //     }
    //     while (count > 1)
    //     {
    //         arr[i] = arr[i] + 1;
    //         cout << arr[i] << " ";
    //         count--;
    //     }
    // }

    // Rotate an array left . means every number is jumped two times from its place towards left.

    // int arr[5] = {2, 4, 7, 9, 10};

    // for (int k = 0; k < 2; k++)
    // {
    //     for (int i = 0; i < 4; i++)
    //     {
    //         swap(arr[i], arr[i + 1]);
    //     }
    // }

    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Move zeroes to end .

    // int arr[5] = {0, 2, 0, 3, 4};
    // for (int j = 0; j < 4; j++)
    // {

    //     for (int i = 0; i < 4; i++)
    //     {
    //         if (arr[i] == 0)
    //         {
    //             swap(arr[i], arr[i + 1]);
    //         }
    //     }
    // }

    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Frequence of maximum count of the number .

    // int arr[6] = {2, 2, 4, 7, 7, 7};

    // int maxcount = 0;
    // int maxelement = arr[0];

    // for (int i = 0; i < 6; i++)
    // {
    //     if (i > 0 && arr[i] == arr[i - 1])
    //     {
    //         continue; // It skips the Number .
    //     }
    //     int count = 1;
    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }

    //     if (count > maxcount)
    //     {
    //         maxcount = count;
    //         maxelement = arr[i];
    //     }
    // }
    // cout << "Number " << maxelement << " " << "Count " << maxcount << endl;

    // Day 18 .
    // Selection Sorting .

    // int arr[5] = {3, 2, 5, 4, 2};

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Bubble Sort .

    // int arr[5]={2,4,3,8,10};
    // for (int i = 0; i <5; i++)
    // {
    //     if (arr[i]>arr[i+1])
    //     {
    //         swap(arr[i],arr[i+1]);
    //     }

    // }
    //  for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Binary Search .
    // int arr[5] = {3, 5, 8, 9, 10};

    // int target = 10;

    // cout << binarysearch(arr, target);

    // Sorting array in Descendinjg order .
    // int arr[5] = {2, 10, 5, 4, 11};

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Add matrix .

    // int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // int arr2[3][3] = {11, 23, 21, 1, 5, 2, 4, 3, 10};
    // int ans[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         ans[i][j] = arr1[i][j] + arr2[i][j];
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    // }

    // Sum of diagonal of a matrix .

    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // int sum = 0;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (arr[i][j] == arr[j][i])
    //         {
    //             sum = sum + arr[i][j];
    //         }
    //     }
    // }

    // cout << "Sum of the Diagonals of a Matrix is  " << sum;

    //  Transpose a matrix .

    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // int ans[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         ans[i][j] = arr[j][i];
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Subtraction of 2 matrix.

    // int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // int arr2[3][3] = {11, 23, 21, 1, 5, 2, 4, 3, 10};
    // int ans[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         ans[i][j] = arr1[i][j] - arr2[i][j];
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    // }
    // sum for row .

    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {

    //         sum = sum + arr[i][j];
    //     }
    //     cout << sum << endl;
    // }

    // // sum for column .
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {

    //         sum = sum + arr[j][i];
    //     }
    //     cout << sum << endl;
    // }

    // Multiply Matrices .

    // Fixed row and Fixed column .  (Think it) .

    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr1[4][3] = {2, 4, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26};

    // int ans[3][3] = {0};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 4; k++)
    //         {
    //             ans[i][j] += arr[i][k] * arr1[k][j];
    //         }
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Reverse a string .

    // string s="Rohit";

    // reverse(s.begin(),s.end());

    // cout<<s;

    //  Count vowels and consonants.

    // string s = "rohit";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    //     {
    //         cout << "Vowel is " << s[i] << endl;
    //     }

    //     else
    //     {

    //         cout << "constant is " << s[i] << endl;
    //     }
    // }

    //  Convert lowercase to uppercase.

    // string s = "nonot";
    // int start = 0;
    // int end = s.size() - 1;

    // while (start < end)
    // {
    //     if (s[start] == s[end])
    //     {

    //         start++;
    //         end--;
    //     }
    //     else
    //     {

    //         cout << "np";
    //         return 0; // It exits the whole program .
    //     }
    // }
    // cout << "p";

    // To count number of words in a Sentence .

    // string s = "he is a boy";

    // int count = 1;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == ' ')
    //     {
    //         count++;
    //     }
    // }
    // cout << count;

    // Removing sapce from the string .

    // string s = "he is a boy";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == ' ')
    //     {

    //         continue;
    //     }
    //     cout << s[i];
    // }

    // Write a program to Find first repeating character.

    // string s = "aaabd";

    // int start = 0;
    // int end = s.size();

    // for (int i = start; i < end; i++)
    // {
    //     int count = 1;
    //     for (int j = i + 1; j < end; j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             count++;

    //         }
    //     }

    //     if (count == 2)
    //     {
    //         cout << s[i] << " ";
    //     }
    // }

    // First non-Repesting .

    // string s = "aabcd";
    // int start = 0;
    // int end = s.size();

    // for (int i = start; i < end; i++)
    // {

    // if (i > 0 && s[i] != s[i - 1])
    // {
    //     cout << s[i] << " ";
    // }
    // }

    // Write a program to Find maximum occurring character.

    // string s = "aabcds";

    // int start = 0;
    // int end = s.size();
    // int num = 0;

    // for (int i = start; i < end; i++)
    // {
    //     if (i > 0 && s[i] == s[i - 1])
    //     {
    //         continue; // Skips Duplicate .
    //     }
    //     int count = 1;

    //     for (int j = i + 1; j < end; j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             count++;
    //         }
    //     }

    //     if (count > num)
    //     {

    //         num = count;
    //     }

    //     //   cout<< s[i]<<count<<" ";
    // }
    // cout << num;

    // Removing Duplicate Character from the String .  `

    // string s = "aabcd";
    // int start = 0;
    // int end = s.size();

    // for (int i = start; i < end; i++)
    // {

    //     if (i > 0 && s[i] == s[i - 1] || s[i]==s[i+1])
    //     {
    //         continue; // skip duplicate .
    //     }
    //     cout << s[i] << " ";
    // }

    // cout << count;

    // Write a program to Create number guessing game.

    // int num;
    // cin >> num;
    // int num1;
    // cin >> num1;
    // cout <<"The numbers are ";
    // for (int i = num; i < num1; i++)
    // {
    //     if (num == i)
    //     {
    //         continue;
    //     }
    //     cout<< i << " ";
    // }

    // Write a program to Create voting eligibility system.

    // int num;
    // cout << "Enter the number";
    // cin >> num;

    // if (num >= 18)
    // {
    //     cout << "You are Eligible for voting " << num;
    // }
    // else
    // {
    //     cout << "You are not Eligible for voting " << num;
    // }

    // Write a program to Create ATM Simulation.

    return 0;
}