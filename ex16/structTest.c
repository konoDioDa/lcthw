#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct pokemon {

	char *name;
	int number;
	float weight;
	char *type1;
	char *type2;
};

struct pokemon *addNewPokemon(char *name, int number, float weight, char *type1, char *type2) {

	struct pokemon *mon = malloc(sizeof(struct pokemon));
	assert(mon !=NULL);

	mon->name = strdup(name);
	mon->number = number;
	mon->weight = weight;
	mon->type1 = strdup(type1);
	mon->type2 = strdup(type2);
	
	return mon;
}

int main(int argc, char *argv[]) {

	struct pokemon *jigglypuff = addNewPokemon("Jigglypuff", 39, 12.1, "Normal", "Fairy");
	struct pokemon *victreebel = addNewPokemon("Victreebel", 71, 34.2, "Grass", "Poison");

	printf("Stats on %s:\n", victreebel->name);
	printf("# %d\n", victreebel->number);
	printf("Weight: %f lbs\n", victreebel->weight);
	printf("Type 1: %s\n", victreebel->type1);
	printf("Type 2: %s\n", victreebel->type2);

}
