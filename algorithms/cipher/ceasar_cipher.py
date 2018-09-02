#This is ceasar cipher with shift 3
String=input("Enter the String")

	
	
def encrypt(string):
	Encrypt=""

	for value in string:
		if ord(value) in range(97,123):
			Encrypt+=chr((ord(value)-94)%26+97)
		elif ord(value) in range(65,91):
			Encrypt+=chr((ord(value)-62)%26+65)	
		
		else:
			Encrypt+=value

	return Encrypt

def decrypt(string):
	Decrypt=""
	
	for value in string:
		if ord(value) in range(97,123):
			Decrypt+=chr((ord(value)-100)%26+97)
		elif ord(value)  in range(65,91):
			Decrypt+=chr((ord(value)-68)%26+65)
		else:
			Decrypt+=value

	return Decrypt

print(encrypt(String))
print(decrypt(encrypt(String)))

