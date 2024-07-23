#include <iostream>

class School {
    protected:
        std::string presidentName;
        int numStudents;

    public:
        School() {
            presidentName = "";
            numStudents = 0;
        }

        School(std::string presName, int numStds) {
            presidentName = presName;
            numStudents = numStds;
        }

        void print() {
            std::cout << presidentName << " " << numStudents << std::endl;
        }
};

class URI : public School {
    private:
        std::string mascotName;
        int yearFounded;
    
    public:
        URI(std::string presName, int numStds, std::string mName, int userYear) : School(presName, numStds) {
            this->mascotName = mName;
            this->yearFounded = userYear;
        } 

        // OR
        URI(std::string presName, int numStds, std::string mName, int userYear) : School(presName, numStds), mascotName(mName), yearFounded(userYear) { }

        
        void print() {
            std::cout << presidentName << " " << numStudents << " " << mascotName << " " << yearFounded << std::endl;
        }
};

// Create a main function to test if needed.