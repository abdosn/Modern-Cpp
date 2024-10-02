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

```
/* OK code */
void fun(int x , int y = 10);
void fun(int x , int y)
{
    //some code
}


/* Compilation Error */
void fun(int x , int y = 10);
void fun(int x , int y = 10)
{
    //some code
}

/* Compilation Error */
void fun(int x , int y);
void fun(int x , int y = 10)
{
    //some code
}

```

## Function overload

Function overloading is a feature where two or more functions can have the same name but different 
parameters.

Example

```
void fun(int x , int y)
{
    std::cout << x << " " << y << std::endl;
}

void fun(int x , float y)
{
    std::cout << "Hello float" << std::endl;
}

int main(void)
{
    fun(2 , 2.5F); // Output: Hello float
    
    fun(2 , 3); // Output: 2 3

    return 0;
}
```

**IMPORTANT NOTE** : Overloading happens in input paramters and **NOT** in return type

Example:
```
/* Compilation Error */
int fun(int x , int y)
{
    std::cout << x << " " << y << std::endl;
}

float fun(int x , int y)
{
    std::cout << "Hello float" << std::endl;
}
int main(void)
{
    fun(2 , 2);
    
    fun(2 , 3);

    return 0;
}
```

How those functions are compiled ? *using Name mangling*


Name mangling is the encoding of function and variable names into unique names so that linkers can separate common names in the language

in assembly code You may found Two names for `fun` 