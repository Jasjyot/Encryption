#include<iostream>
using namespace std;
void hillCipher(int msgArr[3][1]);
void hillCipher(int msgArr[3][1]) {
    int i, j, k;
    int encrypt[3][1]={0};
    int key[3][3]={{6,24,1},
                    {13,16,10},
                    {20,17,15}};
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 1; j++)
            for(k = 0; k < 3; k++)
                encrypt[i][j] = encrypt[i][j] + key[i][k] * msgArr[k][j];
    
    cout<<"\nEncrypted string is: ";
    for(i = 0; i < 3; i++)
        cout<<(char)(encrypt[i][0]%26+65);
}
 
 
int main()
{
    int msgArr[3][1];string msg;
    cout<<"Enter the message(3 letter):";
    cin>>msg;
    
    for(int i=0;i<3;i++)
    {msgArr[i][0]=(msg[i]-65);
    }
    hillCipher(msgArr);
    
    return 0;
}