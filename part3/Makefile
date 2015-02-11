# Object files:
OBJ = BankAccountComposition.o CheckingAccount.o BankAccountCompositionDriver.o
OBJ2 = Package.o polymorphismPackage.o TwoDayPackage.o OvernightPackage.o

# Header files:
HDR = BankAccountComposition.h CheckingAccount.h
HDR2 = Package.h TwoDayPackage.h

# Libraries
LIBS = 

# Executable
EXEC = bankAccountComposition.out
EXEC2 = polymorphismPackage.out

# One rule to rule them all
all: $(EXEC) $(EXEC2)

# Compile
CPP = g++ -c -o $@ $<
LINK = g++ -o $@ ${LIBS}

# Rules
%.o : %.cpp ${HDRS}
	${CPP}

# Executable rule
$(EXEC) : ${OBJ}
	${LINK} ${OBJ}

$(EXEC2) : ${OBJ2}
	${LINK} ${OBJ2}

# $(EXEC3) : ${OBJ3}
# 	${LINK} ${OBJ3}

# Cleaning
clean:
	rm *.o $(EXEC) $(EXEC2)
