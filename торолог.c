#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	const char *Starts[] = {
		"Катя говорит",
		"Великая Катя предсказывает",
		"Катя шепчет",
		"Катя решила,что",
		"Голос судьбы говорит",
		"Бабка у подъезда сообщает",
		"Голуби передали",
		"Один дед сказал,что",
		"мама сказала, что",
		"Макан сегодня не в духе:",
		"Вселенная устала молчать:"
		
		
	};
	const char *Midlle[] = {
		"Погода сегодня теплая",
		"один носок исчезнет навсегда",
		"сегодня лучше не спорить с бабушкой",
		"один случайный чих все изменит",
		"кто-то уже думает о тебе",
		"кажется что-то лежит в твоем кармане...",
		"ОНИ тебя видят..",
		"сегодня ты описаешься",
		"то что ты скрываешь..они уже все знают..уже ничего не поможет...",
		"люди злые"
	};
	const char *End[] = {
		"ходи оглядывайся",
		"беги пока не поздно",
		"подтяни штаны срочно",
		"не трогай сегодня ничего",
		"выключи свет и беги",
		"снимай штаны и бегай",
		"пора покакать"
	};
	int countStarts = sizeof(Starts) / sizeof(Starts[0]);
	int countMidlle = sizeof(Midlle) / sizeof(Midlle[0]);
	int countEnd = sizeof(End) / sizeof(End[0]);
	 srand (time(NULL));
	
	int idxStart = rand() % countStarts;
	int idxMidlle = rand() % countMidlle;
	int idxEnd = rand() % countEnd;
	
	const char *phrase1 = Starts[idxStart];
	const char *phrase2 = Midlle[idxMidlle];
	const char *phrase3 = End[idxEnd];
	
	printf("%s", phrase1);
	printf(" %s", phrase2);
	printf(" %s\n", phrase3);
	
	
}
