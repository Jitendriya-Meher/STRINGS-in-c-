#include<iostream>
using namespace std;

void isPalindrome( string s){
    int start=0;
    int end=s.length()-1;

    while( start<end ){
        if( s[start] != s[end] ){
            cout<<" is not a palindrome";
            return;
        }
        start++,end--;
    }

    cout<<" is a palindrome";
}

int main(){

    // char array
    char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char arr[20];

    cout<<" char array 2 = ";
    cout<<arr2<<endl;

    arr2[4]='\0';

    cout<<" char array 2 = ";
    cout<<arr2<<endl;

    cout<<" char size = ";
    cout<<sizeof(char)<<endl;

    cout<<" char array 2 size = ";
    cout<<sizeof(arr2)<<endl;

    cout<<" char array = ";
    cin>>arr;

    cout<<" char array : "<<arr<<endl;

    cout<<" char array = ";
    for( int i=0; i<20; i++ ){
        cout<<arr[i];
    }

    string s1 = "rohit m";
    cout<<endl<<" string s1 : "<<s1<<endl;

    string s2;
    cout<<" string s2 : ";
    cin>>s2;
    cout<<" string s2 : "<<s2<<endl;

    // for reading white spaces = getline function
    string s3;
    cout<<" string s3 : ";
    getline(cin, s3);
    cout<<" string s3 : "<<s3<<endl;

    cout<<" size of string s3 : "<<s3.size()<<endl;

    s3.push_back('?');
    cout<<" string s3 : "<<s3<<endl;

    s3.pop_back();
    cout<<" string s3 : "<<s3<<endl;

    // print = amit meher "hii" 
    // ( \ ) = escape character
    string s4 = "amit meher \"hii\" ";
    cout<<" string s4 : "<<s4<<endl;

    // print escape character
    // print = amit meher \hii\
    // ( \\ ) 
    string s5 = "amit meher \\hii\\ ";
    cout<<" string s5 : "<<s5<<endl;

    // string concatenation
    string s6 = s4+s5;
    cout<<" string s6 : "<<s6<<endl;

    s4.append(s5);
    cout<<" string s4 : "<<s4<<endl;

    // print = \0 , null character 
    string s7 = "\\0";
    cout<<" string s7 : "<<s7<<endl;

    // reverse string s4
    int start = 0;
    int end = s4.length()-1; 

    while( start < end ){
        swap( s4[start], s4[end]);
        start++ , end--;
    }

    cout<<" string s4 : "<<s4<<endl;

    // size of string 
    int size = 0;
    while ( s4[size] != '\0' )
    {
        size++;
    }

    cout<<" size of string s4 : "<<size<<endl;

    string s8;
    cout<<" string s8 : ";
    getline(cin,s8);

    cout<<" string s8";
    isPalindrome(s8);
    cout<<endl;

    return 0;
}

