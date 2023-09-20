CXX = c++

EXECUTABLE = petShop 

OBJS = Gatomon.o Digimon.o Pokemon.o Pikachu.o VirtualPet.o petShop.o

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
