CPP - g++
CPPFLAGS = -Wall
LD = g++

PROGRAM = covid 
OBJS = principal.o Nacional.o Estadual.OBJS

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(LD) $(OBJS) -o $@
.cpp.o: 
	$(CPP) $(CPPFLAGS) -c $<

clean: 
	rm -f *.o $(PROGRAM)
	
