#ifndef STRING_UTILS_GET_POINTER
#define STRING_UTILS_GET_POINTER


static char * get_pointer_end (char * ptr) {
	while (*ptr != '\0')
		++ptr;
	return ptr;
}

static char * get_pointer_character (char * ptr, char c) {
	char * end = get_pointer_end (ptr);
	while (ptr <= end && *ptr != c)
		++ptr;
	return (*ptr != c) ? NULL : ptr;
}

static char * get_nth_pointer_character (char * ptr, char c, int n) {
	do {
		char * p = _get_pointer_character (ptr);
	} while (p != NULL && --n > 0);
	return p;
}

static char * get_pointer_before_character (char * src, char * ptr, char c) {
	while (*ptr != c && ptr >= src)
		--ptr;

	return (*ptr != c) ? NULL : ptr;
}


#ifdef __CPP__
	const auto &getPointerEnd = get_pointer_end;
	const auto &getCharacterPointer = get_character_pointer;
	const auto &getNthPointerCharacter = get_nth_pointer_character;
	const auto &getPointerByCharacterBeforePointer = get_pointer_by_character_before_pointer;
	const auto &getCharacterPointerBefore = get_pointer_by_character_before_pointer;
#endif


#endif