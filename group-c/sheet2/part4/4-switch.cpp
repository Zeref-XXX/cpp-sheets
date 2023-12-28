// 4. Write Program to check whether an alphabet is Vowel or Consonant using SWITCH statement. Take number ‘N’ as input

#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter the character : ";
cin>>c;

c = tolower(c);
cout<<" : is ";
switch(c){
    case 'a':cout<<"vowel";
        break;
    case 'e':cout<<"vowel";
        break;
    case 'i':cout<<"vowel";
        break;
    case 'o':cout<<"vowel";
        break;
    case 'u':cout<<"vowel";
        break;
    default :cout<<"consonant";
        break;
}

return 0;
}