#pragma once

struct piggybank
{
	float dollarOne;
	float dollarTwo;
	float dollarFive;
	float coinQuarter;
	float coinNickle;
	float coinPennies;
	float coinDime;

};


float calcPiggybankNotes(piggybank piggy);


float calcPiggybankCoins(piggybank piggy);


float calcPiggybankTotal(piggybank piggy);
