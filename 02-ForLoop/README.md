# Ranged for loop

> Exist in C++ (Not C), C# and python 

The simple old for loop

```
int arr[3] = {1,2,3};

for(int i = 0 ; i < 3 ; i++)
{
    std::cout << arr[i] << std::endl;
}
```
### use case 

used only for looping on a collection of data

### syntax

```
int arr[3] = {1,2,3};

for(int i : arr)
{
    std::cout << i << std::endl;
}
```

Note that i here is an element of the array

So what's the difference ?

ranged for loop is translated into more instructions than regular for loop

