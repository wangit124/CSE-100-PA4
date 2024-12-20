/* Description: This program defines each edge in the actor-movie graph, 
 * actors are connected based on the common movies they acted in. 
 *
 * Name: Luhao Wang
 * Email: luw055@ucsd.edu
 * Date: May 25, 2019
 * Sources: Piazza
 */

#ifndef ACTOREDGE_HPP
#define ACTOREDGE_HPP

#include <string>

class ActorNode; // Define ActorNode

using namespace std;

/** A class, instances of which are edges in an Actorgraph. 
 * Member variables store the movie name, year, and connected actors
 */
class ActorEdge {
public:
	// Name of actor
    std::string movieName;

	// Name the year
	int year;

	// Weight of edge
	int weight;

	// Pointers to two connected actors
	ActorNode * actor1;
	ActorNode * actor2;	
	
	// Define previous pointer for use in BFS
	ActorNode * prevNode;

	// Constructor for ActorEdge, initializes member variables
    ActorEdge(std::string name, int year, ActorNode * node1, ActorNode * node2);
};
#endif // ACTOREDGE_HPP

/* EXTRA DO NOT UNCOMMENT */

// Compare the movies by name
//int checkEqual(ActorEdge * other);

// Change < operator to sort by year
/*	bool operator<(ActorEdge * const & other) const {
	// Compare years
	return (this->year) < (other->year);
}*/
