#include "CliqueMaster.h"
#include "Cliques.h"
#include <string>
#include <stack>
#include <unordered_set>

using namespace std;

CliqueMaster::CliqueMaster()
{
	
}



void CliqueMaster::getDeltaCliques(int delta)
{
	bool is_max


	while (!S.empty())
	{
		
		c=getCliques();
		is_max=true;
		
		td=c.getTd(times,delta);
		if c._te =! td+delta
		{
			new_t=c.getLastTInInterval(times, nodes, td, delta);
			if new_t!=None
			{
				c_add = Clique((c._X, (c._tb, new_t));
				addClique(c_add);
			}
			else:
			{		
				c_add = Clique((c._X, (c._tb, td + delta)));
				addClique(c_add);
			}
			is_max = false;
		}
		else
		{
		// cannot grow on the right

		}


		tp=c.getTp(times,delta);
		if c._te =! tp+delta
		{
			new_t=c.getFirstTInInterval(times, nodes, tp, delta);
			if new_t is not None:
			{
				c_add = Clique((c._X, (new_t , c._te)));
				addClique(c_add);
			}
			else:
			{
				c_add = Clique((c._X, (tp - delta, c._te)));
				addClique(c_add);
			}
			is_max = false;
		}
		else:
		{
		sys.stderr.write(str(c) + " cannot grow on the left side\n")
		}



		// Grow node set
		candidates = c.getAdjacentNodes(times,nodes, delta);
		for node in candidates:
			if c.isClique(times, node, delta):
				Xnew = set(c._X).union([node]);
				c_add = Clique((frozenset(Xnew), (c._tb, c._te)));
				addClique(c_add);
				is_max = false;

		if is_max:
			sys.stderr.write(str(c) + " is maximal\n")
			R.add(c);



		
	}

	return R;


}



void printCliques()
{
}





void addClique(Clique c)
{
	if S_set.count(c)>0
	{
		S_set.append(c);
		S.push(c);
	}
}

Clique getCliques()
{
	c=S.top();
	S.pop();
	return c;
}


