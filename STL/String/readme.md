# str
```
str.size()				// gives size
str.substr(start_index,length)		// substr
str1 + str2				// string concatenate
str1.compare(str2)			// string compare
reverse(str.begin(), str.end() )	// string reverse
sort(str.begin(), str.end() )		// string sort

```
# str1.compare(str2)
```
string str1,str2;
	cin>>str1>>str2;
	
	int x = str1.compare(str2);
	if(x >0) cout<<"str1 greater in length than str2"<<endl;
	else cout<<"str1 is not greater in length than str2"<<endl;
```
