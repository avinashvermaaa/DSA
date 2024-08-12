# Insert Elements at any index    
```
T.C. = O(1)--> end   and O(N) rest case

insert is less efficient as it makes a copy of elements to be inserted
whereas emplace dosen't makes any copy.

  nums.emplace(nums.begin(),1);                           // Inserts 1 at the start
  nums.insert(nums.begin(), 1);                           // Inserts 1 at the start
```
# Finding an element 
```
T.C. =  O(N)

  auto it = find(nums.begin(), nums.end(), value_to_find);      

  if(it != nums.end()) cout<<"present";
  else cout<<"not present";
```
# Reverse vector  
```
T.C. = O(N)

  reverse(nums.begin(),nums.end());                   // 12345  --> 54321
```
# Sort a vector  
```
T.C. = O(N(Log(N))

  sort(nums.begin(),nums.end());                        // [3, 2, 1] --> [1, 2, 3]
  sort(begin(nums),end(nums));                        // [3, 2, 1] --> [1, 2, 3]
```
# Array sum  
```
T.C. =  O(N)

  int sum = accumulate(nums.begin(),nums.end(),0);      // 0 as initial value of sum 
```
# Erase an [Element] or a [Specific Range of Elemnt]    
``` 
T.C. =  O(N)

  nums.erase(nums.begin() + 2);      nums.erase(nums.begin());    // erase the element at index 2 {0,1, [2] }   and erase the element at index 0.
  nums.erase(nums.begin()+1, nums.begin()+4 )                     // erase [{4-1} = 3] elements starting from 1st index.

  nums.erase(remove(nums.begin(),nums.end(),0),nums.end());       // (erase / remove) all occurenece of 0.
          OR  
  nums.erase(remove(begin(nums),end(nums),0), end(nums));         // (erase / remove) all occurenece of 0.
```
# Next Permututaion
```
T.C. = O(N)

  next_permututaion(arr[0],arr[n-1]);                  // [1, 2, 3] --> [1, 3, 2]
  next_permututaion(nums.begin(),nums.end());          // [1, 2, 3] --> [1, 3, 2]
  next_permututaion(begin(nums),end(nums));            // [1, 2, 3] --> [1, 3, 2]
```
