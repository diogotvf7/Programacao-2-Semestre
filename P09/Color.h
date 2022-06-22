#ifndef COLOR_H
#define COLOR_H 

class Color {

    public:
        // Constructors
        Color(unsigned char red, unsigned char green, unsigned char blue);
        Color(const Color& b);
        // Accessors 
        unsigned char red() const;
        unsigned char green() const;
        unsigned char blue() const;
        // Predefined colors
        static const Color RED, GREEN, BLUE, BLACK, WHITE;
        // Compare colors
        bool equal_to(const Color& other) const;
        // Invert color
        void invert();

    private:
        // RGB values
        unsigned char red_;
        unsigned char green_;
        unsigned char blue_;
};

#endif