PROJECT_NAME = Bank
SRC = src/PrintDetails.c \
src/RegisterAccount.c \
src/SearchAccount.c \
src/SortAccount.c \
src/Transaction.c \
src/WriteFile.c \
src/menu.c

INC_H = inc

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

$(PROJECT_NAME).exe : $(SRC) main.c
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJECT_NAME).exe

run :
	$(PROJECT_NAME).exe

DOCUMENTATION_OUTPUT = documentation/html

# Document the code using Doxygen
doc:
	make -C ./documentation
