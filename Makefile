# Object files:
OBJ = BankAccount.o BoatLoan.o CheckingAccount.o

# Header files:
HDR = BankAccount.h BoatLoan.h CheckingAccount.h

# Libraries
LIBS = 

# Executable
EXEC = bankAccount.out

# One rule to rule them all
all: $(EXEC)

# Compile
CPP = g++ -c -o $@ $<
LINK = g++ -o $@ ${LIBS}

# Rules
%.o : %.cpp ${HDRS}
	${CPP}

# Executable rule
$(EXEC) : ${OBJ}
	${LINK} ${OBJ}

# Cleaning
clean:
	rm *.o $(EXEC)
