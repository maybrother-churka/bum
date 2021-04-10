#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

int main()
{
	std::string code;
	int character;

	printf("Secret Messages\nA) Code\nB) Decode");
	char buttonPress = _getch();
	system("cls");
	switch (buttonPress) {
	case 'a':
	case 'A':
		printf("What message do you want to code?\n");
		getline(std::cin, code);

		printf("Here's your coded message:\n");
		for (int i = 0; i != code.length(); i++) {
			printf("%d ", int(char(code[i])));
		}
		break;
	case 'b':
	case 'B':
		printf("What message do you want to decode?\n");
		while (true) {
			std::cin >> character;
			printf("%c", char(character));
		}
	default:
		main();
	}
}