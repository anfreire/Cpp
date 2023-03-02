<a id="home"></a>

# Index

&nbsp;

- [Namespaces](#namespaces)
- [IOStream](#iostream)
- [Classes and Instances](#classes-and-instances)
- [Member Attributes and Member Functions](#member-attributes-and-member-functions)
- [this](#this)
- [Initializer List](#initializer-list)
- [const](#const)
- [Visability](#visability)
- [Classes vs Structs](#classes-vs-structs)
- [Comparisons](#comparisons)

&nbsp;

---

# Namespaces

## Namespaces are used to group functions, classes, variables, etc.

&nbsp;

It's defined like this:

```cpp
namespace MyNamespace {
  // ...
}
```

### You can alias a namespace to a better/more descriptive name:

```cpp
namespace new_name = MyNamespace;
```

### To access a namespace, you can use the `::` operator:

Accessing a function:

```cpp
MyNamespace::myFunction();
```

Accessing a class:

```cpp
MyNamespace::myClass myClassInstance;
```

Accessing a variable:

```cpp
MyNamespace::myVariable;
```

### We will use the `std` namespace, for standard library functions, quite often.

&nbsp;

[Go to the top](#home)

---

# IOStream

## The `iostream` library is used for input/output.

### Now, let's look at some examples:

&nbsp;


```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```

- `#include <iostream>` - includes the `iostream` library
- std::cout - prints to the console
- std::endl - prints a new line
  
`cout` is an object of the ostream class, which is defined in the iostream library, stands for "character output stream". We use the insertion operator (`<<`) to insert a string into the output stream, by redirecting the output stream to the console.

`endl` is an object of the ostream class, which is defined in the iostream library, stands for "end of line". We use the insertion operator (`<<`) to insert a string into the output stream, by redirecting the output stream to the console.

&nbsp;

[Go to the top](#home)

---

```cpp
#include <iostream>

int main() {

	char	buffer[256];

	std::cout << "Input a word: ";
	std::cin >> buffer;
	std::cout << "You entered: " << buffer << std::endl;
  
  	return 0;
}
```

- `#include <iostream>` - includes the `iostream` library
- std::cout - prints to the console
- std::cin - reads from the console

`cin` is an object of the istream class, which is defined in the iostream library, stands for "character input stream". We use the extraction operator (`>>`) to extract a string from the input stream, by redirecting the input stream from the console.

&nbsp;

[Go to the top](#home)

---

# Classes and Instances

## Classes are used to define objects.

&nbsp;

- The declaration of the classes is done in the header file, with the `.hpp` extension.
- The definition of the classes is done in the source file, with the `.cpp` extension.

&nbsp;

### Declaring a class:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {
	
  public:
	MyClass(void);
	~MyClass(void);
	
};
#endif
```

- `class MyClass` - defines a class named `MyClass`
- public - defines the access specifier, which is used to define the access level of the members of the class.
- MyClass(void) - defines a constructor, which is used to initialize the class.
- ~MyClass(void) - defines a destructor, which is used to destroy the class.

&nbsp;

### Defining a class:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(void) {
  std::cout << "Constructor called" << std::endl;
  return;
}

MyClass::~MyClass(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}
```

- `#include "MyClass.hpp"` - includes the header file of the class
- MyClass::MyClass(void) - defines the constructor of the class. The constructor is called when an instance of the class is created.
- MyClass::~MyClass(void) - defines the destructor of the class. The destructor is called when an instance of the class is destroyed.

As we can see, we must use return statements in the constructor and destructor, because they are of type `void`.

&nbsp;

### Creating an instance of a class:

```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance;

  return 0;
}
```

- `#include "MyClass.hpp"` - includes the header file of the class
- MyClass myClassInstance - creates an instance of the class, named `myClassInstance`
- myClassInstance - is an instance of the class, which is used to access the members of the class.

When we create an instance of a class, the constructor is called. When the program ends, the destructor is called.

&nbsp;

[Go to the top](#home)

---

# Member Attributes and Member Functions

## Member attributes and member functions are used to define the members of a class.

&nbsp;

### Declaring attributes and functions:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	int myAttribute1;
	
  public:
	MyClass(void);
	~MyClass(void);
	
	int myAttribute2;
	void myFunction(void);
	
};

#endif
```

- `int myAttribute1` - defines an integer attribute, named `myAttribute1`
- `int myAttribute2` - defines an integer attribute, named `myAttribute2`
- `void myFunction(void)` - defines a function, named `myFunction`

&nbsp;

### Defining attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(void) {
  std::cout << "Constructor called" << std::endl;
  return;
}

MyClass::~MyClass(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}

void MyClass::myFunction(void) {
  std::cout << "myFunction called" << std::endl;
  return;
}
```

- `void MyClass::myFunction(void)` - defines the function `myFunction` of the class `MyClass`. The function is called when the function is called.

&nbsp;

### Accessing attributes and functions:


```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance;

  myClassInstance.myAttribute1 = 42;
  std::cout << myClassInstance.myAttribute1 << std::endl;
  myClassInstance.myAttribute2 = 21;
  std::cout << myClassInstance.myAttribute2 << std::endl;
  myClassInstance.myFunction();

  return 0;
}
```

- `myClassInstance.myAttribute1 = 42` - sets the value of the attribute `myAttribute1` of the instance `myClassInstance` to `42`
- `myClassInstance.myAttribute2 = 21` - sets the value of the attribute `myAttribute2` of the instance `myClassInstance` to `21`
- `myClassInstance.myFunction()` - calls the function `myFunction` of the instance `myClassInstance`

&nbsp;

[Go to the top](#home)

---

# this


## The `this` pointer is used to access the members of the class.

&nbsp;

### Declaring attributes and functions:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	int myAttribute1;
	
  public:
	MyClass(void);
	~MyClass(void);
	
	int myAttribute2;
	void myFunction(void);
	
};

#endif
```

&nbsp;

### Defining attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(void) {
  	std::cout << "Constructor called" << std::endl;
	
	this->myAttribute1 = 42;
	this->myAttribute2 = 21;
	std::cout << this->myAttribute1 << std::endl;
	std::cout << this->myAttribute2 << std::endl;
	
	this->myFunction();
	
  	return;
}

MyClass::~MyClass(void) {
  	std::cout << "Destructor called" << std::endl;
  	return;
}

void MyClass::myFunction(void) {
  	std::cout << "myFunction called" << std::endl;
  	return;
}
```
- `this->myAttribute1 = 42` - sets the value of the attribute `myAttribute1` of the instance `myClassInstance` to `42`
- this->myAttribute2 = 21` - sets the value of the attribute `myAttribute2` of the instance `myClassInstance` to `21`
- this->myFunction()` - calls the function `myFunction` of the instance `myClassInstance`

&nbsp;

### Accessing attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance;

  return 0;
}
```

As we can see, we can access the members of the class using the `this` pointer, that was used to create the instance of the class, in the constructor.

&nbsp;

[Go to the top](#home)

---

# Initializer List

## The initializer list is used to initialize the attributes of a class.

&nbsp;

### Declaring attributes and functions:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	int myAttribute1;
	float myAttribute2;
	char myAttribute3;
	
  public:
	MyClass(int myAttribute1, float myAttribute2, char myAttribute3);
	~MyClass(void);

};

#endif
```

&nbsp;

### Defining attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(int myAttribute1, float myAttribute2, char myAttribute3) {
	
  std::cout << "Constructor called" << std::endl;
  

  this->myAttribute1 = myAttribute1;
  std::cout << this->myAttribute1 << std::endl;

  this->myAttribute2 = myAttribute2;
  std::cout << this->myAttribute2 << std::endl;

  this->myAttribute3 = myAttribute3;
  std::cout << this->myAttribute3 << std::endl;

  return;
}

MyClass::~MyClass(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}
```
&nbsp;
# OR
&nbsp;

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(int myAttribute1, float myAttribute2, char myAttribute3) : myAttribute1(myAttribute1), myAttribute2(myAttribute2), myAttribute3(myAttribute3) {
	
  std::cout << "Constructor called" << std::endl;
  
  std::cout << this->myAttribute1 << std::endl;
  std::cout << this->myAttribute2 << std::endl;
  std::cout << this->myAttribute3 << std::endl;

  return;
}

MyClass::~MyClass(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}
```

- `MyClass::MyClass(int myAttribute1, float myAttribute2, char myAttribute3) : myAttribute1(myAttribute1), myAttribute2(myAttribute2), myAttribute3(myAttribute3)` - initializes the attributes `myAttribute1`, `myAttribute2` and `myAttribute3` of the class `MyClass` with the values of the parameters `myAttribute1`, `myAttribute2` and `myAttribute3` of the constructor `MyClass::MyClass(int myAttribute1, float myAttribute2, char myAttribute3)`
- `this->myAttribute1 = myAttribute1` - sets the value of the attribute `myAttribute1` of the instance `myClassInstance` to `myAttribute1`
- `this->myAttribute2 = myAttribute2` - sets the value of the attribute `myAttribute2` of the instance `myClassInstance` to `myAttribute2`
- `this->myAttribute3 = myAttribute3` - sets the value of the attribute `myAttribute3` of the instance `myClassInstance` to `myAttribute3`

As we can see, we can initialize the attributes of the class using the initializer list, that was used to create the instance of the class, in the constructor or we can initialize the attributes of the class using the `this` pointer, that was used to create the instance of the class, in the constructor.
It is recommended to use the initializer list, because it is faster.

### Accessing attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance(42, 21.12, 'a');

  return 0;
}
```
&nbsp;

[Go to the top](#home)

---

# const

## The `const` keyword is used to make the attributes of a class constant.

&nbsp;

### Declaring attributes and functions:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	
	public:
	
		float		myAttribute1;
		int	const	myAttribute2;

		
		MyClass(int const unexistingAttribute);
		~MyClass(void);

		void	myFunction(void) const;
	
	
};

#endif
```

- the `const` keyword is used to make the attribute `myAttribute2` of the class `MyClass` constant
- the `const` keyword is used to make the function `myFunction` of the class `MyClass` constant. It means that the function `myFunction` cannot modify the attributes of the class `MyClass`

&nbsp;

### Defining attributes and functions:
#### ⚠️ Code with errors ⚠️
```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(int const unexistingAttribute) : myAttribute1(42.42), myAttribute2(21) {
	
  std::cout << "Constructor called" << std::endl;

  this->myAttribute1 = 42.42;

  std::cout << this->myAttribute1 << std::endl;

  this->myAttribute2 = 21;

  std::cout << this->myAttribute2 << std::endl;

  return;
}

MyClass::~MyClass(void) {
  std::cout << "Destructor called" << std::endl;
  return;
}

void MyClass::myFunction(void) const {
	
  std::cout << "myFunction called" << std::endl;

  this->myAttribute1 = 42.42;
  
  std::cout << this->myAttribute1 << std::endl;

  this->myAttribute2 = 21;

  std::cout << this->myAttribute2 << std::endl;
  
  return;
}
```

In this example, there are a few errors:
- On the constructor `MyClass::MyClass(int const unexistingAttribute)`:
	- `this->myAttribute2 = 21` - the attribute `myAttribute2` is constant, so it cannot be modified
- On the function `void MyClass::myFunction(void) const`:
	- `this->myAttribute1 = 42.42` - the attribute `myAttribute1` is not constant, but the function `myFunction` is constant, so it cannot modify the attributes of the class `MyClass`
	- `this->myAttribute2 = 21` - the attribute `myAttribute2` is constant, so it cannot be modified and the function `myFunction` is constant, so it cannot modify the attributes of the class `MyClass`

It's important to use the `const` keyword when possible, because in large projects, it can be what saves from hours of debugging.

&nbsp;

[Go to the top](#home)

---

# Visibility

## The visibility of the attributes and functions define who can access the attributes and functions of the class.

&nbsp;

### Types of visibility:

- `public` - the attributes and functions are accessible from everywhere
- `private` - the attributes and functions are accessible only from inside the class
- `protected` - the attributes and functions are accessible only from inside the class and from the classes that inherit from the class


&nbsp;

### Declaring attributes and functions:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	
	public:
	
		int	publicAttribute;

		
		MyClass(void);
		~MyClass(void);

		void	publicFunction(void);

	
	private:

		int	_privateAttribute;

		void	_privateFunction(void);
		
};

#endif
```

- the `public` keyword is used to make the attribute `publicAttribute` of the class `MyClass` public
- the `public` keyword is used to make the function `publicFunction` of the class `MyClass` public
- the `private` keyword is used to make the attribute `_privateAttribute` of the class `MyClass` private
- the `private` keyword is used to make the function `_privateFunction` of the class `MyClass` private

The constructor and the destructor by default are public.

It's good practice to name the private attributes and functions with a `_` at the beginning of the name.

&nbsp;

### Defining attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(void) {
	
  std::cout << "Constructor called" << std::endl;

  this->publicAttribute = 42;

  std::cout << this->publicAttribute << std::endl;

  this->publicFunction();

  this->_privateAttribute = 21;

  std::cout << this->_privateAttribute << std::endl;

  this->_privateFunction();

  return;
}


MyClass::~MyClass(void) {

  std::cout << "Destructor called" << std::endl;
  
  return;
}


void MyClass::publicFunction(void) {
	
  std::cout << "publicFunction called" << std::endl;

  return;
}

```

&nbsp;

### Accessing attributes and functions:

#### ⚠️ Code with errors ⚠️
```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance;

  myClassInstance.publicAttribute = 42;

  std::cout << myClassInstance.publicAttribute << std::endl;

  myClassInstance.publicFunction();

  myClassInstance._privateAttribute = 21;

  std::cout << myClassInstance._privateAttribute << std::endl;

  myClassInstance._privateFunction();

  return 0;
}
```

In this example, there are a few errors:
- when accessing the attribute `privateAttribute` from outside the class `MyClass`, on the lines:
  -  `myClassInstance._privateAttribute = 21;`
  -  `std::cout << myClassInstance._privateAttribute << std::endl;`
- when accessing the function `_privateFunction` from outside the class `MyClass`, on the line:
  -  `myClassInstance._privateFunction();`

As we can see, the attributes and functions that are private are not accessible from outside the class `MyClass`. The attributes and functions that are public are accessible from everywhere.

As we saw, we used the private attributes and functions inside the class `MyClass`, on the constructor and the destructor. So, we conclude that the private attributes and functions are accessible only from inside the class `MyClass`.

&nbsp;

[Go to the top](#home)

---

# Classes vs Structs

## The main difference between classes and structs is the default visibility of the attributes and functions.

&nbsp;

### Declaration:

```cpp
#ifndef HEADER_HPP
# define HEADER_HPP

class MyClass {

	int	attribute;

	
	MyClass(void);
	~MyClass(void);

	void	function(void);
		
};


struct MyStruct {

	int	attribute;

	
	MyStruct(void);
	~MyStruct(void);

	void	function(void);
		
};

#endif
```

&nbsp;

### Acessing attributes and functions:
#### ⚠️ Code with errors ⚠️
```cpp
#include <iostream>
#include "Header.hpp"

int main() {

  MyClass myClassInstance;

  myClassInstance.attribute = 42;

  std::cout << myClassInstance.attribute << std::endl;

  myClassInstance.function();

  MyStruct myStructInstance;

  myStructInstance.attribute = 21;

  std::cout << myStructInstance.attribute << std::endl;

  myStructInstance.function();

  return 0;
}
```

In this example, there are a few errors:
- when accessing the attribute `attribute` from the class `MyClass`, on the line:
  -  `myClassInstance.attribute = 42;`
- when accessing the function `function` from the class `MyClass`, on the line:
  -  `myClassInstance.function();`

Classes by default have private attributes and functions, so they are not accessible from outside the class.

Structs by default have public attributes and functions, so they are accessible from everywhere.

We should use classes, because it's better to have the attributes and functions private by mistake, than to have them public by mistake.

&nbsp;

[Go to the top](#home)

---

# Accessors

## Accessors are functions that are used to access the attributes of a class.

&nbsp;

### Declaration:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	
	public:
	
		int		getPrivateAttribute(void) const;
		void	setPrivateAttribute(int privateAttribute);

		MyClass(void);
		~MyClass(void);

	
	private:

		int	_privateAttribute;
		
};

#endif
```

- the `getPrivateAttribute` function is used to get the value of the attribute `_privateAttribute`
- the `setPrivateAttribute` function is used to set the value of the attribute `_privateAttribute`
- a getter must be `const` and must return the type of the attribute

&nbsp;

### Definition:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(void) {
	
  std::cout << "Constructor called" << std::endl;

  return;

}

int MyClass::getPrivateAttribute(void) const {
	
  return this->_privateAttribute;

}

void MyClass::setPrivateAttribute(int privateAttribute) {
	
  if (privateAttribute < 0) {
	std::cout << "Error: privateAttribute must be positive" << std::endl;
	return;
  }
  else {
	this->_privateAttribute = privateAttribute;
  }
  
  return;

}

```

- In this example, the setter `setPrivateAttribute` checks if the value of the attribute `_privateAttribute` is positive. If it's not, it prints an error message and returns. If it's positive, it sets the value of the attribute `_privateAttribute` to the value of the parameter `privateAttribute`.
- With the getter `getPrivateAttribute`, we can get the value of the attribute `_privateAttribute` from outside the class `MyClass`.
- With the setter `setPrivateAttribute`, we can set the value of the attribute `_privateAttribute` from outside the class `MyClass`.

&nbsp;

### Acessing attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance;

  myClassInstance.setPrivateAttribute(42);

  std::cout << myClassInstance.getPrivateAttribute() << std::endl;

  return 0;
}
```

&nbsp;

### Acessing attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance;

  myClassInstance.setPrivateAttribute(42);

  std::cout << myClassInstance.getPrivateAttribute() << std::endl;

  return 0;
}
```

&nbsp;

[Go to the top](#home)

---

# Comparisons

## We can compare objects of a class, by defining a comparison function.

&nbsp;

### Declaration:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	
	public:

		MyClass(int attribute);
		~MyClass(void);

		int		getPrivateAttribute(void) const;
		int		compare(MyClass const * other) const;

	
	private:

		int	_privateAttribute;
		
};

#endif
```

- the `compare` function is used to compare the object `MyClass` with another object `MyClass`


&nbsp;

### Definition:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(int attribute) : _privateAttribute(attribute) {
	
  std::cout << "Constructor called" << std::endl;

  return;

}

int MyClass::getPrivateAttribute(void) const {
	
  return this->_privateAttribute;

}

int MyClass::compare(MyClass * other) const {
	
  if (this->_privateAttribute < other->getPrivateAttribute())
	return -1;
  else if (this->_privateAttribute > other->getPrivateAttribute())
	return 1;

  return 0;
  
}

```


- In this example, the function `compare` compares the value of the attribute `_privateAttribute` of the object `MyClass` with the value of the attribute `_privateAttribute` of the object `MyClass` passed as parameter. 
  - If the value of the attribute `_privateAttribute` of the object `MyClass` is less than the value of the attribute `_privateAttribute` of the object `MyClass` passed as parameter, it returns `-1`.
  - If the value of the attribute `_privateAttribute` of the object `MyClass` is greater than the value of the attribute `_privateAttribute` of the object `MyClass` passed as parameter, it returns `1`. 
  - If the value of the attribute `_privateAttribute` of the object `MyClass` is equal to the value of the attribute `_privateAttribute` of the object `MyClass` passed as parameter, it returns `0`.
- With the function `compare`, we can compare the value of the attribute `_privateAttribute` of the object `MyClass` with the value of the attribute `_privateAttribute` of another object `MyClass` passed as parameter.

&nbsp;

### Acessing attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

  MyClass myClassInstance1(42);
  MyClass myClassInstance2(21);

  std::cout << myClassInstance1.compare(&myClassInstance2) << std::endl;

  return 0;
}
```

&nbsp;

[Go to the top](#home)

---

# Non-member attributes and Non-member functions

## We can define attributes and functions that are not members of a class, but that are associated with a class.

&nbsp;

### Declaration:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	
	public:

		MyClass(void);
		~MyClass(void);

		static int		getNumberOfInstances(void);

	
	private:
	
		static int	_numberOfInstances;
		
};

#endif
```

&nbsp;

### Definition:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(void) {
	
  std::cout << "Constructor called" << std::endl;

  MyClass::_numberOfInstances++;

  return;

}

MyClass::~MyClass(void) {
	
  std::cout << "Destructor called" << std::endl;

  MyClass::_numberOfInstances--;

  return;

}

int MyClass::getNumberOfInstances(void) {
	
  return MyClass::_numberOfInstances;

}

int MyClass::_numberOfInstances = 0;

```

- In this example, we initialize the value of the attribute `_numberOfInstances` to `0`. Besides being a private attribute, it is also a static attribute, so we can initialize it outside the class `MyClass`.

&nbsp;

### Acessing attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"


void f0(void) {

	MyClass myClassInstance;

	std::cout << MyClass::getNumberOfInstances() << std::endl;

  	return;
}


void f1(void) {

	MyClass myClassInstance;

	std::cout << MyClass::getNumberOfInstances() << std::endl;
	
	f0();

  	return;
}


int main() {

	std::cout << MyClass::getNumberOfInstances() << std::endl;

	f1();

	std::cout << MyClass::getNumberOfInstances() << std::endl;

	return 0;

}
```

&nbsp;

[Go to the top](#home)

---

# Pointers to objects

## We can use pointers to objects of a class.

&nbsp;

### Declaration:

```cpp
#ifndef MYCLASS_HPP
# define MYCLASS_HPP

class MyClass {

	
	public:
		
		int		attribute;

		MyClass(void);
		~MyClass(void);

		void	fun(void) const;

};

#endif
```

&nbsp;

### Definition:

```cpp
#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(void) {
	
  std::cout << "Constructor called" << std::endl;

  return;

}

MyClass::~MyClass(void) {
	
  std::cout << "Destructor called" << std::endl;

  return;

}

void MyClass::fun(void) const {
	
  std::cout << "member function called" << std::endl;

  return;

}

```

&nbsp;

### Acessing attributes and functions:

```cpp
#include <iostream>
#include "MyClass.hpp"

int main() {

	MyClass myClassInstance1;

	MyClass * myClassInstance2 = &myClassInstance1;

	int		MyClass::*attributePointer = NULL;
	void	(MyClass::*funPointer)(void) const;

	attributePointer = &MyClass::attribute;

	std::cout << "Value of the attribute: " << myClassInstance1.attribute << std::endl;
	
	myClassInstance1.*attributePointer = 42;
	
	std::cout << "Value of the attribute: " << myClassInstance1.attribute << std::endl;
	
	myClassInstance2->*attributePointer = 21;
	
	std::cout << "Value of the attribute: " << myClassInstance1.attribute << std::endl;
	
	funPointer = &MyClass::fun;
	
	(myClassInstance1.*funPointer)();

	(myClassInstance2->*funPointer)();

	return 0;

}
```

- In this example, we declare a pointer to an attribute of the class `MyClass` and a pointer to a function of the class `MyClass`.
- We use the operator `->` to access the attribute and the function of the object `MyClass` pointed to by the pointer `myClassInstance2`.
- We use the operator `.*` to access the attribute and the function of the object `MyClass` pointed to by the pointer `myClassInstance1`.
- We use the operator `&` to get the address of the attribute and the function of the class `MyClass`.
- We use the operator `*` to get the value of the attribute and the function of the class `MyClass`.
- We use the operator `->*` to access the attribute and the function of the object `MyClass` pointed to by the pointer `myClassInstance2`.

&nbsp;

[Go to the top](#home)

---

# Conclusion

&nbsp;

## We have seen:
<h3>
	
-	how to define a class
-	how to define its attributes and functions
-	how to define its constructors and destructors
-	how to define its access modifiers
-	how to define its static attributes and functions
-	how to define its non-member attributes and functions
-	how to use pointers to objects of a class.
	
</h3>

&nbsp;

[Go to the top](#home)
