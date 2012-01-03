LIBS = -lm
CFLAGS = -Wall
CC = g++
INCLUDE_PATH = include
SRC_PATH = src
OUTPUT = out

all: main

clean: 
	rm -f ${OUTPUT}/*.o
	
main: main.o Core.o Evaluation.o BoardView.o \
	IRule.o IsExistRule.o IndexBoundRule.o EvalOverGameRule.o EvalPairValue.o EvalSingleValue.o EvalDPairValue.o \
        IBoard.o Board.o IElement.o Element.o Common.o
	${CC} -o ${OUTPUT}/main ${OUTPUT}/main.o \
		${OUTPUT}/Core.o ${OUTPUT}/Evaluation.o ${OUTPUT}/BoardView.o \
		${OUTPUT}/IRule.o ${OUTPUT}/IsExistRule.o ${OUTPUT}/IndexBoundRule.o \
		${OUTPUT}/EvalOverGameRule.o ${OUTPUT}/EvalPairValue.o ${OUTPUT}/EvalSingleValue.o \
		${OUTPUT}/IBoard.o ${OUTPUT}/Board.o ${OUTPUT}/IElement.o ${OUTPUT}/Element.o ${OUTPUT}/Common.o ${LIBS} ${CFLAGS}
	
main.o: main.cpp ${INCLUDE_PATH}/Core.h
	${CC} -c -o ${OUTPUT}/main.o main.cpp ${LIBS} ${CFLAGS}

Core.o: ${SRC_PATH}/Core.cpp ${INCLUDE_PATH}/Core.h ${INCLUDE_PATH}/IBoard.h ${INCLUDE_PATH}/IRule.h \
            ${INCLUDE_PATH}/BoardView.h ${INCLUDE_PATH}/Evaluation.h ${INCLUDE_PATH}/Common.h
	${CC} -c -o ${OUTPUT}/Core.o ${SRC_PATH}/Core.cpp ${LIBS} ${CFLAGS}
	
# Evalution fields
Evaluation.o: ${SRC_PATH}/Evaluation.cpp ${INCLUDE_PATH}/Evaluation.h ${INCLUDE_PATH}/IBoard.h ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/Evaluation.o ${SRC_PATH}/Evaluation.cpp ${LIBS} ${CFLAGS}

# View fields
BoardView.o: ${SRC_PATH}/BoardView.cpp ${INCLUDE_PATH}/BoardView.h ${INCLUDE_PATH}/IBoard.h
	${CC} -c -o ${OUTPUT}/BoardView.o ${SRC_PATH}/BoardView.cpp ${LIBS} ${CFLAGS}

# Rule fields
EvalDPairValue.o: ${SRC_PATH}/EvalDPairValue.cpp ${INCLUDE_PATH}/EvalDPairValue.h ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/EvalDPairValue.o ${SRC_PATH}/EvalDPairValue.cpp ${LIBS} ${CFLAGS}

EvalSingleValue.o: ${SRC_PATH}/EvalSingleValue.cpp ${INCLUDE_PATH}/EvalSingleValue.h ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/EvalSingleValue.o ${SRC_PATH}/EvalSingleValue.cpp ${LIBS} ${CFLAGS}
	
EvalPairValue.o: ${SRC_PATH}/EvalPairValue.cpp ${INCLUDE_PATH}/EvalPairValue.h ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/EvalPairValue.o ${SRC_PATH}/EvalPairValue.cpp ${LIBS} ${CFLAGS}

EvalOverGameRule.o: ${SRC_PATH}/EvalOverGameRule.cpp ${INCLUDE_PATH}/EvalOverGameRule.h ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/EvalOverGameRule.o ${SRC_PATH}/EvalOverGameRule.cpp ${LIBS} ${CFLAGS}

IndexBoundRule.o: ${SRC_PATH}/IndexBoundRule.cpp ${INCLUDE_PATH}/IndexBoundRule.h ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/IndexBoundRule.o ${SRC_PATH}/IndexBoundRule.cpp ${LIBS} ${CFLAGS}
	
IsExistRule.o: ${SRC_PATH}/IsExistRule.cpp ${INCLUDE_PATH}/IsExistRule.h ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/IsExistRule.o ${SRC_PATH}/IsExistRule.cpp ${LIBS} ${CFLAGS}

IRule.o: ${SRC_PATH}/IRule.cpp ${INCLUDE_PATH}/IRule.h
	${CC} -c -o ${OUTPUT}/IRule.o ${SRC_PATH}/IRule.cpp ${LIBS} ${CFLAGS}

# Domain fields
Board.o: ${SRC_PATH}/Board.cpp ${INCLUDE_PATH}/Board.h
	${CC} -c -o ${OUTPUT}/Board.o ${SRC_PATH}/Board.cpp ${LIBS} ${CFLAGS}

IBoard.o: ${SRC_PATH}/IBoard.cpp ${INCLUDE_PATH}/IBoard.h ${INCLUDE_PATH}/Common.h
	${CC} -c -o ${OUTPUT}/IBoard.o ${SRC_PATH}/IBoard.cpp ${LIBS} ${CFLAGS}

Element.o: ${SRC_PATH}/Element.cpp ${INCLUDE_PATH}/Element.h
	${CC} -c -o ${OUTPUT}/Element.o ${SRC_PATH}/Element.cpp ${LIBS} ${CFLAGS}

IElement.o: ${SRC_PATH}/IElement.cpp ${INCLUDE_PATH}/IElement.h ${INCLUDE_PATH}/Common.h
	${CC} -c -o ${OUTPUT}/IElement.o ${SRC_PATH}/IElement.cpp ${LIBS} ${CFLAGS}

# Common fields
Common.o: ${SRC_PATH}/Common.cpp ${INCLUDE_PATH}/Common.h
	${CC} -c -o ${OUTPUT}/Common.o ${SRC_PATH}/Common.cpp ${LIBS} ${CFLAGS}
