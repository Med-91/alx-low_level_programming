		Project : 0x0B. C - malloc, free

Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
	- What is the difference between automatic and dynamic allocation
	- What is malloc and free and how to use them
	- Why and when use malloc
	- How to use valgrind to check for memory leak

Tasks : 

- Task 0 : [0. Float like a butterfly, sting like a bee ]

	Write a function that creates an array of chars, and initializes it with a specific char.
	- Prototype: char *create_array(unsigned int size, char c);
	- Returns NULL if size = 0
	- Returns a pointer to the array, or NULL if it fails

- Task 1 : [1. The woman who has no imagination has no wings ]

	Write a function that returns a pointer to a newly allocated space in memory, which contains 
	a copy of the string given as a parameter. 
	- Prototype: char *_strdup(char *str);
	- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. 
	Memory for the new string is obtained with malloc, and can be freed with free.
    	- Returns NULL if str = NULL
	- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

- Task 2 :[2. He who is not courageous enough to take risks will accomplish nothing in life ]

- Task 3 :

- Task 4 :

- Task 5 :

- Task 6 :
