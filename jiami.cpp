#include<stdio.h>
#include<cctype> 
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	void Encrypt(char a[], int key, char b[]);
	char plaintext[100] = "0";
	char ciphertext[100] = "0";
	int key = 0;
	cin.getline(plaintext,100);
	cin>>key;
	Encrypt(plaintext, key, ciphertext);
	printf("%s", ciphertext);
	return 0;
}

void Encrypt(char a[], int key, char b[]) {

	for (int i = 0;i < strlen(a);i++)
	{
		if (islower(a[i]))
		{
			b[i] =  a[i] + key;
			if ( b[i] > 'z')
				 b[i] =  b[i] - 26;
			continue;
		}
		if (isupper(a[i]))
		{
			b[i] =  a[i] + key;
			if ( b[i] > 'Z')
				 b[i] =  b[i] - 26;
			continue;
		}
		if (a[i] >= '0' && a[i] <= '9')
		{
			b[i] = a[i] + key % 10;
			if (b[i] > '9')
				b[i] = b[i] - 10;
			continue;
		}
			b[i] = a[i];
	}
}
