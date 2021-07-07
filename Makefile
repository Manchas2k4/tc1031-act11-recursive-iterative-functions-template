all: clean runTest1

runTest1:
	g++ test1.cpp -o runTest1

clean:
ifneq ("$(wildcard ./runTest1)","")
	rm runTest1
endif
