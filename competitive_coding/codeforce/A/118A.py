# https://codeforces.com/problemset/problem/118/A


def check(ch):
	if ch in [ "a", "o", "y", "e", "u", "i"]:
		return True
	return False


def main():
	string = input()
	string = string.lower()
	new_string = []
	for ch in string:
		if not check(ch):
			new_string.append('.')
			new_string.append(ch)
	new_string = ''.join(new_string)
	print(new_string)

main()
