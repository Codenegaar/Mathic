#ifndef MATHIC_HPP
#define MATHIC_HPP

/*!
    * The core Mathic class
    * Use this class to perform the basic operations
    */
class Mathic
{
public:
    /*!
        * Mathic class constructor, does nothing at the moment
        */
    explicit Mathic();
    
    /*!
        * this method returns the sum of two numbers
        * @param a the first operand
        * @param b the second operand
        * @return the result of the addition
        */
    double add(double a, double b) const;
    /*!
        * this method returns the multiplication of two numbers
        * @param a the first operand
        * @param b the second operand
        * @return the result of the multiplication
        */
    double mul(double a, double b) const;
};

#endif
