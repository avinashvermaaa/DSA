# str
```
str.size()				// gives size
str.substr(start_index,length)		// substr
str1 + str2				// string concatenate
str1.compare(str2)			// string compare
reverse(str.begin(), str.end() )	// string reverse
sort(str.begin(), str.end() )		// string sort

```
```
Number of substr of str is (n)*(n+1) / 2;
Number of subsequence is 2^n;

```
# str1.compare(str2)
```
string str1,str2;
	cin>>str1>>str2;
	
	int x = str1.compare(str2);
	if(x >0) cout<<"str1 greater in length than str2"<<endl;
	else cout<<"str1 is not greater in length than str2"<<endl;
```
# string::npos
```
Check whether str1 present in str2 :-

if(str2.find(str1) != string::npos){
		cout<<"str1 is found within str2"<<endl;
```
# string is_character
```
Function	Meaning
isdigit(ch)	Is it a digit? (0–9)
isalpha(ch)	Is it a letter? (a–z, A–Z)
isalnum(ch)	Is it a letter or digit?
isspace(ch)	Is it whitespace (space, tab)?
islower(ch)	Is it lowercase letter?
isupper(ch)	Is it uppercase letter?
```
