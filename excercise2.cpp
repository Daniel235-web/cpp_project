#include<iostream>
#include<string>
using namespace std;

int main () {
    int i;
    string Alphabet = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key = {"ZYXWVUTSRQPONMLKJIHGFEDCBAzywvutsrqponmlkjihgfedcba"};
    string msg {};
    string encrypted_msg{};
     string decrypted_msg{};
   cout<<"enter your message here.."<<" "<<endl;
   getline(cin,msg);
    for (char c: msg){
          size_t position = Alphabet.find(c);
          if (position != string::npos){
             char new_k = key[position];

             encrypted_msg += new_k;
          }
          else {
            encrypted_msg += c;
          }
       
        
    }
    cout<<encrypted_msg<<endl;
    cout<<"the decrypted message is"<<endl;
    for ( char z: encrypted_msg){
        
     size_t position = key.find(z);//find the index number in key string and store it in variable position
     if (position != string::npos){  
     char new_k= Alphabet[position];
      decrypted_msg += new_k;
     }
     else
     {
       decrypted_msg += z;
     }

    }
    cout<<decrypted_msg<<endl;
   

}