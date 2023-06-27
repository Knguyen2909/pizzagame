#include "common.h";

static void tick(void);
static void touch(Entity* other);


void initGhost(char* line)
{
	Entity* e;
	e = malloc(sizeof(Entity));
	memset(e, 0, sizeof(Entity));
	stage.entityTail->next = e;
	stage.entityTail = e;

	e->health = 1;
	sscanf(line, "%*s %f %f", &e->x, &e->y);

	e->texture = loadTexture("gfx/ghost01.png");


	SDL_QueryTexture(e->texture, NULL, NULL, &e->w, &e->h);
	e->flags = EF_WEIGHTLESS;
	e->touch = touch;
	e->tick = tick;
	/*The ghost's location on ents01.dat is read by the program and the image is loaded onto the game*/

}

static void tick(void)
{
	self->value += 0.1;

	self->x += sin(self->value);
	/*The ghost will move sideways*/
	
}

static void touch(Entity* other)
{
	if (self->health > 0 && other == player)
	{
		player->health = 0;
		
		exit(1);
		/*If the player touches the ghost, the player's health will become 0 (losing the game)*/
	}
}

/*void doGhost(void)
{
	e ->dx = 10;

}*/
