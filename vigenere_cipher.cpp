#include<iostream>
#include<string>
using namespace std;
string cipherText(string str, string key);
string generateKey(string str, string key);

string generateKey(string str, string key)
{
    int x = str.size();
    for (int i = 0; ; i++)
    {
        if (x == i)
            i = 0;
        if (key.size() == str.size())
            break;
        key.push_back(key[i]);
    }
    return key;
}
 
string cipherText(string str, string key)
{
    string cipher_text;
    for (int i = 0; i < str.size(); i++)
    {
        int x = (str[i] + key[i]) %26;
        x += 'A';
        cipher_text.push_back(x);
    }
    return cipher_text;
}

int main()
{
    string key,plainText;
    cout<<"Enter the plain text: ";
    cin>>plainText;
    cout<<"Enter the key: ";
    cin>>key;
    
    string completeKey=generateKey(plainText,key);
    cout<<endl<<"Cipher text:"<<cipherText(plainText,completeKey);   
    return 0;
}
