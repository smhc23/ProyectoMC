#include <iostream>
#include <fstream>
using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key = 'K'; //Any char will work
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;
    
    return output;
}

void toFile(string data){
  fstream my_file;
	my_file.open("my_file.txt", ios::out);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_file << data;
		my_file.close();
	}
}

int main() {
  string result;
  result = encryptDecrypt("Hola");
  cout<< result<<endl;
  std::cout << encryptDecrypt(result);
  toFile("Que onda");
}