#include <iostream>
#include <string>

class Movie {

    private:
        std::string title;
        std::string director;
        double rating;
        int duration;

    public:
        // Declare default constructor
        Movie();

        void setTitle(std::string userTitle);
        void setDirector(std::string userDirector);
        void display();
};

// Implement default constructor using INITIALIZER LIST. Same exact thing as Exercise4
Movie::Movie() : title("Inception"), director("Christopher Nolan"), rating(8.8),
                 duration(148) { }

void Movie::setTitle(std::string userTitle) {
    // Please note that both lines below are equivalent.

    // "this" is a pointer, the arrow is a dereference operator
    this->title = userTitle;
    // if you use asterisk to deference, then you must use dot to get
    // the title. You'd be double-dereferencing by using both asterisk and arrow
    // which is totally wrong.
    (*this).title = userTitle;
}

void Movie::setDirector(std::string userDirector) {
    this->director = userDirector;
}

void Movie::display() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Director: " << director << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Duration: " << duration << std::endl;
    std::cout << std::endl;
}

int main() {
    // Create two objects
    Movie m1, m2;
    
    m1.display();
    m2.display();

    // Change title and director of m2
    m2.setTitle("Buddy Buddy");
    m2.setDirector("Billy Wilder");

    m2.display();
}