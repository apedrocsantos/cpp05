# CPP06

## Nested Classes

We can define classes in the definition of another class.

```CPP
class Cat
{
    public:
    class Leg
    {
        //[...]
    }
};

class Dog
{
    public:
    class Leg
    {
        //[...]
    }
}

int main()
{
    Cat         somecat;
    Cat::Leg    somecatsLeg;
}
```

## Exceptions

### [**Exception handling in C++**](https://www.geeksforgeeks.org/exception-handling-c/)

### [**List of std exceptions**](https://www.geeksforgeeks.org/cpp-program-to-handle-the-exception-methods/)

Exceptions are a way of handling errors by reporting with a message when an error is found instead of handling errors like in C (returning -1, 1, 2, 3...).

```CPP
void test1()
{
    try // try to do something that could return an exception
    {
        if (error)
            throw std::exception(); //throws an exception

    }
    catch (std::exception e)
    {
        // Handle the error
    }
}
```

When we *throw* an exception, it goes through the code blocks until if finds a **catch** block to handle the error `e`.

`e.what` returns a message describing what happened.

We can throw exceptions through different functions by using a reference to the exception:

```CPP
void test2()
{
    if (error)
    {
        throw std::exception();
    }
    else
    {
        //Do stuff
    }
}

void test3()
{
    try
    {
        test2();
    }
    catch (std::exception& e)
    {
        //Handle error
    }
}
```

Catch can be seen as a function (but it isn't) which has exception as a parameter.

```CPP
void test4()
{
    class PEBKACException : public std::exception
    {
        public:
        virtual const char* what() const throw() //function can throw an exception
        {
            //return something
        }
    };

    try
    {
        test3();
    }
    catch (PEBKACException& e) //specific catch
    {
        //Handle PEBKACException
    }
    catch (std::exception& e) //generic catch
    {
        //Handle other exceptions that are like std::exception
    }
}
```

Exceptions are very resource-hungry. Errors that return very often should use return value to indicate it. Exceptional errors should use exceptions.

