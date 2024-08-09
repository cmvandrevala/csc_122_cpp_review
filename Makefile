1: clean
	g++ --std=c++11 1_hello_world.cpp -o 1_hello_world
	./1_hello_world

2: clean
	g++ --std=c++11 2_addition.cpp -o 2_addition
	./2_addition

3: clean
	g++ --std=c++11 3_arithmetic.cpp -o 3_arithmetic
	./3_arithmetic

4: clean
	g++ --std=c++11 4_comparisons.cpp -o 4_comparisons
	./4_comparisons

5: clean
	g++ --std=c++11 5_conditionals.cpp -o 5_conditionals
	./5_conditionals

6: clean
	g++ --std=c++11 6_using_keywords.cpp -o 6_using_keywords
	./6_using_keywords

clean:
	@rm -f 1_hello_world
	@rm -f 2_addition
	@rm -f 3_arithmetic
	@rm -f 4_comparisons
	@rm -f 5_conditionals
	@rm -f 6_using_keywords
