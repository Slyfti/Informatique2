exe: triLents.o fonctions.o main.o
	@echo "compilation de l'executable"
	gcc triLents.o fonctions.o main.o -o exe
triLents.o: triLents.c triLents.h
	@echo "compilations de fonctions triLents"
	gcc -c -Wall triLents.c  -o triLents.o

fonctions.o: fonctions.c fonctions.h
	@echo "compilations de fonctions"
	gcc -c -Wall fonctions.c  -o fonctions.o

main.o: main.c fonctions.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o
