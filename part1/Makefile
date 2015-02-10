# Object files:
OBJ = BankAccount.o BoatLoan.o CheckingAccount.o BankAccountDriver.o
# OBJ2 = Package.o packageDriver.o TwoDayPackage.o OvernightPackage.o
# OBJ3 = Package.o polymorphismPackage.o TwoDayPackage.o OvernightPackage.o

# Header files:
HDR = BankAccount.h BoatLoan.h CheckingAccount.h
# HDR2 = Package.h TwoDayPackage.h OvernightPackage.o
# HDR3 = Package.h TwoDayPackage.h

# Libraries
LIBS = 

# Executable
EXEC = bankAccount.out
# EXEC2 = packageDriver.out
# EXEC3 = polymorphismPackage.out

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

# $(EXEC2) : ${OBJ2}
# 	${LINK} ${OBJ2}

# $(EXEC3) : ${OBJ3}
# 	${LINK} ${OBJ3}

# Cleaning
clean:
	rm *.o $(EXEC)
