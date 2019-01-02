# Define these macros to match with your project's filenames
TARGET = ReactionRateCalculator 
OBJS = ReactionRateCalculator.o

#for icc
#LIBS = -lgsl -lgslcblas -lm -lstdc++
#CPP = icc
#CPPFLAGS = -O3 -parallel

#for gcc
LIBS = -lgsl -lgslcblas -lm -lstdc++ `root-config --libs`
CPP = g++
CPPFLAGS = -O3 -Wall `root-config --cflags`


.SUFFIXES: .cpp

$(TARGET): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $(OBJS) $(LIBS)

# `make clean' removes extra files that crop up during development
clean:
	-rm $(OBJS) 
	-rm *~
	-rm -f doc/*.aux
	-rm -f doc/*.bbl
	-rm -f doc/*.blg
	-rm -f doc/*~
	-rm -f doc/*.log
	-rm -f doc/*.dvi

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $< 