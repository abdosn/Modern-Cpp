# Datatypes in C++

| datatype      | type  | avalible in C |
| ------------- | ----- | ------------- |
| int | primitve | Yes |
| float | primitve | Yes |
| double | primitve | Yes |
| char | primitve | Yes |
| bool |primitve | No |
| void |primitve | Yes |
| wide char |primitve | No |
| array |derived | Yes |
| function |derived | Yes |
| pointer | derived | Yes |
| structre |user defined | Yes |
| union |user defined | Yes |
| enum |user defined | Yes |
| class |user defined | No |

So only difference in datatypes between C and C++ is `bool`, `w_char` and `class`

## bool

In C if you want to decalre bool value you would do this
```
typedef unsigned char bool;

#define FALSE 0
#define TRUE 1 

/** 
 * also some people do this 
 * #define TRUE !FALSE
 */
```
In C++ `bool` is built-in in c++

### Examples

See examples below and there assembly represetation

```
bool x1 = true;     // movb 0x1 , some addr
bool x2 = false;    // movb 0x0 , some addr
bool x3 = 1;        // movb 0x1 , some addr
bool x4 = 0;        // movb 0x0 , some addr
bool x5 = -3;       // movb 0x1 , some addr
bool x6 = 0.4;      // movb 0x1 , some addr
```

so in short words 

> a zero value is false otherwise it's true

## wchar_t

we all know that char is 1 byte size

what if we have some characters outside English (like Arabic or Japanese) then we need to use `wchar_t`

* Size of `wchar_t` is: ***Compiler dependant*** may be 2 bytes or 4 bytes

### example 

```
wchar_t letter = 'ج';

cout << sizeof(letter) << " " << letter ;

```

the output in my machine is 
```
4 55468
```
which is kind of true as `55468` is `0xd8ac` which by search represent 'ج'

> class datatype will be explained in OOP 

