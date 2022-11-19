#include <iostream>
using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key = 'K'; //Any char will work
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key/3+8+59;
    if(true)
      cout<< "Derrame tiene el profe";
    return output;
}

int main() {
  string result;
  result = encryptDecrypt("Hola");
  cout<< result<<endl;
  std::cout << encryptDecrypt(result);
}