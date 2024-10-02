# Initialization

There are # Types of initialization

1. Defualt initialization
2. Value initialization
3. Direct initialization
4. Copy initialization


## Default initialization
Default initialization is declaring a variable without assigning any value to it


Example:
```
int global;

void fun(void)
{
    int local;
}
```
In above example: `local` and `global` are default initialized 

if we see the value of `global` it's always a `0` but `local` is a garbage value

This because the memory section that the global varible exists is prevoiusly initialized with zeros (.bss section because it's uninitialized)

However `local` variable is stored in stack memory which already has a garbage values

## Value initialization

## Direct initialization

## Copy initialization