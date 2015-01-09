#ifndef DEF_CLIQUEMASTER
#define DEF_CLIQUEMASTER

#include <string>
#include <stack>
#include <unordered_set>
#include "Clique.h"

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
	std::stack<Clique> S;	
	std::unordered_set<Clique> S_set; 
	std::stack<Clique> R;
	std::map<unordered_set,int> times;
	std::map<unordered_set,unorderded_set> times;
};

#endif
