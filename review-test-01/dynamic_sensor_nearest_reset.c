#include<stdio.h>
#include<stdlib.h>

struct Sensor {
	int id;
	int dist;
};

void reset_sensor(struct Sensor *s) {
		s->dist = 0;
}

int main() {
	struct Sensor *sensors = (struct Sensor*)malloc(3*sizeof(struct Sensor));
	if (sensors == NULL) {return 1;}
	sensors[0].id = 1;sensors[0].dist = 120;
	sensors[1].id = 2;sensors[1].dist = 45;
	sensors[2].id = 3,sensors[2].dist = 80;
	int m = 0;
	for (int i = 0;i < 3;i++) {
		if (sensors[i].dist < sensors[m].dist) {
		m = i;
		}
	}
	printf("nearest id=%d dist=%d\n",sensors[m].id,sensors[m].dist);
	reset_sensor(&sensors[m]);
	printf("after reset id=%d dist=%d\n",sensors[m].id,sensors[m].dist);
	free(sensors);
	sensors = NULL;
	return 0;
}