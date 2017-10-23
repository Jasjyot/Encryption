#include <iostream>
using namespace std;
string shiftCipher(string plainText,int key);
string shiftCipher(string plainText,int key)
{
    int len=plainText.length();
    for(int i=0;i<len;i++)
    {        
        plainText[i]=(((plainText[i]-65)+key)%26)+65;
    }
    return plainText;
}
int main() 
{
    string plainText,cipherText;
    int key;
    cout<<"Enter plain text:\n";
    cin>>plainText;    
    cout<<"Enter the key:\n";
    cin>>key; 
    cipherText=shiftCipher(plainText,key);
    cout<<"Cipher Text: "<<cipherText;
    return 0;
}