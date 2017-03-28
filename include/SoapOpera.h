#ifndef SOAPOPERA_H
#define SOAPOPERA_H


class Episode{
private:
	Episode *episode[];

public:
	Episode* generateEpisode();
	void deleteEpisode(Episode *epi);
};

class Genre{
	private
	Genre *genre[];

public:
	Genre* generateGenre();

};

class Character{
private:
	Character *character[];

public:
	Character* generateCharacter();
	void deleteCharacter(Character *chart);
};



#endif