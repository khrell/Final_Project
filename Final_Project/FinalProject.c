#include <stdio.h>
#include <string.h>
#define STRSIZ 6
#define ROOM_DESC 1000

typedef enum {
	HealthPotion, TableLeg, GlassBottle, AdrenalShot, PaperClip
} ObjectType;


typedef struct {
	char description[200];
	ObjectType type;
} encounter_object;

typedef struct {
	char description[50];
} help_commands;

typedef struct {
	encounter_object objects[10];
	char dir[STRSIZ];
	int seq;
	char room_desc[ROOM_DESC];
	help_commands commands[5];
	int commandsCount;
} room_template;



int main()
{
	jail_cell();

	return 0;
}

jail_cell()
{
	room_template encounter1;
	encounter1.seq = 1;
	strcpy(encounter1.room_desc,"How do you want to escape the jail cell?\n");

	encounter_object object1;
	strcpy(object1.description,"Health Potion");
	object1.type = HealthPotion;
	encounter1.objects[0] = object1;

	encounter_object object2;
	strcpy(object2.description,"Paper Clip");
	object2.type = PaperClip;
	encounter1.objects[1] = object2;

	help_commands cmd;
	strcpy(cmd.description, "South");
	encounter1.commands[0] = cmd;

	help_commands cmd1;
	strcpy(cmd1.description, "Use Paperclip");
	encounter1.commands[1] = cmd1;

	encounter1.commandsCount = 2;
	
	
	printf("%s", encounter1.room_desc);
	char jail_input[14];
	printf("What would you like to do?");
	gets_s("%s", jail_input);

	switch (switch_on)
	{
	default:
		break;
	}

	

	return 0;

}

