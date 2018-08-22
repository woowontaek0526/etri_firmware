.SUFFIXES : .c .o

CC = /etc/alternatives/cc

OBJS1 = ADD.o
OBJS2 = and.o
OBJS3 = barrelshifter.o
OBJS4 = B.o
OBJS6 = cmn.o
OBJS7 = cmp.o
OBJS8 = ldr.o
OBJS9 = msr.o
OBJS10 = mul.o
OBJS11 = or.o
OBJS12 = or_lsl.o
OBJS13 = SUB.o
OBJS14 = xor.o
all : ADD and barrelshifter B cmn cmp ldr msr mul or or_lsl SUB xor

ADD : $(OBJS1)
		$(CC) -o ADD $(OBJS1)
and : $(OBJS2)
		$(CC) -o and $(OBJS2)
barrelshifter : $(OBJS3)
		$(CC) -o barrelshifter $(OBJS3)
B : $(OBJS4)
		$(CC) -o B $(OBJS4)


cmn : $(OBJS6)
		$(CC) -o cmn $(OBJS6)
cmp : $(OBJS7)
		$(CC) -o cmp $(OBJS7)
ldr : $(OBJS8)
		$(CC) -o ldr $(OBJS8)
msr : $(OBJS9)
		$(CC) -o msr $(OBJS9)
mul : $(OBJS10)
		$(CC) -o mul $(OBJS10)
or : $(OBJS11)
		$(CC) -o or $(OBJS11)
or_lsl : $(OBJS12)
		$(CC) -o or_lsl $(OBJS12)
SUB : $(OBJS13)
		$(CC) -o SUB $(OBJS13)
xor : $(OBJS14)
		$(CC) -o xor $(OBJS14)


