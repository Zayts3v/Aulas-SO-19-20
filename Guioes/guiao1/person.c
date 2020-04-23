#include <string.h>
#include <stdlib.h>

int new_person(char *name, int age) {
	Person p;
	strncpy(p.name, name, 200);
	p.age = age;
	return 0;
}

int person_change_age(char *name, int age) {
	// fd = open("pessoas.bin")
	// read() enquanto strcmp(p.name, name) != 0
	// atualiza a ideda na struct
	// lseek(fd, -sizeof(struct), SEEK_CUR)
	//write(...)
	//close ()
	return 0;
}

int person_change_age_v2(long pos, int age) {
	// open("pessoas.bin")
	// pos = (record_id - 1) * sizeof(struct Person)
	// lseek(fd, pos, SEEK_SET)
	// Person p;
	// READ(..., &p, sizeof(struct Person))
	// alteramos p.age = age
	// lseek(fd, sizeof(struct), SEEK_CUR)
	// write()
	// close
	return 0;
}