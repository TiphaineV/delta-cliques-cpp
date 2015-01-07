#ifndef DEF_CLIQUEMASTER
#define DEF_CLIQUEMASTER

#include <string>
#include <stack>
class CliqueMaster:
{
	public:
	CliqueMaster();
	void getDeltaCliques(int delta);
	void printCliques() const;
	void addClique(Clique c);

	private:
	Clique getCliques

	private:

	Clique S;
        Clique R; //Pas de using namespace std, il faut donc mettrestd:: devant string
	int times[NB liens];
	int nodes[NB nodes];
};

#endif
