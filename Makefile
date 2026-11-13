#Makefile
a.out:main.o print.o add.o del.o mode.o f_r.o f_w.o sort.o del_all.o rev.o
	cc main.o print.o add.o del.o mode.o f_r.o f_w.o sort.o del_all.o rev.o -o a.out
main.o:main.c
	cc -c main.c
rev.o:rev.c
	cc -c rev.c	
print.o:print.c
	cc -c print.c
add.o:add.c
	cc -c add.c
del.o:del.c
	cc -c del.c
mode.o:mode.c
	cc -c mode.c
f_r.o:f_r.c
	cc -c f_r.c
f_w.o:f_w.c
	cc -c f_w.c
sort.o:sort.c
	cc -c sort.c
del_all.o:del_all.c
	cc -c del_all.c

