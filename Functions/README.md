# Functions in C++

There's two features in functions in C++ **Default Value** and **Function overload**

## Default value

The simple implemntaion for function

```
void fun(int x , int y)
{
    std::cout << x << " " << y << std::endl;
}
```

in above example when you call the function you **Must** pass two paramters to `fun`

```
int main()
{
    fun(2,3);
    return 0;
}
```
The **default value** feautre allow you to pass parameter/s as a default value for the function -or not-

```
void fun(int x , int y = 10)
{
    std::cout << x << " " << y << std::endl;
}
int main()
{
    fun(2); // output is 2 10
    fun(2,3); // output is 2 3
    return 0;
}
```
so you can keep y as it is '10' or override it with a passed paerameter


### Important Notes

* default value parameter/s **MUST** be the last parameter/s in the functiom

```
void fun(int x , int y = 10 , int z) // ERROR
void fun(int x , int z , int y = 10 ) // OK
void fun(int x , int y = 10 , int z = 5) // OK,,also you can override both y and z or only z You -- can't override Only Y --
```

* If you have a Declaration and Defination ,, **Must** write the default value in **Declaration** and **NOT** in **Defination** , otherwise you would have an error

## Function overload

### TBD