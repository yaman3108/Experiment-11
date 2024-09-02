# Experiment 7



## Aim:
To study and implement Classes and Objects


## Apparatus:
Vs Code, Github


## Theory:

### Object Oriented Programming (OOP):
In object-oriented programming data structures, or objects are defined, each with its own properties or attributes. Some concepts of OOPS are:

### Classes:
A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. Classes are like blueprints for objects. A class is defined using the class keyword followed by the class name and a block of code that includes its attributes.

For example: A class of car would have common properties like wheels, milage, range. The properties wheels, milage and range are data members of the class. Thier member functions can be applying brakes, increasing speed etc.

### Array Operations: -

1. Traversal : Visiting each element of an array in a specific order (e.g., sequential, reverse).
2. Insertion : Adding a new element to an array at a specific index.
3. Deletion : Removing an element from an array at a specific index.
4. Searching : Finding the index of an element in an array.

### Types of arrays: -

1. One dimensional arrays
2. Multi dimensional arrays


## Code:

### Printing elements in an array:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari
int main()
{
  int array1[5]={19,10,8,17,9};
  int array2[]={19,10,8,17,9};
  int array3[5]={19,10,8};

  //Printing elements in an array
  
cout<<"n Traditional Method";
for(int i=0;i<5;++i){
 cout<<array1[i]<<" ";
}
cout<<endl;
}
```
### Output:
![Screenshot 2024-09-02 095158](https://github.com/user-attachments/assets/4bbfe6fc-b817-451e-aa53-8ac078edb15f)

### User Input:
```
#include<iostream>
#define size 10
using namespace std;

//Name:Yaman Hasan Ansari PRN:230701231552
//Take input from user
int main()
{
int arr[size];
cout << "Enter " << size << " elements of array: ";
for (int index = 0; index < size; index++) {
cin >> arr[index];
}
cout << endl;
// display entered array ekements
for (int j : arr) {
cout << j << " ";
}
return 0;
}
```
### Output:
![Screenshot 2024-09-02 095317](https://github.com/user-attachments/assets/cc798375-76ec-4beb-bf4c-dececde0ec54)

### Reverse array:
```
#include<iostream>
using namespace std;

//Name:Yaman Hasan Ansari PRN:23070123155
int main(){
int n,i,j=0,k,l,temp;
cout<<"Enter the size of the array: ";
cin>>n;
int A1[n],A2[n];

for(i=0;i<n;i++){
cout<<"Enter the element- "<<i+1<<" ";
cin>>A1[i];
}
cout<<endl;

cout<<" Array given by user: "<<endl;
for(l=0;l<n;l++){
cout<<A1[l];
cout<<endl;
}
cout<<endl;

for(k=(n-1);k>=0;k--){
temp = A1[k];
A2[j]= temp;
j++;
}

cout<<"Reverse array printed: "<<endl;
for(l=0;l<n;l++)
{
cout<<A2[l];
cout<<endl;
}
}
```
### Output:
![Screenshot 2024-09-02 095352](https://github.com/user-attachments/assets/5f43733a-6ba2-4db4-b63e-03bad0327340)

### Search elements in an array:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
//Search element in array
int main() {
int marks[5], i, j, num, flag=0, count=0;
for(i=0;i<5;i++) {
cout<<"Enter Marks-"<<i+1<<": ";
cin>>marks[i];
}
cout<<"Enter marks to be searched: ";
cin>>num;
for(j=0;j<5;j++) {
if(marks[j]==num) {
cout<<"Position of "<<num<<": "<<j+1<<endl;
count++;
flag=1;
}
}
if(flag==0) {
cout<<"marks not present";
}
else if(flag==1) {
cout<<"marks are present: "<<count<<" times";
}
}
```
### Output:
![Screenshot 2024-09-02 095423](https://github.com/user-attachments/assets/62149fe9-4d32-4b11-9205-bac360b5048e)

## Sum and avg:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
//sum and average
int main() {
int arr1[10], i, j;
float sum=0, avg;
for(i=0;i<10;i++) {
cout<<"Enter element-"<<i+1<<": ";
cin>>arr1[i];
}
for(j=0;j<10;j++) {
sum = sum + arr1[j];
}
cout<<"Sum of elements = "<<sum<<endl;
avg = sum/10;
cout<<"Average = "<<avg;
}
```
### Output:
![Screenshot 2024-09-02 095508](https://github.com/user-attachments/assets/df726862-5316-4ff6-a517-e25ed22b531c)

## Max and min:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
//Max and min
int main() {
int n, i, max=0;
cout<<"Enter number of elements: ";
cin>>n;
int a[n];
for(i=0;i<n;i++){
cout<<"Enter element-"<<i<<": ";
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
int min=a[0];
for(i=0;i<n;i++){
if(min>a[i]){
min=a[i];
}
}
cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}
```
### Output:
![Screenshot 2024-09-02 095526](https://github.com/user-attachments/assets/f1dde51d-4049-4f0a-8611-2cb6af14264c)

## String:
```
#include<iostream>
#include<string>
using namespace std;

//Name:Yaman Hasan Ansari PRN:23070123155
int main() {
string a;
cout<<"Enter a string: ";
cin>>a;
cout<<"Entered string is "<<a<<endl;
return 0;
}
```
### Output:
![Screenshot 2024-09-02 095542](https://github.com/user-attachments/assets/66cd242d-1aee-4fa3-aaed-a6da14eea5c1)

## Concatenation:
```
#include<iostream>
#include<string>
using namespace std;

//Name:Yaman Hasan Ansari PRN:23070123155
int main() {
string a, b;
cout<<"Enter two strings: ";
cin>>a>>b;
cout<<"Concatenated string is "<<a+b;
return 0;
}
```

### Output:
![Screenshot 2024-09-02 095558](https://github.com/user-attachments/assets/950fe13a-3bf7-4828-b21e-9a03b41e7787)

## Length of string:
```
#include<iostream>
#include<string>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
int main() {
string a;
cout<<"Enter string: ";
cin>>a;

int i,len=a.length();
for(i=len-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}
```
### Output:
![Screenshot 2024-09-02 095614](https://github.com/user-attachments/assets/b1d04391-b48d-402a-8e97-8f48b808bfb5)

## Conclusion:
This program helps us understand how arrays work in C++. Thier various different applications and operations.
