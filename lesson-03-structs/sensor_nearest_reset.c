#include<stdio.h>

struct Sensor{
	int id;
	int dist;
};

void reset_sensor(struct Sensor *s) {
	s->dist = 0;

}

int main() {
	struct Sensor sensors[3] = {{1,120},{2,45},{3,80}};
	int n = 0;
	for (int i = 0;i < 3;i++) {
		if (sensors[i].dist < sensors[n].dist)
		{n = i;}
	}
	printf("%d",n);
	printf("id=%d\ndist=%d",sensors[n].id,sensors[n].dist);
	reset_sensor(&sensors[n]);
	printf("after reset id=%d dist=%d",sensors[n].id,sensors[n].dist);
	return 0;
}