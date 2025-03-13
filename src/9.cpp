// A class for representing a complex number
class Complex {
    private:
        double real; // Real part of the complex number
        double imaginary; // Imaginary part of the complex number
    
    public:
        // Constructor
        Complex(double r, double i) : real{r}, imaginary{i} {}
    
        // Methods for getting and setting the real and imaginary parts
        double getReal() { return real; }
        void setReal(double r) { real = r; }
        double getImaginary() { return imaginary; }
        void setImaginary(double i) { imaginary = i; }
    
        // Overloading the + and - operators to perform arithmetic operations on complex numbers
        Complex operator+(Complex other) {
            return Complex(real + other.getReal(), imaginary + other.getImaginary());
        }
    
        Complex operator-(Complex other) {
            return Complex(real - other.getReal(), imaginary - other.getImaginary());
        }
    
        // Overloading the * and / operators to perform arithmetic operations on complex numbers
        Complex operator*(Complex other) {
            return Complex(real * other.getReal() - imaginary * other.getImaginary(), real * other.getImaginary() + imaginary * other.getReal());
        }
    
        Complex operator/(Complex other) {
            double denominator = pow(other.getReal(), 2) + pow(other.getImaginary(), 2);
            return Complex((real * other.getReal() + imaginary * other.getImaginary()) / denominator, (imaginary * other.getReal() - real * other.getImaginary()) / denominator);
        }
};
