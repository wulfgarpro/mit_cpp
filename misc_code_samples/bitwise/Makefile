CXX = g++

default: or and xor not xor_challenge

or: or.c
	$(CXX) or.c -o or

and: and.c
	$(CXX) and.c -o and 

xor: xor.c
	$(CXX) xor.c -o xor 

not: not.c
	$(CXX) not.c -o not 

xor_challenge: xor_challenge.c
	$(CXX) xor_challenge.c -o xor_challenge 

clean:
	rm or and xor not xor_challenge

all: clean or and xor not xor_challenge
