#include <stdio.h>
#include <string.h>
#define STRSIZ 6
#define ROOM_DESC 300

typedef enum {
	HealthPotion, TableLeg, GlassBottle
} ObjectType;


typedef struct {
	char description[200];
	ObjectType type;
} encounter_object;

typedef struct {
	encounter_object objects[10];
	char dir[STRSIZ];
	int seq;
	char room_desc[ROOM_DESC];

} room_template;



int main()
{
	

	return 0;
}

char jail_cell()
{

	room_template encounter1;
	encounter1.seq = 1;
	strcpy("This is my first room description", encounter1.room_desc);

	encounter_object myEncounterObj;
	strcpy("Ultra Health Potion", myEncounterObj.description);
	myEncounterObj.type = HealthPotion;
	encounter1.objects[0] = myEncounterObj;

	encounter_object myEncounterObj2;
	strcpy("Health Potion", myEncounterObj2.description);
	encounter1.objects[1] = myEncounterObj2;

	room_template encounter2;
	strcpy("This is my 2nd room desc", encounter2.room_desc);
	encounter2.seq = 2;




}

