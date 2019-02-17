SOURCES=main.cpp
EXE=thread.out


$(EXE): $(SOURCES)
	$(CXX) -pthread -o $@ $^

.PHONY: clean
clean:
	rm -f *.o *.out
